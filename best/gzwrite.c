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

s32 crc32(s32, s32, s32);                           /* extern */
s32 deflate(void *, M2C_UNK);                       /* extern */
s32 fwrite(s32, M2C_UNK, M2C_UNK, s32);             /* extern */

s32 gzwrite(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_4;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 0x5C) == 0x77) {
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            M2C_FIELD(arg0, s32 *, 4) = arg2;
loop_7:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
                    temp_4 = M2C_FIELD(arg0, s32 *, 0x48);
                    M2C_FIELD(arg0, s32 *, 0xC) = temp_4;
                    temp_2 = fwrite(temp_4, 1, 0x4000, M2C_FIELD(arg0, s32 *, 0x40));
                    if (temp_2 != 0x4000) {
                        M2C_FIELD(arg0, s32 *, 0x38) = -1;
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x10) = temp_2;
                        goto block_13;
                    }
                } else {
block_13:
                    temp_2_2 = deflate(arg0, 0);
                    M2C_FIELD(arg0, s32 *, 0x38) = temp_2_2;
                    if (temp_2_2 == 0) {
                        goto loop_7;
                    }
                }
            }
            M2C_FIELD(arg0, s32 *, 0x4C) = crc32(M2C_FIELD(arg0, s32 *, 0x4C), arg1, arg2);
            return arg2 - M2C_FIELD(arg0, s32 *, 4);
        }
        goto block_4;
    }
block_4:
    return -2;
}
