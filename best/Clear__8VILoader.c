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

s32 Clear__t5VIMap2ZUiZi(void *);                   /* extern */
s32 Clear__t6VIPool1Z13VILoaderTrans(void *);       /* extern */
s32 Close__6VIFile(s32);                            /* extern */
M2C_UNK ___6VIFile(void *, M2C_UNK);                /* extern */
M2C_UNK ___t7VIArray1Z14VIResourceElem(void *, M2C_UNK); /* extern */
M2C_UNK __builtin_vec_delete(s32);                  /* extern */

s32 Clear__8VILoader(void *arg0) {
    s32 temp_4;
    s32 temp_4_3;
    s32 var_16;
    s32 var_18;
    void *temp_4_2;
    void *var_16_2;

    var_18 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) > 0) {
        var_16 = 0;
loop_2:
        temp_4 = M2C_FIELD(arg0, void **, 4) + var_16;
        var_16 += 0xC8;
        var_18 += 1;
        if (Close__6VIFile(temp_4) >= 0) {
            if (var_18 < M2C_FIELD(arg0, s32 *, 0)) {
                goto loop_2;
            }
            goto block_6;
        }
        goto block_16;
    }
block_6:
    temp_4_2 = M2C_FIELD(arg0, void **, 4);
    if (temp_4_2 != NULL) {
        var_16_2 = temp_4_2 + (M2C_FIELD(temp_4_2, s32 *, -8) * 0xC8);
        if (temp_4_2 != var_16_2) {
            do {
                var_16_2 -= 0xC8;
                ___t7VIArray1Z14VIResourceElem(var_16_2 + 0xC0, 2);
                ___6VIFile(var_16_2, 2);
            } while (M2C_FIELD(arg0, void **, 4) != var_16_2);
        }
        __builtin_vec_delete(M2C_FIELD(arg0, void **, 4) - 8);
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    if (Clear__t6VIPool1Z13VILoaderTrans(arg0 + 0x684) < 0) {
        return -1;
    }
    if (Clear__t5VIMap2ZUiZi(arg0 + 0x69C) >= 0) {
        temp_4_3 = M2C_FIELD(arg0, s32 *, 0x6C0);
        if (temp_4_3 != 0) {
            __builtin_vec_delete(temp_4_3);
            M2C_FIELD(arg0, s32 *, 0x6BC) = 0;
            M2C_FIELD(arg0, s32 *, 0x6C0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x6B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x6B8) = 0;
        M2C_FIELD(arg0, s32 *, 0x680) = -1;
        return 0;
    }
block_16:
    return -1;
}
