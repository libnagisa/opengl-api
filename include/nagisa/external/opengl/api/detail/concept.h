#pragma once

#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN

namespace cpo_details
{
	enum class choose
	{
		none,
		member,
		adl,
	};
	struct result
	{
		choose value;
		bool except;
	};

	template<class Context>
	consteval result choose_current_version() noexcept
	{
		if constexpr (requires(Context context) { context.current_version(); })
		{
			return { choose::member, noexcept(::std::declval<Context>().current_version()) };
		}
		else if constexpr (requires(Context context) { current_version(context); })
		{
			return { choose::adl, noexcept(current_version(::std::declval<Context>())) };
		}
		else
		{
			return { choose::none, true };
		}
	}
}

#if defined(__cpp_static_call_operator)
#	define NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_STATIC static
#	define NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_CONST
#else
#	define NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_STATIC
#	define NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_CONST const
#endif

inline constexpr struct
{
	constexpr NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_STATIC decltype(auto) operator()(auto&& context) NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_CONST
		noexcept(cpo_details::choose_current_version<decltype(context)>().except)
		requires (cpo_details::choose_current_version<decltype(context)>().value != cpo_details::choose::none)
	{
		if constexpr (
			constexpr auto result = cpo_details::choose_current_version<decltype(context)>();
			result.value == cpo_details::choose::member)
		{
			return context.current_version();
		}
		else if constexpr (result.value == cpo_details::choose::adl)
		{
			return current_version(context);
		}
	}
}current_version{};

#undef NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_STATIC
#undef NAGISA_EXTERNAL_OPENGL_API_PRIVATE_CALL_CONST

template<class T>
struct context_version_major { constexpr static auto value = ::std::remove_reference_t<T>::version_major; };
template<class T> requires requires { {context_version_major<T>::value}; }
inline constexpr auto context_version_major_v = context_version_major<T>::value;
template<class T>
struct context_version_minor { constexpr static auto value = ::std::remove_reference_t<T>::version_minor; };
template<class T> requires requires { {context_version_minor<T>::value}; }
inline constexpr auto context_version_minor_v = context_version_minor<T>::value;

struct version
{
	int major;
	int minor;
};

template<class T>
concept context = requires(T& t)
{
	{ context_version_major_v<T> };
	{ context_version_minor_v<T> };
	{ current_version(t) } -> ::std::convertible_to<version const&>;
		requires ::std::integral<::std::remove_cvref_t<decltype(context_version_major_v<T>)>>;
		requires ::std::integral<::std::remove_cvref_t<decltype(context_version_minor_v<T>)>>;
};

NAGISA_BUILD_LIB_DETAIL_END