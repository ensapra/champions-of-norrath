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

extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011DD7E0;
extern M2C_UNK D_011DD800;

void *xmlXPtrAdvanceNode(void *arg0) {
    s32 temp_3;
    void *var_16;
    void *var_2;
    void *var_2_2;

    var_16 = arg0;
loop_1:
    var_2 = NULL;
    if (var_16 != NULL) {
        var_2_2 = M2C_FIELD(var_16, void **, 0xC);
        if (var_2_2 != NULL) {
            goto block_9;
        }
loop_6:
        var_2_2 = M2C_FIELD(var_16, void **, 0x18);
        if (var_2_2 == NULL) {
            var_16 = M2C_FIELD(var_16, void **, 0x14);
            var_2 = NULL;
            if (var_16 != NULL) {
                goto loop_6;
            }
        } else {
block_9:
            var_16 = var_2_2;
            temp_3 = M2C_FIELD(var_16, s32 *, 4);
            if ((temp_3 == 1) || (temp_3 == 3) || (temp_3 == 9) || (temp_3 == 0xD) || (temp_3 == 4)) {
                var_2 = var_16;
                if (temp_3 == 5) {
                    D_0118EDD0(D_0118EDD4, &D_011DD7E0, &D_011DD800, 0x8B4, D_0118EDD0);
                    var_2 = var_16;
                }
            } else {
                goto loop_1;
            }
        }
    }
    return var_2;
}
