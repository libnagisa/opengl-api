#pragma once

#include "./detail/concept.h"
#include "./detail/version.h"
#include "./detail/type.h"
#include "./detail/interface.h"
#include "./environment.h"

NAGISA_BUILD_LIB_BEGIN

using details::context;
using details::version;

using details::check_version;
using details::is_valid;

namespace types = details::types;

using details::symbol;

NAGISA_BUILD_LIB_END