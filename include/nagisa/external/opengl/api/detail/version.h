#pragma once

#include "./concept.h"
#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN

constexpr decltype(auto) is_valid(context auto& c) noexcept
{
	auto version = current_version(c);
	return (version.major > context_version_major_v<decltype(c)>)
		|| (version.major == context_version_major_v<decltype(c)> && version.minor >= context_version_minor_v<decltype(c)>);
}

constexpr decltype(auto) check_version(context auto& c) noexcept
{
	if (!details::is_valid(c))
	{
		::std::abort();
	}
}

NAGISA_BUILD_LIB_DETAIL_END