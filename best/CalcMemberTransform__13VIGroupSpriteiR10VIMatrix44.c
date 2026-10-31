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

M2C_UNK Transform__10VIMatrix44RC7VIVect3fT1(s32, s32, s32, f32); /* extern */

s32 CalcMemberTransform__13VIGroupSpriteiR10VIMatrix44(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_5;

    temp_5 = arg1 << 5;
    temp_2 = arg0 + temp_5;
    Transform__10VIMatrix44RC7VIVect3fT1(arg2, temp_2 + 0x48, temp_2 + 0x58, M2C_FIELD((temp_5 + arg0), f32 *, 0x54));
    return 0;
}
