/* machine draft (m2c) for ee-gcc-2.96 -Os -G8, tried by autopilot */
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

M2C_UNK func_0014BAFC(s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32, M2C_UNK, s32); /* extern */

void func_0014C030(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 temp_12;
    s32 temp_13;

    func_0014BAFC(&sp10, &sp14, &sp18, &sp1C, arg2, arg2 + 4, arg4, 0, arg0);
    func_0014BAFC(&sp20, &sp24, &sp28, &sp2C, arg2 + 8, arg2 + 0xC, arg4, 0, arg0);
    temp_13 = (((((sp30 & ~0xFF) | (((sp10 < 0) ? 0 : sp10) & 0xFF)) & 0xFFFF00FF) | ((((sp14 < 0) ? 0 : sp14) & 0xFF) << 8)) & 0xFF00FFFF) | ((((sp18 < 0) ? 0 : sp18) & 0xFF) << 0x10);
    sp30 = temp_13;
    temp_12 = (((((sp34 & ~0xFF) | (((sp20 < 0) ? 0 : sp20) & 0xFF)) & 0xFFFF00FF) | ((((sp24 < 0) ? 0 : sp24) & 0xFF) << 8)) & 0xFF00FFFF) | ((((sp28 < 0) ? 0 : sp28) & 0xFF) << 0x10);
    sp34 = temp_12;
    sp30 = (temp_13 & 0xFFFFFF) | (((s32) (arg3 * ((sp1C < 0) ? 0 : sp1C)) / 255) << 0x18);
    sp34 = (temp_12 & 0xFFFFFF) | (((s32) (arg3 * ((sp2C < 0) ? 0 : sp2C)) / 255) << 0x18);
    func_0014BAFC(&sp10, &sp14, &sp18, &sp1C, &sp30, &sp34, arg5, 0, arg1);
    M2C_FIELD(arg6, u8 *, 0) = (u8) sp10;
    M2C_FIELD(arg6, u8 *, 3) = (u8) sp1C;
    M2C_FIELD(arg6, u8 *, 1) = (u8) sp14;
    M2C_FIELD(arg6, u8 *, 2) = (u8) sp18;
}
