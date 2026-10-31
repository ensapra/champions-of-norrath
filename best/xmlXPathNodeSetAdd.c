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

M2C_UNK memset(s32 *, M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern s32 *(*D_011B1E1C)(M2C_UNK, s32, s32);
extern s32 *(*D_011B1E20)(s32 *, s32, s32);
extern M2C_UNK D_011DCAF0;

void xmlXPathNodeSetAdd(void *arg0, s32 arg1) {
    s32 *temp_2_2;
    s32 *temp_2_3;
    s32 *var_3;
    s32 temp_2;
    s32 temp_4;
    s32 var_2;
    s32 var_6;

    if (arg1 != 0) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        var_6 = 0;
        if (temp_4 > 0) {
            var_3 = M2C_FIELD(arg0, s32 **, 8);
            var_2 = *var_3;
loop_3:
            var_3 += 4;
            if (var_2 != arg1) {
                var_6 += 1;
                if (var_6 < temp_4) {
                    var_2 = *var_3;
                    goto loop_3;
                }
                goto block_7;
            }
        } else {
block_7:
            temp_2 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_2 == 0) {
                temp_2_2 = D_011B1E1C(0x28, temp_4, var_6);
                M2C_FIELD(arg0, s32 **, 8) = temp_2_2;
                if (temp_2_2 != NULL) {
                    memset(temp_2_2, 0, 0x28);
                    M2C_FIELD(arg0, s32 *, 4) = 0xA;
                    goto block_15;
                }
                goto block_14;
            }
            if (temp_4 == temp_2) {
                M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_4 * 2);
                temp_2_3 = D_011B1E20(M2C_FIELD(arg0, s32 **, 8), temp_4 * 8, var_6);
                if (temp_2_3 != NULL) {
                    M2C_FIELD(arg0, s32 **, 8) = temp_2_3;
block_15:
                    goto block_16;
                }
block_14:
                D_0118EDD0(D_0118EDD4, &D_011DCAF0, D_0118EDD0);
                return;
            }
block_16:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            M2C_FIELD(arg0, s32 **, 8)[M2C_FIELD(arg0, s32 *, 0)] = arg1;
        }
    }
}
