/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK CalcClipToScreen__8VIRaster(s32, s32);      /* extern */
M2C_UNK SetGSScissoring__8VIRaster(void *);         /* extern */

s32 Viewport__8VIRasteriiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f0;
    f32 temp_f3;
    s32 temp_7;
    s32 temp_8;

    temp_7 = (arg3 - arg1) + 1;
    temp_8 = (arg4 - arg2) + 1;
    temp_f3 = (f32) temp_7 * 0.5f;
    temp_f0 = (f32) temp_8 * 0.5f;
    M2C_FIELD(arg0, s32 *, 0x4534) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4538) = arg2;
    M2C_FIELD(arg0, s32 *, 0x453C) = temp_7;
    M2C_FIELD(arg0, s32 *, 0x4540) = temp_8;
    M2C_FIELD(arg0, f32 *, 0x4544) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x4548) = temp_f0;
    M2C_FIELD(arg0, f32 *, 0x4550) = (f32) (1.0f / temp_f0);
    M2C_FIELD(arg0, f32 *, 0x4578) = (f32) (2048.0f - (M2C_FIELD(arg0, f32 *, 0x4560) - ((f32) arg2 + temp_f0)));
    M2C_FIELD(arg0, f32 *, 0x4574) = (f32) (2048.0f - (M2C_FIELD(arg0, f32 *, 0x455C) - ((f32) arg1 + temp_f3)));
    M2C_FIELD(arg0, f32 *, 0x454C) = (f32) (1.0f / temp_f3);
    CalcClipToScreen__8VIRaster(temp_7, temp_8);
    SetGSScissoring__8VIRaster(arg0);
    M2C_FIELD(arg0, s32 *, 0x45E4) = 1;
    M2C_FIELD(arg0, s32 *, 0x45E0) = 1;
    return 0;
}
