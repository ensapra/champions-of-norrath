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

u32 AsynchAlignment__6VIFile(s32, s32, s32);        /* extern */
s64 __umoddi3(s64, u32);                            /* extern */

s32 Align__8VILoaderR13VILoaderTrans(void *arg0, void *arg1) {
    s32 temp_5;
    s32 temp_6;
    s64 temp_18;
    s64 temp_6_2;
    u32 temp_2;
    u32 temp_4;
    u32 temp_hi;

    temp_6 = M2C_FIELD(arg0, s32 *, 4);
    temp_5 = M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg1, u32 *, 0x20) = (u32) M2C_FIELD(arg1, u32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x24) = temp_5;
    temp_2 = AsynchAlignment__6VIFile(temp_6 + (M2C_FIELD(arg1, s32 *, 0xC) * 0xC8), temp_5, temp_6);
    temp_18 = M2C_FIELD(arg1, s64 *, 0x10);
    temp_6_2 = (s64) (__umoddi3(temp_18, temp_2) << 0x20) >> 0x20;
    temp_4 = M2C_FIELD(arg1, u32 *, 0x20) + temp_6_2;
    temp_hi = temp_4 % temp_2;
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + temp_6_2);
    M2C_FIELD(arg1, s64 *, 0x10) = (s64) (temp_18 - ((u64) (temp_6_2 << 0x20) >> 0x20));
    M2C_FIELD(arg1, u32 *, 0x20) = temp_4;
    M2C_FIELD(arg1, u32 *, 0x20) = (u32) (temp_4 + ((temp_hi != 0) ? (temp_2 - temp_hi) : temp_hi));
    return 0;
}
