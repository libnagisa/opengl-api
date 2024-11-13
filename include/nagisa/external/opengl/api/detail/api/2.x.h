#pragma once

#include "./basic.h"
#include "./1.x.h"
#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN

using char_t = char;
using short_t = ::std::int16_t;
using byte_t = ::std::int8_t;
using unsigned_short_t = ::std::uint16_t;

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(blend_equation_rgb, glBlendEquationRGB, void_t(enum_t mode));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_array_enabled, glVertexAttribArrayEnabled, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_array_size, glVertexAttribArraySize, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_array_stride, glVertexAttribArrayStride, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_array_type, glVertexAttribArrayType, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_array_pointer, glVertexAttribArrayPointer, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(blend_equation_alpha, glBlendEquationAlpha, void_t(enum_t mode));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_array_normalized, glVertexAttribArrayNormalized, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(fragment_shader, glFragmentShader, void_t(enum_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_shader, glVertexShader, void_t(enum_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(compile_status, glCompileStatus, void_t(enum_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(link_status, glLinkStatus, void_t(enum_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(info_log_length, glInfoLogLength, void_t(enum_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(current_program, glCurrentProgram, void_t(enum_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(upper_left, glUpperLeft, void_t(enum_t mode));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(attach_shader, glAttachShader, void_t(uint_t program, uint_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(compile_shader, glCompileShader, void_t(uint_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(create_program, glCreateProgram, uint_t(void_t));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(create_shader, glCreateShader, uint_t(enum_t type));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(delete_program, glDeleteProgram, void_t(uint_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(delete_shader, glDeleteShader, void_t(uint_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(detach_shader, glDetachShader, void_t(uint_t program, uint_t shader));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(disable_vertex_attrib_array, glDisableVertexAttribArray, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(enable_vertex_attrib_array, glEnableVertexAttribArray, void_t(uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_attrib_location, glGetAttribLocation, int_t(uint_t program, char_t const* name));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_program_iv, glGetProgramiv, void_t(uint_t program, enum_t name, int_t* params));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_program_info_log, glGetProgramInfoLog, void_t(uint_t program, size_i_t buffer_size, size_i_t* length, char_t* info_log));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_shader_iv, glGetShaderiv, void_t(uint_t shader, enum_t name, int_t* params));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_shader_info_log, glGetShaderInfoLog, void_t(uint_t shader, size_i_t buffer_size, size_i_t* length, char_t* info_log));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_uniform_location, glGetUniformLocation, int_t(uint_t program, char_t const* name));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_vertex_attrib_iv, glGetVertexAttribiv, void_t(uint_t index, enum_t name, int_t* params));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_vertex_attrib_pointer_v, glGetVertexAttribPointerv, void_t(uint_t index, enum_t name, void** pointer));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(is_program, glIsProgram, boolean_t(uint_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(link_program, glLinkProgram, void_t(uint_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(shader_source, glShaderSource, void_t(uint_t shader, size_i_t count, char_t const* const* string, int_t const* length));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(use_program, glUseProgram, void_t(uint_t program));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(uniform1_i, glUniform1i, void_t(int_t location, int_t v0));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(uniform_matrix4_fv, glUniformMatrix4fv, void_t(int_t location, size_i_t count, boolean_t transpose, float_t const* value));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(vertex_attrib_pointer, glVertexAttribPointer, void_t(uint_t index, int_t size, enum_t type, boolean_t normalized, size_i_t stride, void const* pointer));

template<class T>
concept context_2_0 = context_1_5<T>
	&& invocables::blend_equation_rgb<T>
	&& invocables::vertex_attrib_array_enabled<T>
	&& invocables::vertex_attrib_array_size<T>
	&& invocables::vertex_attrib_array_stride<T>
	&& invocables::vertex_attrib_array_type<T>
	&& invocables::vertex_attrib_array_pointer<T>
	&& invocables::blend_equation_alpha<T>
	&& invocables::vertex_attrib_array_normalized<T>
	&& invocables::fragment_shader<T>
	&& invocables::vertex_shader<T>
	&& invocables::compile_status<T>
	&& invocables::link_status<T>
	&& invocables::info_log_length<T>
	&& invocables::current_program<T>
	&& invocables::upper_left<T>
	&& invocables::attach_shader<T>
	&& invocables::compile_shader<T>
	&& invocables::create_program<T>
	&& invocables::create_shader<T>
	&& invocables::delete_program<T>
	&& invocables::delete_shader<T>
	&& invocables::detach_shader<T>
	&& invocables::disable_vertex_attrib_array<T>
	&& invocables::enable_vertex_attrib_array<T>
	&& invocables::get_attrib_location<T>
	&& invocables::get_program_iv<T>
	&& invocables::get_program_info_log<T>
	&& invocables::get_shader_iv<T>
	&& invocables::get_shader_info_log<T>
	&& invocables::get_uniform_location<T>
	&& invocables::get_vertex_attrib_iv<T>
	&& invocables::get_vertex_attrib_pointer_v<T>
	&& invocables::is_program<T>
	&& invocables::link_program<T>
	&& invocables::shader_source<T>
	&& invocables::use_program<T>
	&& invocables::uniform1_i<T>
	&& invocables::uniform_matrix4_fv<T>
	&& invocables::vertex_attrib_pointer<T>
	;

namespace constants
{
	inline constexpr auto blend_equation_rgb = 0x8009;
	inline constexpr auto vertex_attrib_array_enabled = 0x8622;
	inline constexpr auto vertex_attrib_array_size = 0x8623;
	inline constexpr auto vertex_attrib_array_stride = 0x8624;
	inline constexpr auto vertex_attrib_array_type = 0x8625;
	inline constexpr auto current_vertex_attrib = 0x8626;
	inline constexpr auto vertex_program_point_size = 0x8642;
	inline constexpr auto vertex_attrib_array_pointer = 0x8645;
	inline constexpr auto stencil_back_func = 0x8800;
	inline constexpr auto stencil_back_fail = 0x8801;
	inline constexpr auto stencil_back_pass_depth_fail = 0x8802;
	inline constexpr auto stencil_back_pass_depth_pass = 0x8803;
	inline constexpr auto max_draw_buffers = 0x8824;
	inline constexpr auto draw_buffer0 = 0x8825;
	inline constexpr auto draw_buffer1 = 0x8826;
	inline constexpr auto draw_buffer2 = 0x8827;
	inline constexpr auto draw_buffer3 = 0x8828;
	inline constexpr auto draw_buffer4 = 0x8829;
	inline constexpr auto draw_buffer5 = 0x882A;
	inline constexpr auto draw_buffer6 = 0x882B;
	inline constexpr auto draw_buffer7 = 0x882C;
	inline constexpr auto draw_buffer8 = 0x882D;
	inline constexpr auto draw_buffer9 = 0x882E;
	inline constexpr auto draw_buffer10 = 0x882F;
	inline constexpr auto draw_buffer11 = 0x8830;
	inline constexpr auto draw_buffer12 = 0x8831;
	inline constexpr auto draw_buffer13 = 0x8832;
	inline constexpr auto draw_buffer14 = 0x8833;
	inline constexpr auto draw_buffer15 = 0x8834;
	inline constexpr auto blend_equation_alpha = 0x883D;
	inline constexpr auto max_vertex_attribs = 0x8869;
	inline constexpr auto vertex_attrib_array_normalized = 0x886A;
	inline constexpr auto max_texture_image_units = 0x8872;
	inline constexpr auto fragment_shader = 0x8B30;
	inline constexpr auto vertex_shader = 0x8B31;
	inline constexpr auto max_fragment_uniform_components = 0x8B49;
	inline constexpr auto max_vertex_uniform_components = 0x8B4A;
	inline constexpr auto max_varying_floats = 0x8B4B;
	inline constexpr auto max_vertex_texture_image_units = 0x8B4C;
	inline constexpr auto max_combined_texture_image_units = 0x8B4D;
	inline constexpr auto shader_type = 0x8B4F;
	inline constexpr auto float_vec2 = 0x8B50;
	inline constexpr auto float_vec3 = 0x8B51;
	inline constexpr auto float_vec4 = 0x8B52;
	inline constexpr auto int_vec2 = 0x8B53;
	inline constexpr auto int_vec3 = 0x8B54;
	inline constexpr auto int_vec4 = 0x8B55;
	inline constexpr auto bool_ = 0x8B56;
	inline constexpr auto bool_vec2 = 0x8B57;
	inline constexpr auto bool_vec3 = 0x8B58;
	inline constexpr auto bool_vec4 = 0x8B59;
	inline constexpr auto float_mat2 = 0x8B5A;
	inline constexpr auto float_mat3 = 0x8B5B;
	inline constexpr auto float_mat4 = 0x8B5C;
	inline constexpr auto sampler_1d = 0x8B5D;
	inline constexpr auto sampler_2d = 0x8B5E;
	inline constexpr auto sampler_3d = 0x8B5F;
	inline constexpr auto sampler_cube = 0x8B60;
	inline constexpr auto sampler_1d_shadow = 0x8B61;
	inline constexpr auto sampler_2d_shadow = 0x8B62;
	inline constexpr auto delete_status = 0x8B80;
	inline constexpr auto compile_status = 0x8B81;
	inline constexpr auto link_status = 0x8B82;
	inline constexpr auto validate_status = 0x8B83;
	inline constexpr auto info_log_length = 0x8B84;
	inline constexpr auto attached_shaders = 0x8B85;
	inline constexpr auto active_uniforms = 0x8B86;
	inline constexpr auto active_uniform_max_length = 0x8B87;
	inline constexpr auto shader_source_length = 0x8B88;
	inline constexpr auto active_attributes = 0x8B89;
	inline constexpr auto active_attribute_max_length = 0x8B8A;
	inline constexpr auto fragment_shader_derivative_hint = 0x8B8B;
	inline constexpr auto shading_language_version = 0x8B8C;
	inline constexpr auto current_program = 0x8B8D;
	inline constexpr auto point_sprite_coord_origin = 0x8CA0;
	inline constexpr auto lower_left = 0x8CA1;
	inline constexpr auto upper_left = 0x8CA2;
	inline constexpr auto stencil_back_ref = 0x8CA3;
	inline constexpr auto stencil_back_value_mask = 0x8CA4;
	inline constexpr auto stencil_back_writemask = 0x8CA5;

}

template<class T>
concept context_2_1 = context_2_0<T>;

namespace constants
{
	inline constexpr auto pixel_pack_buffer = 0x88EB;
	inline constexpr auto pixel_unpack_buffer = 0x88EC;
	inline constexpr auto pixel_pack_buffer_binding = 0x88ED;
	inline constexpr auto pixel_unpack_buffer_binding = 0x88EF;
	inline constexpr auto float_mat2x3 = 0x8B65;
	inline constexpr auto float_mat2x4 = 0x8B66;
	inline constexpr auto float_mat3x2 = 0x8B67;
	inline constexpr auto float_mat3x4 = 0x8B68;
	inline constexpr auto float_mat4x2 = 0x8B69;
	inline constexpr auto float_mat4x3 = 0x8B6A;
	inline constexpr auto srgb = 0x8C40;
	inline constexpr auto srgb8 = 0x8C41;
	inline constexpr auto srgb_alpha = 0x8C42;
	inline constexpr auto srgb8_alpha8 = 0x8C43;
	inline constexpr auto compressed_srgb = 0x8C48;
	inline constexpr auto compressed_srgb_alpha = 0x8C49;

}

NAGISA_BUILD_LIB_DETAIL_END