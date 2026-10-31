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

void vtree_rotate__FP7vtree_tP7vnode_ti(void **arg0, void *arg1, s32 arg2) {
    s32 temp_8;
    void **temp_3;
    void **temp_9;
    void *temp_2;
    void *temp_3_2;
    void *temp_7;

    temp_3 = arg1 + 8 + ((arg2 ^ 1) * 4);
    temp_8 = arg0 + 0x14;
    temp_7 = *temp_3;
    temp_9 = temp_7 + 8 + (arg2 * 4);
    temp_2 = *temp_9;
    *temp_3 = temp_2;
    if (temp_2 != temp_8) {
        M2C_FIELD(temp_2, void **, 4) = arg1;
    }
    M2C_FIELD(temp_7, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    temp_3_2 = M2C_FIELD(arg1, void **, 4);
    if (temp_3_2 != temp_8) {
        if (arg1 != M2C_FIELD(temp_3_2, void **, 8)) {
            M2C_FIELD(temp_3_2, void **, 0xC) = temp_7;
        } else {
            M2C_FIELD(temp_3_2, void **, 8) = temp_7;
        }
    } else {
        *arg0 = temp_7;
    }
    *temp_9 = arg1;
    M2C_FIELD(arg1, void **, 4) = temp_7;
}
