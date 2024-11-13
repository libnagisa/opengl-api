#pragma once

#include "./basic.h"
#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN

using void_t = void;
using enum_t = unsigned int;
using float_t = float;
using int_t = int;
using size_i_t = int;
using bit_field_t = unsigned int;
using double_t = double;
using uint_t = unsigned int;
using boolean_t = unsigned char;
using unsigned_byte_t = unsigned char;

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(polygon_mode, glPolygonMode, void_t(enum_t face, enum_t mode));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(scissor, glScissor, void_t(int_t x, int_t y, size_i_t width, size_i_t height));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(texture_parameter_i, glTexParameteri, void_t(enum_t target, enum_t name, int_t param));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(texture_image_2d, glTexImage2D, void_t(enum_t target, int_t level, int_t internal_format, size_i_t width, size_i_t height, int_t border, enum_t format, enum_t type, void const* pixels));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(clear, glClear, void_t(bit_field_t mask));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(clear_color, glClearColor, void_t(float_t red, float_t green, float_t blue, float_t alpha));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(disable, glDisable, void_t(enum_t cap));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(enable, glEnable, void_t(enum_t cap));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(flush, glFlush, void_t(void_t));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(pixel_store_i, glPixelStorei, void_t(enum_t name, int_t param));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(read_pixels, glReadPixels, void_t(int_t x, int_t y, size_i_t width, size_i_t height, enum_t format, enum_t type, void* pixels));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_error, glGetError, enum_t(void_t));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_integer_v, glGetIntegerv, void_t(enum_t name, int_t* data));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_string, glGetString, unsigned_byte_t const* (enum_t name));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(is_enabled, glIsEnabled, boolean_t(enum_t cap));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(viewport, glViewport, void_t(int_t x, int_t y, size_i_t width, size_i_t height));

template<class T>
concept context_1_0 = context<T>
	&& invocables::polygon_mode<T>
	&& invocables::scissor<T>
	&& invocables::texture_parameter_i<T>
	&& invocables::texture_image_2d<T>
	&& invocables::clear<T>
	&& invocables::clear_color<T>
	&& invocables::disable<T>
	&& invocables::enable<T>
	&& invocables::flush<T>
	&& invocables::pixel_store_i<T>
	&& invocables::read_pixels<T>
	&& invocables::get_error<T>
	&& invocables::get_integer_v<T>
	&& invocables::get_string<T>
	&& invocables::is_enabled<T>
	&& invocables::viewport<T>
	;

namespace constants
{
	inline constexpr auto depth_buffer_bit = 0x00000100;
	inline constexpr auto stencil_buffer_bit = 0x00000400;
	inline constexpr auto color_buffer_bit = 0x00004000;
	inline constexpr auto false_ = 0;
	inline constexpr auto true_ = 1;
	inline constexpr auto points = 0x0000;
	inline constexpr auto lines = 0x0001;
	inline constexpr auto line_loop = 0x0002;
	inline constexpr auto line_strip = 0x0003;
	inline constexpr auto triangles = 0x0004;
	inline constexpr auto triangle_strip = 0x0005;
	inline constexpr auto triangle_fan = 0x0006;
	inline constexpr auto never = 0x0200;
	inline constexpr auto less = 0x0201;
	inline constexpr auto equal = 0x0202;
	inline constexpr auto lequal = 0x0203;
	inline constexpr auto greater = 0x0204;
	inline constexpr auto notequal = 0x0205;
	inline constexpr auto gequal = 0x0206;
	inline constexpr auto always = 0x0207;
	inline constexpr auto zero = 0;
	inline constexpr auto one = 1;
	inline constexpr auto src_color = 0x0300;
	inline constexpr auto one_minus_src_color = 0x0301;
	inline constexpr auto src_alpha = 0x0302;
	inline constexpr auto one_minus_src_alpha = 0x0303;
	inline constexpr auto dst_alpha = 0x0304;
	inline constexpr auto one_minus_dst_alpha = 0x0305;
	inline constexpr auto dst_color = 0x0306;
	inline constexpr auto one_minus_dst_color = 0x0307;
	inline constexpr auto src_alpha_saturate = 0x0308;
	inline constexpr auto none = 0;
	inline constexpr auto front_left = 0x0400;
	inline constexpr auto front_right = 0x0401;
	inline constexpr auto back_left = 0x0402;
	inline constexpr auto back_right = 0x0403;
	inline constexpr auto front = 0x0404;
	inline constexpr auto back = 0x0405;
	inline constexpr auto left = 0x0406;
	inline constexpr auto right = 0x0407;
	inline constexpr auto front_and_back = 0x0408;
	inline constexpr auto no_error = 0;
	inline constexpr auto invalid_enum = 0x0500;
	inline constexpr auto invalid_value = 0x0501;
	inline constexpr auto invalid_operation = 0x0502;
	inline constexpr auto out_of_memory = 0x0505;
	inline constexpr auto cw = 0x0900;
	inline constexpr auto ccw = 0x0901;
	inline constexpr auto point_size = 0x0B11;
	inline constexpr auto point_size_range = 0x0B12;
	inline constexpr auto point_size_granularity = 0x0B13;
	inline constexpr auto line_smooth = 0x0B20;
	inline constexpr auto line_width = 0x0B21;
	inline constexpr auto line_width_range = 0x0B22;
	inline constexpr auto line_width_granularity = 0x0B23;
	inline constexpr auto polygon_mode = 0x0B40;
	inline constexpr auto polygon_smooth = 0x0B41;
	inline constexpr auto cull_face = 0x0B44;
	inline constexpr auto cull_face_mode = 0x0B45;
	inline constexpr auto front_face = 0x0B46;
	inline constexpr auto depth_range = 0x0B70;
	inline constexpr auto depth_test = 0x0B71;
	inline constexpr auto depth_writemask = 0x0B72;
	inline constexpr auto depth_clear_value = 0x0B73;
	inline constexpr auto depth_func = 0x0B74;
	inline constexpr auto stencil_test = 0x0B90;
	inline constexpr auto stencil_clear_value = 0x0B91;
	inline constexpr auto stencil_func = 0x0B92;
	inline constexpr auto stencil_value_mask = 0x0B93;
	inline constexpr auto stencil_fail = 0x0B94;
	inline constexpr auto stencil_pass_depth_fail = 0x0B95;
	inline constexpr auto stencil_pass_depth_pass = 0x0B96;
	inline constexpr auto stencil_ref = 0x0B97;
	inline constexpr auto stencil_writemask = 0x0B98;
	inline constexpr auto viewport = 0x0BA2;
	inline constexpr auto dither = 0x0BD0;
	inline constexpr auto blend_dst = 0x0BE0;
	inline constexpr auto blend_src = 0x0BE1;
	inline constexpr auto blend = 0x0BE2;
	inline constexpr auto logic_op_mode = 0x0BF0;
	inline constexpr auto draw_buffer = 0x0C01;
	inline constexpr auto read_buffer = 0x0C02;
	inline constexpr auto scissor_box = 0x0C10;
	inline constexpr auto scissor_test = 0x0C11;
	inline constexpr auto color_clear_value = 0x0C22;
	inline constexpr auto color_writemask = 0x0C23;
	inline constexpr auto doublebuffer = 0x0C32;
	inline constexpr auto stereo = 0x0C33;
	inline constexpr auto line_smooth_hint = 0x0C52;
	inline constexpr auto polygon_smooth_hint = 0x0C53;
	inline constexpr auto unpack_swap_bytes = 0x0CF0;
	inline constexpr auto unpack_lsb_first = 0x0CF1;
	inline constexpr auto unpack_row_length = 0x0CF2;
	inline constexpr auto unpack_skip_rows = 0x0CF3;
	inline constexpr auto unpack_skip_pixels = 0x0CF4;
	inline constexpr auto unpack_alignment = 0x0CF5;
	inline constexpr auto pack_swap_bytes = 0x0D00;
	inline constexpr auto pack_lsb_first = 0x0D01;
	inline constexpr auto pack_row_length = 0x0D02;
	inline constexpr auto pack_skip_rows = 0x0D03;
	inline constexpr auto pack_skip_pixels = 0x0D04;
	inline constexpr auto pack_alignment = 0x0D05;
	inline constexpr auto max_texture_size = 0x0D33;
	inline constexpr auto max_viewport_dims = 0x0D3A;
	inline constexpr auto subpixel_bits = 0x0D50;
	inline constexpr auto texture_1d = 0x0DE0;
	inline constexpr auto texture_2d = 0x0DE1;
	inline constexpr auto texture_width = 0x1000;
	inline constexpr auto texture_height = 0x1001;
	inline constexpr auto texture_border_color = 0x1004;
	inline constexpr auto dont_care = 0x1100;
	inline constexpr auto fastest = 0x1101;
	inline constexpr auto nicest = 0x1102;
	inline constexpr auto byte = 0x1400;
	inline constexpr auto unsigned_byte = 0x1401;
	inline constexpr auto short_ = 0x1402;
	inline constexpr auto unsigned_short = 0x1403;
	inline constexpr auto int_ = 0x1404;
	inline constexpr auto unsigned_int = 0x1405;
	inline constexpr auto float_ = 0x1406;
	inline constexpr auto clear = 0x1500;
	inline constexpr auto and_ = 0x1501;
	inline constexpr auto and_reverse = 0x1502;
	inline constexpr auto copy = 0x1503;
	inline constexpr auto and_inverted = 0x1504;
	inline constexpr auto noop = 0x1505;
	inline constexpr auto xor_ = 0x1506;
	inline constexpr auto or_ = 0x1507;
	inline constexpr auto nor = 0x1508;
	inline constexpr auto equiv = 0x1509;
	inline constexpr auto invert = 0x150A;
	inline constexpr auto or_reverse = 0x150B;
	inline constexpr auto copy_inverted = 0x150C;
	inline constexpr auto or_inverted = 0x150D;
	inline constexpr auto nand = 0x150E;
	inline constexpr auto set = 0x150F;
	inline constexpr auto texture = 0x1702;
	inline constexpr auto color = 0x1800;
	inline constexpr auto depth = 0x1801;
	inline constexpr auto stencil = 0x1802;
	inline constexpr auto stencil_index = 0x1901;
	inline constexpr auto depth_component = 0x1902;
	inline constexpr auto red = 0x1903;
	inline constexpr auto green = 0x1904;
	inline constexpr auto blue = 0x1905;
	inline constexpr auto alpha = 0x1906;
	inline constexpr auto rgb = 0x1907;
	inline constexpr auto rgba = 0x1908;
	inline constexpr auto point = 0x1B00;
	inline constexpr auto line = 0x1B01;
	inline constexpr auto fill = 0x1B02;
	inline constexpr auto keep = 0x1E00;
	inline constexpr auto replace = 0x1E01;
	inline constexpr auto incr = 0x1E02;
	inline constexpr auto decr = 0x1E03;
	inline constexpr auto vendor = 0x1F00;
	inline constexpr auto renderer = 0x1F01;
	inline constexpr auto version = 0x1F02;
	inline constexpr auto extensions = 0x1F03;
	inline constexpr auto nearest = 0x2600;
	inline constexpr auto linear = 0x2601;
	inline constexpr auto nearest_mipmap_nearest = 0x2700;
	inline constexpr auto linear_mipmap_nearest = 0x2701;
	inline constexpr auto nearest_mipmap_linear = 0x2702;
	inline constexpr auto linear_mipmap_linear = 0x2703;
	inline constexpr auto texture_mag_filter = 0x2800;
	inline constexpr auto texture_min_filter = 0x2801;
	inline constexpr auto texture_wrap_s = 0x2802;
	inline constexpr auto texture_wrap_t = 0x2803;
	inline constexpr auto repeat = 0x2901;
}

using clamp_float_t = float;
using clamp_double_t = double;

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(draw_elements, glDrawElements, void_t(enum_t mode, size_i_t count, enum_t type, void const* indices));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(bind_texture, glBindTexture, void_t(enum_t target, uint_t texture));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(delete_textures, glDeleteTextures, void_t(size_i_t n, uint_t const* textures));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(generate_textures, glGenTextures, void_t(size_i_t n, uint_t* textures));

template<class T>
concept context_1_1 = context_1_0<T>
	&& invocables::draw_elements<T>
	&& invocables::bind_texture<T>
	&& invocables::delete_textures<T>
	&& invocables::generate_textures<T>
	;

namespace constants
{
	inline constexpr auto color_logic_op = 0x0BF2;
	inline constexpr auto polygon_offset_units = 0x2A00;
	inline constexpr auto polygon_offset_point = 0x2A01;
	inline constexpr auto polygon_offset_line = 0x2A02;
	inline constexpr auto polygon_offset_fill = 0x8037;
	inline constexpr auto polygon_offset_factor = 0x8038;
	inline constexpr auto texture_binding_1d = 0x8068;
	inline constexpr auto texture_binding_2d = 0x8069;
	inline constexpr auto texture_internal_format = 0x1003;
	inline constexpr auto texture_red_size = 0x805C;
	inline constexpr auto texture_green_size = 0x805D;
	inline constexpr auto texture_blue_size = 0x805E;
	inline constexpr auto texture_alpha_size = 0x805F;
	inline constexpr auto double_ = 0x140A;
	inline constexpr auto proxy_texture_1d = 0x8063;
	inline constexpr auto proxy_texture_2d = 0x8064;
	inline constexpr auto r3_g3_b2 = 0x2A10;
	inline constexpr auto rgb4 = 0x804F;
	inline constexpr auto rgb5 = 0x8050;
	inline constexpr auto rgb8 = 0x8051;
	inline constexpr auto rgb10 = 0x8052;
	inline constexpr auto rgb12 = 0x8053;
	inline constexpr auto rgb16 = 0x8054;
	inline constexpr auto rgba2 = 0x8055;
	inline constexpr auto rgba4 = 0x8056;
	inline constexpr auto rgb5_a1 = 0x8057;
	inline constexpr auto rgba8 = 0x8058;
	inline constexpr auto rgb10_a2 = 0x8059;
	inline constexpr auto rgba12 = 0x805A;
	inline constexpr auto rgba16 = 0x805B;
}

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(active_texture, glActiveTexture, void_t(enum_t texture));

template<class T>
concept context_1_3 = context_1_1<T>
	&& invocables::active_texture<T>
	;

namespace constants
{
	inline constexpr auto unsigned_byte_3_3_2 = 0x8032;
	inline constexpr auto unsigned_short_4_4_4_4 = 0x8033;
	inline constexpr auto unsigned_short_5_5_5_1 = 0x8034;
	inline constexpr auto unsigned_int_8_8_8_8 = 0x8035;
	inline constexpr auto unsigned_int_10_10_10_2 = 0x8036;
	inline constexpr auto texture_binding_3d = 0x806A;
	inline constexpr auto pack_skip_images = 0x806B;
	inline constexpr auto pack_image_height = 0x806C;
	inline constexpr auto unpack_skip_images = 0x806D;
	inline constexpr auto unpack_image_height = 0x806E;
	inline constexpr auto texture_3d = 0x806F;
	inline constexpr auto proxy_texture_3d = 0x8070;
	inline constexpr auto texture_depth = 0x8071;
	inline constexpr auto texture_wrap_r = 0x8072;
	inline constexpr auto max_3d_texture_size = 0x8073;
	inline constexpr auto unsigned_byte_2_3_3_rev = 0x8362;
	inline constexpr auto unsigned_short_5_6_5 = 0x8363;
	inline constexpr auto unsigned_short_5_6_5_rev = 0x8364;
	inline constexpr auto unsigned_short_4_4_4_4_rev = 0x8365;
	inline constexpr auto unsigned_short_1_5_5_5_rev = 0x8366;
	inline constexpr auto unsigned_int_8_8_8_8_rev = 0x8367;
	inline constexpr auto unsigned_int_2_10_10_10_rev = 0x8368;
	inline constexpr auto bgr = 0x80E0;
	inline constexpr auto bgra = 0x80E1;
	inline constexpr auto max_elements_vertices = 0x80E8;
	inline constexpr auto max_elements_indices = 0x80E9;
	inline constexpr auto clamp_to_edge = 0x812F;
	inline constexpr auto texture_min_lod = 0x813A;
	inline constexpr auto texture_max_lod = 0x813B;
	inline constexpr auto texture_base_level = 0x813C;
	inline constexpr auto texture_max_level = 0x813D;
	inline constexpr auto smooth_point_size_range = 0x0B12;
	inline constexpr auto smooth_point_size_granularity = 0x0B13;
	inline constexpr auto smooth_line_width_range = 0x0B22;
	inline constexpr auto smooth_line_width_granularity = 0x0B23;
	inline constexpr auto aliased_line_width_range = 0x846E;
	inline constexpr auto texture0 = 0x84C0;
	inline constexpr auto texture1 = 0x84C1;
	inline constexpr auto texture2 = 0x84C2;
	inline constexpr auto texture3 = 0x84C3;
	inline constexpr auto texture4 = 0x84C4;
	inline constexpr auto texture5 = 0x84C5;
	inline constexpr auto texture6 = 0x84C6;
	inline constexpr auto texture7 = 0x84C7;
	inline constexpr auto texture8 = 0x84C8;
	inline constexpr auto texture9 = 0x84C9;
	inline constexpr auto texture10 = 0x84CA;
	inline constexpr auto texture11 = 0x84CB;
	inline constexpr auto texture12 = 0x84CC;
	inline constexpr auto texture13 = 0x84CD;
	inline constexpr auto texture14 = 0x84CE;
	inline constexpr auto texture15 = 0x84CF;
	inline constexpr auto texture16 = 0x84D0;
	inline constexpr auto texture17 = 0x84D1;
	inline constexpr auto texture18 = 0x84D2;
	inline constexpr auto texture19 = 0x84D3;
	inline constexpr auto texture20 = 0x84D4;
	inline constexpr auto texture21 = 0x84D5;
	inline constexpr auto texture22 = 0x84D6;
	inline constexpr auto texture23 = 0x84D7;
	inline constexpr auto texture24 = 0x84D8;
	inline constexpr auto texture25 = 0x84D9;
	inline constexpr auto texture26 = 0x84DA;
	inline constexpr auto texture27 = 0x84DB;
	inline constexpr auto texture28 = 0x84DC;
	inline constexpr auto texture29 = 0x84DD;
	inline constexpr auto texture30 = 0x84DE;
	inline constexpr auto texture31 = 0x84DF;
	inline constexpr auto active_texture = 0x84E0;
	inline constexpr auto multisample = 0x809D;
	inline constexpr auto sample_alpha_to_coverage = 0x809E;
	inline constexpr auto sample_alpha_to_one = 0x809F;
	inline constexpr auto sample_coverage = 0x80A0;
	inline constexpr auto sample_buffers = 0x80A8;
	inline constexpr auto samples = 0x80A9;
	inline constexpr auto sample_coverage_value = 0x80AA;
	inline constexpr auto sample_coverage_invert = 0x80AB;
	inline constexpr auto texture_cube_map = 0x8513;
	inline constexpr auto texture_binding_cube_map = 0x8514;
	inline constexpr auto texture_cube_map_positive_x = 0x8515;
	inline constexpr auto texture_cube_map_negative_x = 0x8516;
	inline constexpr auto texture_cube_map_positive_y = 0x8517;
	inline constexpr auto texture_cube_map_negative_y = 0x8518;
	inline constexpr auto texture_cube_map_positive_z = 0x8519;
	inline constexpr auto texture_cube_map_negative_z = 0x851A;
	inline constexpr auto proxy_texture_cube_map = 0x851B;
	inline constexpr auto max_cube_map_texture_size = 0x851C;
	inline constexpr auto compressed_rgb = 0x84ED;
	inline constexpr auto compressed_rgba = 0x84EE;
	inline constexpr auto texture_compression_hint = 0x84EF;
	inline constexpr auto texture_compressed_image_size = 0x86A0;
	inline constexpr auto texture_compressed = 0x86A1;
	inline constexpr auto num_compressed_texture_formats = 0x86A2;
	inline constexpr auto compressed_texture_formats = 0x86A3;
	inline constexpr auto clamp_to_border = 0x812D;

}

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(blend_func_separate, glBlendFuncSeparate, void_t(enum_t rgb_source_factor, enum_t rgb_destination_factor, enum_t alpha_source_factor, enum_t alpha_destination_factor));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(blend_equation, glBlendEquation, void_t(enum_t mode));

template<class T>
concept context_1_4 = context_1_3<T>
	&& invocables::blend_func_separate<T>
	&& invocables::blend_equation<T>
	;

namespace constants
{
	inline constexpr auto blend_dst_rgb = 0x80C8;
	inline constexpr auto blend_src_rgb = 0x80C9;
	inline constexpr auto blend_dst_alpha = 0x80CA;
	inline constexpr auto blend_src_alpha = 0x80CB;
	inline constexpr auto point_fade_threshold_size = 0x8128;
	inline constexpr auto depth_component16 = 0x81A5;
	inline constexpr auto depth_component24 = 0x81A6;
	inline constexpr auto depth_component32 = 0x81A7;
	inline constexpr auto mirrored_repeat = 0x8370;
	inline constexpr auto max_texture_lod_bias = 0x84FD;
	inline constexpr auto texture_lod_bias = 0x8501;
	inline constexpr auto incr_wrap = 0x8507;
	inline constexpr auto decr_wrap = 0x8508;
	inline constexpr auto texture_depth_size = 0x884A;
	inline constexpr auto texture_compare_mode = 0x884C;
	inline constexpr auto texture_compare_func = 0x884D;
	inline constexpr auto blend_color = 0x8005;
	inline constexpr auto blend_equation = 0x8009;
	inline constexpr auto constant_color = 0x8001;
	inline constexpr auto one_minus_constant_color = 0x8002;
	inline constexpr auto constant_alpha = 0x8003;
	inline constexpr auto one_minus_constant_alpha = 0x8004;
	inline constexpr auto func_add = 0x8006;
	inline constexpr auto func_reverse_subtract = 0x800B;
	inline constexpr auto func_subtract = 0x800A;
	inline constexpr auto min = 0x8007;
	inline constexpr auto max = 0x8008;

}

using size_i_ptr_t = signed long long;
using intptr_t = ::std::intptr_t;

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(bind_buffer, glBindBuffer, void_t(enum_t target, uint_t buffer));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(delete_buffers, glDeleteBuffers, void_t(size_i_t n, uint_t const* buffers));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(generate_buffers, glGenBuffers, void_t(size_i_t n, uint_t* buffers));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(buffer_data, glBufferData, void_t(enum_t target, size_i_ptr_t size, void const* data, enum_t usage));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(buffer_sub_data, glBufferSubData, void_t(enum_t target, intptr_t offset, size_i_ptr_t size, void const* data));

template<class T>
concept context_1_5 = context_1_4<T>
	&& invocables::bind_buffer<T>
	&& invocables::delete_buffers<T>
	&& invocables::generate_buffers<T>
	&& invocables::buffer_data<T>
	&& invocables::buffer_sub_data<T>
	;

namespace constants
{
	inline constexpr auto buffer_size = 0x8764;
	inline constexpr auto buffer_usage = 0x8765;
	inline constexpr auto query_counter_bits = 0x8864;
	inline constexpr auto current_query = 0x8865;
	inline constexpr auto query_result = 0x8866;
	inline constexpr auto query_result_available = 0x8867;
	inline constexpr auto array_buffer = 0x8892;
	inline constexpr auto element_array_buffer = 0x8893;
	inline constexpr auto array_buffer_binding = 0x8894;
	inline constexpr auto element_array_buffer_binding = 0x8895;
	inline constexpr auto vertex_attrib_array_buffer_binding = 0x889F;
	inline constexpr auto read_only = 0x88B8;
	inline constexpr auto write_only = 0x88B9;
	inline constexpr auto read_write = 0x88BA;
	inline constexpr auto buffer_access = 0x88BB;
	inline constexpr auto buffer_mapped = 0x88BC;
	inline constexpr auto buffer_map_pointer = 0x88BD;
	inline constexpr auto stream_draw = 0x88E0;
	inline constexpr auto stream_read = 0x88E1;
	inline constexpr auto stream_copy = 0x88E2;
	inline constexpr auto static_draw = 0x88E4;
	inline constexpr auto static_read = 0x88E5;
	inline constexpr auto static_copy = 0x88E6;
	inline constexpr auto dynamic_draw = 0x88E8;
	inline constexpr auto dynamic_read = 0x88E9;
	inline constexpr auto dynamic_copy = 0x88EA;
	inline constexpr auto samples_passed = 0x8914;
	inline constexpr auto src1_alpha = 0x8589;

}

NAGISA_BUILD_LIB_DETAIL_END