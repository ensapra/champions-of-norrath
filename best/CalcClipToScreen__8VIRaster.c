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

M2C_UNK Identity__10VIMatrix44(M2C_UNK);            /* extern */

s32 CalcClipToScreen__8VIRaster(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f5;

    Identity__10VIMatrix44(0x700000C0);
    temp_f2 = (f32) M2C_FIELD(arg0, s32 *, 0x4540);
    temp_f5 = (f32) M2C_FIELD(arg0, s32 *, 0x453C) * 0.5f;
    *(f32 *)0x700000C0 = temp_f5;
    *(f32 *)0x700000D4 = -temp_f2 * 0.5f;
    *(f32 *)0x700000F0 = (2048.0f - ((f32) M2C_FIELD(arg0, s32 *, 0x4554) * 0.5f)) + temp_f5 + (f32) M2C_FIELD(arg0, s32 *, 0x4534);
    *(f32 *)0x700000F4 = (2048.0f - ((f32) M2C_FIELD(arg0, s32 *, 0x4558) * 0.5f)) + (temp_f2 * 0.5f) + (f32) M2C_FIELD(arg0, s32 *, 0x4538);
    *(f32 *)0x700000E8 = (M2C_FIELD(arg0, f32 *, 0x456C) - M2C_FIELD(arg0, f32 *, 0x4570)) * 0.5f;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x456C);
    *(f32 *)0x700000F8 = ((M2C_FIELD(arg0, f32 *, 0x4570) - temp_f1) * 0.5f) + temp_f1 + M2C_FIELD(arg0, f32 *, 0x4488);
    return 0;
}
