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

void buffer_read_offset_uns16__FP8buffer_tPUsUs(void *arg0, s16 *arg1, s32 arg2) {
    s8 sp0;
    s8 sp1;
    s32 temp_7;
    s32 var_9;
    s8 *var_8;
    u8 *var_7;
    u8 temp_3;
    void *temp_2;

    temp_7 = M2C_FIELD(arg0, s32 *, 8);
    if (M2C_FIELD(arg0, s32 *, 4) >= (temp_7 + 2)) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                var_9 = 0;
                var_8 = &sp1;
                var_7 = temp_7 + M2C_FIELD(arg0, s32 *, 0);
                do {
                    temp_3 = *var_7;
                    var_7 += 1;
                    var_9 += 1;
                    *var_8 = (s8) temp_3;
                    var_8 -= 1;
                } while (var_9 < 2);
            } else {
                temp_2 = M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8);
                sp0 = M2C_FIELD(temp_2, s8 *, 0);
                sp1 = M2C_FIELD(temp_2, s8 *, 1);
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 2);
        } else {
            goto block_10;
        }
    } else {
block_10:
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
    *arg1 = (arg2 & 0xFFFF) + (u16) sp0;
}
