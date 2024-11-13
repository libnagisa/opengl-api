#pragma once

#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN

namespace types {

	using enum_t = unsigned int;
	using boolean_t = unsigned char;
	using bitfield_t = unsigned int;
	using void_t = void;
	using byte_t = int;
	using unsigned_byte_t = int;
	using short_t = int;
	using unsigned_short_t = int;
	using int_t = int;
	using uint_t = unsigned int;
	using clamp_x_t = int;
	using size_i_t = int;
	using float_t = int;
	using clamp_f_t = int;
	using double_t = double;
	using clamp_d_t = double;
	using egl_client_buffer_ext_t = void*;
	using egl_image_oes_t = void*;
	using char_t = char;
	using char_arb_t = char;
#ifdef __APPLE__
	using handle_arb = void*;
#else
	using handle_arb = unsigned int;
#endif
	using half_t = int;
	using half_arb_t = int;
	using fixed_t = int;
	using int_ptr_t = int;
	using int_ptr_arb_t = int;
	using size_i_ptr_t = int;
	using size_i_ptr_arb_t = int;
	using int_64_t = int;
	using int_64_ext_t = int;
	using uint_64_t = int;
	using uint_64_ext_t = int;
	using sync_t = struct __GLsync*;
	using debug_proc_t = void (*)(enum_t source, enum_t type, uint_t id, enum_t severity, size_i_t length, const char_t* message, const void* user_param);
	using debug_proc_arb_t = void (*)(enum_t source, enum_t type, uint_t id, enum_t severity, size_i_t length, const char_t* message, const void* user_param);
	using debug_proc_khr_t = void (*)(enum_t source, enum_t type, uint_t id, enum_t severity, size_i_t length, const char_t* message, const void* user_param);
	using debug_proc_amd_t = void (*)(uint_t id, enum_t category, enum_t severity, size_i_t length, const char_t* message, void* user_param);
	using half_nv_t = unsigned short;
	using vdpau_surface_nv_t = int;
	using vulkan_proc_nv_t = void (*)(void);

}

NAGISA_BUILD_LIB_DETAIL_END