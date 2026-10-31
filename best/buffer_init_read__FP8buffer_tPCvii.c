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

extern s8 D_011C3098;

void buffer_init_read__FP8buffer_tPCvii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_6;

    M2C_FIELD(arg0, s32 *, 4) = arg2;
    var_6 = 0;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (!(arg3 & 1) || (D_011C3098 != 0)) {
        if (arg3 & 2) {
            if (D_011C3098 != 0) {
                goto block_4;
            }
        }
    } else {
block_4:
        var_6 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_6;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}
