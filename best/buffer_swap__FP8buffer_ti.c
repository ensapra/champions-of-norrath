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

void buffer_swap__FP8buffer_ti(void *arg0, s32 arg1) {
    s32 var_7;

    var_7 = 0;
    if (((arg1 & 1) && (D_011C3098 == 0)) || ((arg1 & 2) && (D_011C3098 != 0))) {
        var_7 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_7;
}
