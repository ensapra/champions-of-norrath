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

M2C_UNK memcpy(s32, s32, s32, s32);                 /* extern */

void buffer_copy__FP8buffer_tT0i(void *arg0, void *arg1, s32 arg2) {
    s32 temp_4;
    s32 temp_7;
    s32 temp_8;

    temp_8 = M2C_FIELD(arg0, s32 *, 8);
    temp_4 = temp_8 + arg2;
    if (M2C_FIELD(arg0, s32 *, 4) >= temp_4) {
        temp_7 = M2C_FIELD(arg1, s32 *, 8);
        if (M2C_FIELD(arg1, s32 *, 4) < (temp_7 + arg2)) {
            M2C_FIELD(arg0, s32 *, 8) = temp_4;
            goto block_8;
        }
        memcpy(M2C_FIELD(arg1, s32 *, 0) + temp_7, M2C_FIELD(arg0, s32 *, 0) + temp_8, temp_7, temp_8);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + arg2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
block_8:
    M2C_FIELD(arg1, s32 *, 0xC) = 1;
}
