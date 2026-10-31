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

s32 vlist_remove__FP7vlist_tPv(void *arg0, s32 arg1) {
    s32 temp_6;
    void **temp_2;
    void **temp_3;
    void **temp_3_3;
    void *temp_2_2;
    void *temp_3_2;
    void *temp_3_4;
    void *temp_5;

    temp_6 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_5 = arg1 + temp_6;
    if (temp_5 != M2C_FIELD(arg0, void **, 0)) {
        if (temp_5 != M2C_FIELD(arg0, void ***, 4)) {
            temp_3 = M2C_FIELD(temp_5, void ***, 4);
            if (temp_3 != NULL) {
                *temp_3 = M2C_FIELD(temp_5, void **, 0);
            }
            temp_3_2 = M2C_FIELD(temp_5, void **, 0);
            if (temp_3_2 != NULL) {
                M2C_FIELD(temp_3_2, void ***, 4) = (void **) M2C_FIELD(temp_5, void ***, 4);
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
            return temp_5 - temp_6;
        }
        if (temp_5 != NULL) {
            temp_2 = M2C_FIELD(temp_5, void ***, 4);
            M2C_FIELD(arg0, void ***, 4) = temp_2;
            if (temp_2 == NULL) {
                M2C_FIELD(arg0, void **, 0) = NULL;
            }
            goto block_12;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return 0;
    }
    if (temp_5 != NULL) {
        temp_2_2 = M2C_FIELD(temp_5, void **, 0);
        M2C_FIELD(arg0, void **, 0) = temp_2_2;
        if (temp_2_2 == NULL) {
            M2C_FIELD(arg0, void ***, 4) = NULL;
        }
block_12:
        temp_3_3 = M2C_FIELD(temp_5, void ***, 4);
        if (temp_3_3 != NULL) {
            *temp_3_3 = M2C_FIELD(temp_5, void **, 0);
        }
        temp_3_4 = M2C_FIELD(temp_5, void **, 0);
        if (temp_3_4 != NULL) {
            M2C_FIELD(temp_3_4, void ***, 4) = (void **) M2C_FIELD(temp_5, void ***, 4);
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
        return temp_5 - M2C_FIELD(arg0, s32 *, 0xC);
    }
    return 0;
}
