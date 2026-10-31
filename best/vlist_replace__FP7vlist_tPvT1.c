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

void vlist_replace__FP7vlist_tPvT1(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    void **temp_2_2;
    void *temp_3;
    void *temp_5;
    void *temp_6;

    temp_2 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_5 = arg1 + temp_2;
    temp_6 = arg2 + temp_2;
    temp_3 = M2C_FIELD(temp_5, void **, 0);
    M2C_FIELD(temp_6, void **, 0) = temp_3;
    M2C_FIELD(temp_6, void ***, 4) = (void **) M2C_FIELD(temp_5, void ***, 4);
    if (temp_3 == NULL) {
        M2C_FIELD(arg0, void **, 4) = temp_6;
    } else {
        M2C_FIELD(temp_3, void **, 4) = temp_6;
    }
    temp_2_2 = M2C_FIELD(temp_6, void ***, 4);
    if (temp_2_2 == NULL) {
        M2C_FIELD(arg0, void **, 0) = temp_6;
        return;
    }
    *temp_2_2 = temp_6;
}
