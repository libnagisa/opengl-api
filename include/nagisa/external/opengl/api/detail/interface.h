#pragma once

#include "./concept.h"
#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN


template<class Char, ::std::size_t N>
struct basic_static_string
{
	consteval explicit(false) basic_static_string(Char const(&data)[N]) noexcept
	{
		for (::std::size_t i = 0; i < N; ++i)
		{
			_data[i] = data[i];
		}
	}

	constexpr auto begin() const noexcept { return &_data[0]; }
	constexpr auto end() const noexcept { return &_data[N - 1]; }
	constexpr auto data() const noexcept { return &_data[0]; }

	Char _data[N];
};


template<basic_static_string Name, concepts::function Function>
struct symbol
{
private:
	using self_type = symbol;
public:
	using function_type = Function;
	constexpr static auto name = Name;
};

template<class Derived, class Function>
struct gl_cpo;

template<class Derived, class ReturnType, class... Params>
	requires ((!::std::is_reference_v<Params>) && ...)
struct gl_cpo<Derived, ReturnType(Params...)>
{
private:
	using self_type = gl_cpo;
public:
	using derived_type = Derived;

	template<context Context>
	constexpr static auto callable() noexcept
	{
		return requires(Context context, Params... params) { { derived_type::call(context, params...) } -> ::std::same_as<ReturnType>; };
	}

	constexpr
#if defined(__cpp_static_call_operator)
		static
#endif
		decltype(auto) operator()(context auto const& context, Params... params)
#if !defined(__cpp_static_call_operator)
		const
#endif
		noexcept(derived_type::call(context, params...))
		requires (self_type::template callable<decltype(context)>())
	{
		return derived_type::call(context, params...);
	}
};

#define NAGISA_EXTERNAL_OPENGL_API_DEFINE_FUNCTION(id, interface ,type)					\
struct _##id##_cpo																		\
	: ::nagisa::external::opengl::api::details::gl_cpo<_##id##_cpo, type>				\
{																						\
	constexpr static decltype(auto) call(context auto const& context, auto... params) noexcept\
		requires requires { context.id(params...); }									\
	{																					\
		if constexpr (requires { context.id(params...); })								\
		{																				\
			return context.id(params...);												\
		}																				\
	}																					\
};																						\
namespace invocables{ template<class T> concept id = _##id##_cpo::template callable<T>(); } \
inline constexpr _##id##_cpo id{}														\
//

#define NAGISA_EXTERNAL_OPENGL_API_DEFINE_ENUM(id, interface, value) \
inline constexpr auto id = value \
//

NAGISA_BUILD_LIB_DETAIL_END