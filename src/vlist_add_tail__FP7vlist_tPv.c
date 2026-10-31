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

void vlist_add_tail__FP7vlist_tPv(void *arg0, s32 arg1) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_5;

    temp_5 = arg1 + M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(temp_5, M2C_UNK **, 0) = NULL;
    M2C_FIELD(temp_5, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = temp_5;
    if (M2C_FIELD(arg0, M2C_UNK **, 0) == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = temp_5;
    }
    temp_2 = M2C_FIELD(temp_5, M2C_UNK **, 0);
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_5;
    }
    temp_2_2 = M2C_FIELD(temp_5, M2C_UNK **, 4);
    if (temp_2_2 != NULL) {
        *temp_2_2 = temp_5;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
