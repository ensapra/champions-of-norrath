/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G8, tried by autopilot */
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

M2C_UNK func_001B68D0(s32);                         /* extern */
M2C_UNK func_001B6AE8(s32, s32, s32);               /* extern */
s32 func_001B6DC0();                                /* extern */
extern M2C_UNK jtbl_004C006C;

s32 func_001B71E8(u32 arg0) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_6;
    s32 var_2;

    temp_16 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == M2C_FIELD(temp_16, s32 *, 8)) {
            if (M2C_FIELD((&jtbl_004C006C + 0x4EE4), s32 *, 0x1C) != arg0) {
                var_2 = 0;
                if (M2C_FIELD(temp_16, s32 *, 0xC) & 1) {
                    temp_2 = func_001B6DC0();
                    temp_5 = M2C_FIELD(temp_16, s32 *, 0xC);
                    temp_6 = temp_5 & 2;
                    temp_5_2 = temp_5 & 0xFFFFFFFE;
                    M2C_FIELD(temp_16, s64 *, 0x18) = (s64) (M2C_FIELD(temp_16, s64 *, 0x18) + (temp_2 - M2C_FIELD(temp_16, s64 *, 0x10)));
                    M2C_FIELD(temp_16, s32 *, 0xC) = temp_5_2;
                    if (temp_6 != 0) {
                        func_001B6AE8(temp_16, temp_5_2, temp_6);
                        func_001B68D0(temp_2);
                    }
                    var_2 = 1;
                }
                return var_2;
            }
            return 0x80000010;
        }
        goto block_4;
    }
block_4:
    return 0x80008002;
}
