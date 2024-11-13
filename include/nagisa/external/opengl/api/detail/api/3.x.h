#pragma once

#include "./basic.h"
#include "./1.x.h"
#include "./2.x.h"
#include "./environment.h"

NAGISA_BUILD_LIB_DETAIL_BEGIN

using half_t = ::std::uint16_t;

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_boolean_i_v, glGetBooleani_v, void_t(enum_t target, uint_t index, boolean_t* data));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_integer_i_v, glGetIntegeri_v, void_t(enum_t target, uint_t index, int_t* data));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_string_i, glGetStringi, unsigned_byte_t const* (enum_t name, uint_t index));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(bind_vertex_array, glBindVertexArray, void_t(uint_t array));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(delete_vertex_arrays, glDeleteVertexArrays, void_t(size_i_t n, uint_t const* arrays));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(generate_vertex_arrays, glGenVertexArrays, void_t(size_i_t n, uint_t* arrays));

template<class T>
concept context_3_0 = context_2_1<T>
	&& invocables::get_boolean_i_v<T>
	&& invocables::get_integer_i_v<T>
	&& invocables::get_string_i<T>
	&& invocables::bind_vertex_array<T>
	&& invocables::delete_vertex_arrays<T>
	&& invocables::generate_vertex_arrays<T>
	;

namespace constants
{
	inline constexpr auto compare_ref_to_texture = 0x884E;
	inline constexpr auto clip_distance0 = 0x3000;
	inline constexpr auto clip_distance1 = 0x3001;
	inline constexpr auto clip_distance2 = 0x3002;
	inline constexpr auto clip_distance3 = 0x3003;
	inline constexpr auto clip_distance4 = 0x3004;
	inline constexpr auto clip_distance5 = 0x3005;
	inline constexpr auto clip_distance6 = 0x3006;
	inline constexpr auto clip_distance7 = 0x3007;
	inline constexpr auto max_clip_distances = 0x0D32;
	inline constexpr auto major_version = 0x821B;
	inline constexpr auto minor_version = 0x821C;
	inline constexpr auto num_extensions = 0x821D;
	inline constexpr auto context_flags = 0x821E;
	inline constexpr auto compressed_red = 0x8225;
	inline constexpr auto compressed_rg = 0x8226;
	inline constexpr auto context_flag_forward_compatible_bit = 0x00000001;
	inline constexpr auto rgba32f = 0x8814;
	inline constexpr auto rgb32f = 0x8815;
	inline constexpr auto rgba16f = 0x881A;
	inline constexpr auto rgb16f = 0x881B;
	inline constexpr auto vertex_attrib_array_integer = 0x88FD;
	inline constexpr auto max_array_texture_layers = 0x88FF;
	inline constexpr auto min_program_texel_offset = 0x8904;
	inline constexpr auto max_program_texel_offset = 0x8905;
	inline constexpr auto clamp_read_color = 0x891C;
	inline constexpr auto fixed_only = 0x891D;
	inline constexpr auto max_varying_components = 0x8B4B;
	inline constexpr auto texture_1d_array = 0x8C18;
	inline constexpr auto proxy_texture_1d_array = 0x8C19;
	inline constexpr auto texture_2d_array = 0x8C1A;
	inline constexpr auto proxy_texture_2d_array = 0x8C1B;
	inline constexpr auto texture_binding_1d_array = 0x8C1C;
	inline constexpr auto texture_binding_2d_array = 0x8C1D;
	inline constexpr auto r11f_g11f_b10f = 0x8C3A;
	inline constexpr auto unsigned_int_10f_11f_11f_rev = 0x8C3B;
	inline constexpr auto rgb9_e5 = 0x8C3D;
	inline constexpr auto unsigned_int_5_9_9_9_rev = 0x8C3E;
	inline constexpr auto texture_shared_size = 0x8C3F;
	inline constexpr auto transform_feedback_varying_max_length = 0x8C76;
	inline constexpr auto transform_feedback_buffer_mode = 0x8C7F;
	inline constexpr auto max_transform_feedback_separate_components = 0x8C80;
	inline constexpr auto transform_feedback_varyings = 0x8C83;
	inline constexpr auto transform_feedback_buffer_start = 0x8C84;
	inline constexpr auto transform_feedback_buffer_size = 0x8C85;
	inline constexpr auto primitives_generated = 0x8C87;
	inline constexpr auto transform_feedback_primitives_written = 0x8C88;
	inline constexpr auto rasterizer_discard = 0x8C89;
	inline constexpr auto max_transform_feedback_interleaved_components = 0x8C8A;
	inline constexpr auto max_transform_feedback_separate_attribs = 0x8C8B;
	inline constexpr auto interleaved_attribs = 0x8C8C;
	inline constexpr auto separate_attribs = 0x8C8D;
	inline constexpr auto transform_feedback_buffer = 0x8C8E;
	inline constexpr auto transform_feedback_buffer_binding = 0x8C8F;
	inline constexpr auto rgba32ui = 0x8D70;
	inline constexpr auto rgb32ui = 0x8D71;
	inline constexpr auto rgba16ui = 0x8D76;
	inline constexpr auto rgb16ui = 0x8D77;
	inline constexpr auto rgba8ui = 0x8D7C;
	inline constexpr auto rgb8ui = 0x8D7D;
	inline constexpr auto rgba32i = 0x8D82;
	inline constexpr auto rgb32i = 0x8D83;
	inline constexpr auto rgba16i = 0x8D88;
	inline constexpr auto rgb16i = 0x8D89;
	inline constexpr auto rgba8i = 0x8D8E;
	inline constexpr auto rgb8i = 0x8D8F;
	inline constexpr auto red_integer = 0x8D94;
	inline constexpr auto green_integer = 0x8D95;
	inline constexpr auto blue_integer = 0x8D96;
	inline constexpr auto rgb_integer = 0x8D98;
	inline constexpr auto rgba_integer = 0x8D99;
	inline constexpr auto bgr_integer = 0x8D9A;
	inline constexpr auto bgra_integer = 0x8D9B;
	inline constexpr auto sampler_1d_array = 0x8DC0;
	inline constexpr auto sampler_2d_array = 0x8DC1;
	inline constexpr auto sampler_1d_array_shadow = 0x8DC3;
	inline constexpr auto sampler_2d_array_shadow = 0x8DC4;
	inline constexpr auto sampler_cube_shadow = 0x8DC5;
	inline constexpr auto unsigned_int_vec2 = 0x8DC6;
	inline constexpr auto unsigned_int_vec3 = 0x8DC7;
	inline constexpr auto unsigned_int_vec4 = 0x8DC8;
	inline constexpr auto int_sampler_1d = 0x8DC9;
	inline constexpr auto int_sampler_2d = 0x8DCA;
	inline constexpr auto int_sampler_3d = 0x8DCB;
	inline constexpr auto int_sampler_cube = 0x8DCC;
	inline constexpr auto int_sampler_1d_array = 0x8DCE;
	inline constexpr auto int_sampler_2d_array = 0x8DCF;
	inline constexpr auto unsigned_int_sampler_1d = 0x8DD1;
	inline constexpr auto unsigned_int_sampler_2d = 0x8DD2;
	inline constexpr auto unsigned_int_sampler_3d = 0x8DD3;
	inline constexpr auto unsigned_int_sampler_cube = 0x8DD4;
	inline constexpr auto unsigned_int_sampler_1d_array = 0x8DD6;
	inline constexpr auto unsigned_int_sampler_2d_array = 0x8DD7;
	inline constexpr auto query_wait = 0x8E13;
	inline constexpr auto query_no_wait = 0x8E14;
	inline constexpr auto query_by_region_wait = 0x8E15;
	inline constexpr auto query_by_region_no_wait = 0x8E16;
	inline constexpr auto buffer_access_flags = 0x911F;
	inline constexpr auto buffer_map_length = 0x9120;
	inline constexpr auto buffer_map_offset = 0x9121;
	inline constexpr auto depth_component32f = 0x8CAC;
	inline constexpr auto depth32f_stencil8 = 0x8CAD;
	inline constexpr auto float_32_unsigned_int_24_8_rev = 0x8DAD;
	inline constexpr auto invalid_framebuffer_operation = 0x0506;
	inline constexpr auto framebuffer_attachment_color_encoding = 0x8210;
	inline constexpr auto framebuffer_attachment_component_type = 0x8211;
	inline constexpr auto framebuffer_attachment_red_size = 0x8212;
	inline constexpr auto framebuffer_attachment_green_size = 0x8213;
	inline constexpr auto framebuffer_attachment_blue_size = 0x8214;
	inline constexpr auto framebuffer_attachment_alpha_size = 0x8215;
	inline constexpr auto framebuffer_attachment_depth_size = 0x8216;
	inline constexpr auto framebuffer_attachment_stencil_size = 0x8217;
	inline constexpr auto framebuffer_default = 0x8218;
	inline constexpr auto framebuffer_undefined = 0x8219;
	inline constexpr auto depth_stencil_attachment = 0x821A;
	inline constexpr auto max_renderbuffer_size = 0x84E8;
	inline constexpr auto depth_stencil = 0x84F9;
	inline constexpr auto unsigned_int_24_8 = 0x84FA;
	inline constexpr auto depth24_stencil8 = 0x88F0;
	inline constexpr auto texture_stencil_size = 0x88F1;
	inline constexpr auto texture_red_type = 0x8C10;
	inline constexpr auto texture_green_type = 0x8C11;
	inline constexpr auto texture_blue_type = 0x8C12;
	inline constexpr auto texture_alpha_type = 0x8C13;
	inline constexpr auto texture_depth_type = 0x8C16;
	inline constexpr auto unsigned_normalized = 0x8C17;
	inline constexpr auto framebuffer_binding = 0x8CA6;
	inline constexpr auto draw_framebuffer_binding = 0x8CA6;
	inline constexpr auto renderbuffer_binding = 0x8CA7;
	inline constexpr auto read_framebuffer = 0x8CA8;
	inline constexpr auto draw_framebuffer = 0x8CA9;
	inline constexpr auto read_framebuffer_binding = 0x8CAA;
	inline constexpr auto renderbuffer_samples = 0x8CAB;
	inline constexpr auto framebuffer_attachment_object_type = 0x8CD0;
	inline constexpr auto framebuffer_attachment_object_name = 0x8CD1;
	inline constexpr auto framebuffer_attachment_texture_level = 0x8CD2;
	inline constexpr auto framebuffer_attachment_texture_cube_map_face = 0x8CD3;
	inline constexpr auto framebuffer_attachment_texture_layer = 0x8CD4;
	inline constexpr auto framebuffer_complete = 0x8CD5;
	inline constexpr auto framebuffer_incomplete_attachment = 0x8CD6;
	inline constexpr auto framebuffer_incomplete_missing_attachment = 0x8CD7;
	inline constexpr auto framebuffer_incomplete_draw_buffer = 0x8CDB;
	inline constexpr auto framebuffer_incomplete_read_buffer = 0x8CDC;
	inline constexpr auto framebuffer_unsupported = 0x8CDD;
	inline constexpr auto max_color_attachments = 0x8CDF;
	inline constexpr auto color_attachment0 = 0x8CE0;
	inline constexpr auto color_attachment1 = 0x8CE1;
	inline constexpr auto color_attachment2 = 0x8CE2;
	inline constexpr auto color_attachment3 = 0x8CE3;
	inline constexpr auto color_attachment4 = 0x8CE4;
	inline constexpr auto color_attachment5 = 0x8CE5;
	inline constexpr auto color_attachment6 = 0x8CE6;
	inline constexpr auto color_attachment7 = 0x8CE7;
	inline constexpr auto color_attachment8 = 0x8CE8;
	inline constexpr auto color_attachment9 = 0x8CE9;
	inline constexpr auto color_attachment10 = 0x8CEA;
	inline constexpr auto color_attachment11 = 0x8CEB;
	inline constexpr auto color_attachment12 = 0x8CEC;
	inline constexpr auto color_attachment13 = 0x8CED;
	inline constexpr auto color_attachment14 = 0x8CEE;
	inline constexpr auto color_attachment15 = 0x8CEF;
	inline constexpr auto color_attachment16 = 0x8CF0;
	inline constexpr auto color_attachment17 = 0x8CF1;
	inline constexpr auto color_attachment18 = 0x8CF2;
	inline constexpr auto color_attachment19 = 0x8CF3;
	inline constexpr auto color_attachment20 = 0x8CF4;
	inline constexpr auto color_attachment21 = 0x8CF5;
	inline constexpr auto color_attachment22 = 0x8CF6;
	inline constexpr auto color_attachment23 = 0x8CF7;
	inline constexpr auto color_attachment24 = 0x8CF8;
	inline constexpr auto color_attachment25 = 0x8CF9;
	inline constexpr auto color_attachment26 = 0x8CFA;
	inline constexpr auto color_attachment27 = 0x8CFB;
	inline constexpr auto color_attachment28 = 0x8CFC;
	inline constexpr auto color_attachment29 = 0x8CFD;
	inline constexpr auto color_attachment30 = 0x8CFE;
	inline constexpr auto color_attachment31 = 0x8CFF;
	inline constexpr auto depth_attachment = 0x8D00;
	inline constexpr auto stencil_attachment = 0x8D20;
	inline constexpr auto framebuffer = 0x8D40;
	inline constexpr auto renderbuffer = 0x8D41;
	inline constexpr auto renderbuffer_width = 0x8D42;
	inline constexpr auto renderbuffer_height = 0x8D43;
	inline constexpr auto renderbuffer_internal_format = 0x8D44;
	inline constexpr auto stencil_index1 = 0x8D46;
	inline constexpr auto stencil_index4 = 0x8D47;
	inline constexpr auto stencil_index8 = 0x8D48;
	inline constexpr auto stencil_index16 = 0x8D49;
	inline constexpr auto renderbuffer_red_size = 0x8D50;
	inline constexpr auto renderbuffer_green_size = 0x8D51;
	inline constexpr auto renderbuffer_blue_size = 0x8D52;
	inline constexpr auto renderbuffer_alpha_size = 0x8D53;
	inline constexpr auto renderbuffer_depth_size = 0x8D54;
	inline constexpr auto renderbuffer_stencil_size = 0x8D55;
	inline constexpr auto framebuffer_incomplete_multisample = 0x8D56;
	inline constexpr auto max_samples = 0x8D57;
	inline constexpr auto framebuffer_srgb = 0x8DB9;
	inline constexpr auto half_float = 0x140B;
	inline constexpr auto map_read_bit = 0x0001;
	inline constexpr auto map_write_bit = 0x0002;
	inline constexpr auto map_invalidate_range_bit = 0x0004;
	inline constexpr auto map_invalidate_buffer_bit = 0x0008;
	inline constexpr auto map_flush_explicit_bit = 0x0010;
	inline constexpr auto map_unsynchronized_bit = 0x0020;
	inline constexpr auto compressed_red_rgtc1 = 0x8DBB;
	inline constexpr auto compressed_signed_red_rgtc1 = 0x8DBC;
	inline constexpr auto compressed_rg_rgtc2 = 0x8DBD;
	inline constexpr auto compressed_signed_rg_rgtc2 = 0x8DBE;
	inline constexpr auto rg = 0x8227;
	inline constexpr auto rg_integer = 0x8228;
	inline constexpr auto r8 = 0x8229;
	inline constexpr auto r16 = 0x822A;
	inline constexpr auto rg8 = 0x822B;
	inline constexpr auto rg16 = 0x822C;
	inline constexpr auto r16f = 0x822D;
	inline constexpr auto r32f = 0x822E;
	inline constexpr auto rg16f = 0x822F;
	inline constexpr auto rg32f = 0x8230;
	inline constexpr auto r8i = 0x8231;
	inline constexpr auto r8ui = 0x8232;
	inline constexpr auto r16i = 0x8233;
	inline constexpr auto r16ui = 0x8234;
	inline constexpr auto r32i = 0x8235;
	inline constexpr auto r32ui = 0x8236;
	inline constexpr auto rg8i = 0x8237;
	inline constexpr auto rg8ui = 0x8238;
	inline constexpr auto rg16i = 0x8239;
	inline constexpr auto rg16ui = 0x823A;
	inline constexpr auto rg32i = 0x823B;
	inline constexpr auto rg32ui = 0x823C;
	inline constexpr auto vertex_array_binding = 0x85B5;

}

template<class T>
concept context_3_1 = context_3_0<T>;

namespace constants
{
	inline constexpr auto sampler_2d_rect = 0x8B63;
	inline constexpr auto sampler_2d_rect_shadow = 0x8B64;
	inline constexpr auto sampler_buffer = 0x8DC2;
	inline constexpr auto int_sampler_2d_rect = 0x8DCD;
	inline constexpr auto int_sampler_buffer = 0x8DD0;
	inline constexpr auto unsigned_int_sampler_2d_rect = 0x8DD5;
	inline constexpr auto unsigned_int_sampler_buffer = 0x8DD8;
	inline constexpr auto texture_buffer = 0x8C2A;
	inline constexpr auto max_texture_buffer_size = 0x8C2B;
	inline constexpr auto texture_binding_buffer = 0x8C2C;
	inline constexpr auto texture_buffer_data_store_binding = 0x8C2D;
	inline constexpr auto texture_rectangle = 0x84F5;
	inline constexpr auto texture_binding_rectangle = 0x84F6;
	inline constexpr auto proxy_texture_rectangle = 0x84F7;
	inline constexpr auto max_rectangle_texture_size = 0x84F8;
	inline constexpr auto r8_snorm = 0x8F94;
	inline constexpr auto rg8_snorm = 0x8F95;
	inline constexpr auto rgb8_snorm = 0x8F96;
	inline constexpr auto rgba8_snorm = 0x8F97;
	inline constexpr auto r16_snorm = 0x8F98;
	inline constexpr auto rg16_snorm = 0x8F99;
	inline constexpr auto rgb16_snorm = 0x8F9A;
	inline constexpr auto rgba16_snorm = 0x8F9B;
	inline constexpr auto signed_normalized = 0x8F9C;
	inline constexpr auto primitive_restart = 0x8F9D;
	inline constexpr auto primitive_restart_index = 0x8F9E;
	inline constexpr auto copy_read_buffer = 0x8F36;
	inline constexpr auto copy_write_buffer = 0x8F37;
	inline constexpr auto uniform_buffer = 0x8A11;
	inline constexpr auto uniform_buffer_binding = 0x8A28;
	inline constexpr auto uniform_buffer_start = 0x8A29;
	inline constexpr auto uniform_buffer_size = 0x8A2A;
	inline constexpr auto max_vertex_uniform_blocks = 0x8A2B;
	inline constexpr auto max_geometry_uniform_blocks = 0x8A2C;
	inline constexpr auto max_fragment_uniform_blocks = 0x8A2D;
	inline constexpr auto max_combined_uniform_blocks = 0x8A2E;
	inline constexpr auto max_uniform_buffer_bindings = 0x8A2F;
	inline constexpr auto max_uniform_block_size = 0x8A30;
	inline constexpr auto max_combined_vertex_uniform_components = 0x8A31;
	inline constexpr auto max_combined_geometry_uniform_components = 0x8A32;
	inline constexpr auto max_combined_fragment_uniform_components = 0x8A33;
	inline constexpr auto uniform_buffer_offset_alignment = 0x8A34;
	inline constexpr auto active_uniform_block_max_name_length = 0x8A35;
	inline constexpr auto active_uniform_blocks = 0x8A36;
	inline constexpr auto uniform_type = 0x8A37;
	inline constexpr auto uniform_size = 0x8A38;
	inline constexpr auto uniform_name_length = 0x8A39;
	inline constexpr auto uniform_block_index = 0x8A3A;
	inline constexpr auto uniform_offset = 0x8A3B;
	inline constexpr auto uniform_array_stride = 0x8A3C;
	inline constexpr auto uniform_matrix_stride = 0x8A3D;
	inline constexpr auto uniform_is_row_major = 0x8A3E;
	inline constexpr auto uniform_block_binding = 0x8A3F;
	inline constexpr auto uniform_block_data_size = 0x8A40;
	inline constexpr auto uniform_block_name_length = 0x8A41;
	inline constexpr auto uniform_block_active_uniforms = 0x8A42;
	inline constexpr auto uniform_block_active_uniform_indices = 0x8A43;
	inline constexpr auto uniform_block_referenced_by_vertex_shader = 0x8A44;
	inline constexpr auto uniform_block_referenced_by_geometry_shader = 0x8A45;
	inline constexpr auto uniform_block_referenced_by_fragment_shader = 0x8A46;
	inline constexpr auto invalid_index = 0xFFFFFFFF;

}

using sync_t = struct __GLsync*;
using uint64_t = ::std::uint64_t;
using int64_t = ::std::int64_t;

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(draw_elements_base_vertex, glDrawElementsBaseVertex, void_t(enum_t mode, size_i_t count, enum_t type, void const* indices, int_t base_vertex));
NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(get_integer64_i_v, glGetInteger64i_v, void_t(enum_t target, uint_t index, int64_t* data));

template<class T>
concept context_3_2 = context_3_1<T>
	&& invocables::draw_elements_base_vertex<T>
	&& invocables::get_integer64_i_v<T>
	;

namespace constants
{
	inline constexpr auto context_core_profile_bit = 0x00000001;
	inline constexpr auto context_compatibility_profile_bit = 0x00000002;
	inline constexpr auto lines_adjacency = 0x000A;
	inline constexpr auto line_strip_adjacency = 0x000B;
	inline constexpr auto triangles_adjacency = 0x000C;
	inline constexpr auto triangle_strip_adjacency = 0x000D;
	inline constexpr auto program_point_size = 0x8642;
	inline constexpr auto max_geometry_texture_image_units = 0x8C29;
	inline constexpr auto framebuffer_attachment_layered = 0x8DA7;
	inline constexpr auto framebuffer_incomplete_layer_targets = 0x8DA8;
	inline constexpr auto geometry_shader = 0x8DD9;
	inline constexpr auto geometry_vertices_out = 0x8916;
	inline constexpr auto geometry_input_type = 0x8917;
	inline constexpr auto geometry_output_type = 0x8918;
	inline constexpr auto max_geometry_uniform_components = 0x8DDF;
	inline constexpr auto max_geometry_output_vertices = 0x8DE0;
	inline constexpr auto max_geometry_total_output_components = 0x8DE1;
	inline constexpr auto max_vertex_output_components = 0x9122;
	inline constexpr auto max_geometry_input_components = 0x9123;
	inline constexpr auto max_geometry_output_components = 0x9124;
	inline constexpr auto max_fragment_input_components = 0x9125;
	inline constexpr auto context_profile_mask = 0x9126;
	inline constexpr auto depth_clamp = 0x864F;
	inline constexpr auto quads_follow_provoking_vertex_convention = 0x8E4C;
	inline constexpr auto first_vertex_convention = 0x8E4D;
	inline constexpr auto last_vertex_convention = 0x8E4E;
	inline constexpr auto provoking_vertex = 0x8E4F;
	inline constexpr auto texture_cube_map_seamless = 0x884F;
	inline constexpr auto max_server_wait_timeout = 0x9111;
	inline constexpr auto object_type = 0x9112;
	inline constexpr auto sync_condition = 0x9113;
	inline constexpr auto sync_status = 0x9114;
	inline constexpr auto sync_flags = 0x9115;
	inline constexpr auto sync_fence = 0x9116;
	inline constexpr auto sync_gpu_commands_complete = 0x9117;
	inline constexpr auto unsignaled = 0x9118;
	inline constexpr auto signaled = 0x9119;
	inline constexpr auto already_signaled = 0x911A;
	inline constexpr auto timeout_expired = 0x911B;
	inline constexpr auto condition_satisfied = 0x911C;
	inline constexpr auto wait_failed = 0x911D;
	inline constexpr auto timeout_ignored = 0xFFFFFFFFFFFFFFFF;
	inline constexpr auto sync_flush_commands_bit = 0x00000001;
	inline constexpr auto sample_position = 0x8E50;
	inline constexpr auto sample_mask = 0x8E51;
	inline constexpr auto sample_mask_value = 0x8E52;
	inline constexpr auto max_sample_mask_words = 0x8E59;
	inline constexpr auto texture_2d_multisample = 0x9100;
	inline constexpr auto proxy_texture_2d_multisample = 0x9101;
	inline constexpr auto texture_2d_multisample_array = 0x9102;
	inline constexpr auto proxy_texture_2d_multisample_array = 0x9103;
	inline constexpr auto texture_binding_2d_multisample = 0x9104;
	inline constexpr auto texture_binding_2d_multisample_array = 0x9105;
	inline constexpr auto texture_samples = 0x9106;
	inline constexpr auto texture_fixed_sample_locations = 0x9107;
	inline constexpr auto sampler_2d_multisample = 0x9108;
	inline constexpr auto int_sampler_2d_multisample = 0x9109;
	inline constexpr auto unsigned_int_sampler_2d_multisample = 0x910A;
	inline constexpr auto sampler_2d_multisample_array = 0x910B;
	inline constexpr auto int_sampler_2d_multisample_array = 0x910C;
	inline constexpr auto unsigned_int_sampler_2d_multisample_array = 0x910D;
	inline constexpr auto max_color_texture_samples = 0x910E;
	inline constexpr auto max_depth_texture_samples = 0x910F;
	inline constexpr auto max_integer_samples = 0x9110;

}

NAGISA_EXTERNAL_OPENGL_API_PRIVATE_DEFINE(bind_sampler, glBindSampler, void_t(uint_t unit, uint_t sampler));

template<class T>
concept context_3_3 = context_3_2<T>
	&& invocables::bind_sampler<T>
	;

namespace constants
{
	inline constexpr auto vertex_attrib_array_divisor = 0x88FE;
	inline constexpr auto src1_color = 0x88F9;
	inline constexpr auto one_minus_src1_color = 0x88FA;
	inline constexpr auto one_minus_src1_alpha = 0x88FB;
	inline constexpr auto max_dual_source_draw_buffers = 0x88FC;
	inline constexpr auto any_samples_passed = 0x8C2F;
	inline constexpr auto sampler_binding = 0x8919;
	inline constexpr auto rgb10_a2ui = 0x906F;
	inline constexpr auto texture_swizzle_r = 0x8E42;
	inline constexpr auto texture_swizzle_g = 0x8E43;
	inline constexpr auto texture_swizzle_b = 0x8E44;
	inline constexpr auto texture_swizzle_a = 0x8E45;
	inline constexpr auto texture_swizzle_rgba = 0x8E46;
	inline constexpr auto time_elapsed = 0x88BF;
	inline constexpr auto timestamp = 0x8E28;
	inline constexpr auto int_2_10_10_10_rev = 0x8D9F;

}

NAGISA_BUILD_LIB_DETAIL_END
