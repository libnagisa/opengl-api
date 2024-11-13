#pragma once

#include "./detail/concept.h"
//#include "./detail/api.h"
#include "./detail/version.h"
#include "./detail/type.h"
#include "./detail/interface.h"
#include "./environment.h"

NAGISA_BUILD_LIB_BEGIN

using details::context;
using details::version;
using details::context_1_0;
using details::context_1_1;
using details::context_1_3;
using details::context_1_4;
using details::context_1_5;
using details::context_2_0;
using details::context_2_1;
using details::context_3_0;
using details::context_3_1;
using details::context_3_2;
using details::context_3_3;
using details::context_4_1;
using details::context_4_3;
using details::context_4_5;

using namespace details::api;
namespace constants = details::constants;

using details::symbol;
namespace meta_info = details::meta_info;

using details::check_version;
using details::is_valid;

using details::void_t;
using details::enum_t;
using details::float_t;
using details::int_t;
using details::size_i_t;
using details::bit_field_t;
using details::double_t;
using details::uint_t;
using details::boolean_t;
using details::unsigned_byte_t;

using details::clamp_double_t;
using details::clamp_float_t;

using details::size_i_ptr_t;
using details::intptr_t;

using details::char_t;
using details::short_t;
using details::byte_t;
using details::unsigned_short_t;

using details::half_t;

using details::sync_t;
using details::uint64_t;
using details::int64_t;

NAGISA_BUILD_LIB_END