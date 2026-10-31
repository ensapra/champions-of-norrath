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

M2C_UNK Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(s32 *, s32, s32, M2C_UNK, s32); /* extern */

void Init__14VIUITextScrollP4VIUIRC8VIVect2Iii13VIScrollStyle(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp10;
    s32 sp14;

    M2C_FIELD(arg0, s32 *, 0x180) = arg3;
    M2C_FIELD(arg0, s32 *, 0x170) = arg5;
    sp10 = 0;
    sp14 = 0;
    Init__10VIUIWindowP4VIUIRC8VIVect2IT2iii(&sp10, arg2, arg3, 1, arg4);
}
