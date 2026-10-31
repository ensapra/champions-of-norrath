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

M2C_UNK func_0010A600(s32, s32);                    /* extern */
extern M2C_UNK Final__Q24Base3MD5;
extern M2C_UNK hudFinishGold__Fv;

void func_001225D8(s64 arg1) {
    s32 temp_2;
    s64 temp_5;

    temp_5 = (s64) (arg1 << 0x20) >> 0x20;
    temp_2 = temp_5 * 4;
    if ((u32) temp_5 < 3U) {
        func_0010A600(*(&Final__Q24Base3MD5 + 0x360 + temp_2), *(&hudFinishGold__Fv + 0xD0 + temp_2));
    }
}
