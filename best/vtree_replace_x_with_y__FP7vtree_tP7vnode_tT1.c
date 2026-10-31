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

void vtree_replace_x_with_y__FP7vtree_tP7vnode_tT1(void **arg0, void *arg1, void *arg2) {
    void *temp_7;

    M2C_FIELD(arg2, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    temp_7 = M2C_FIELD(arg1, void **, 4);
    if (temp_7 != (arg0 + 0x14)) {
        if (arg1 == M2C_FIELD(temp_7, void **, 8)) {
            M2C_FIELD(temp_7, void **, 8) = arg2;
            return;
        }
        M2C_FIELD(temp_7, void **, 0xC) = arg2;
        return;
    }
    *arg0 = arg2;
}
