//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Fc ps_Passthrough.inl /E ps_main /T ps_3_0 ps_Passthrough.fx
//
//
// Parameters:
//
//   sampler2D Tex0;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   Tex0         s0       1
//

    ps_3_0
    dcl_texcoord v0.xy
    dcl_2d s0
    texld oC0, v0, s0

// approximately 1 instruction slot used (1 texture, 0 arithmetic)
