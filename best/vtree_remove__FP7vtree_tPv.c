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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK vtree_remove_fixup__FP7vtree_tP7vnode_t(void *, void *); /* extern */
extern M2C_UNK D_011DB040;
extern M2C_UNK D_011DB050;

s32 vtree_remove__FP7vtree_tPv(void *arg0, s32 arg1) {
    s32 temp_2_3;
    s32 var_3;
    s32 var_3_3;
    s32 var_3_4;
    s32 var_3_6;
    void **var_3_2;
    void **var_3_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *var_16;
    void *var_16_2;
    void *var_16_3;
    void *var_17;
    void *var_18;
    void *var_2;
    void *var_5;

    if (arg1 == 0) {
        var_18 = arg0 + 0x14;
        var_17 = var_18;
    } else {
        var_17 = arg0 + 0x14;
        var_18 = arg1 + M2C_FIELD(arg0, s32 *, 8);
    }
    if (arg1 == 0) {
        _uassert(&D_011DB040, &D_011DB050, 0x16D);
    }
    var_16 = var_18;
    if ((M2C_FIELD(var_18, void **, 8) != var_17) && (M2C_FIELD(var_18, void **, 0xC) != var_17)) {
        if (var_18 == var_17) {
            var_3 = 0;
        } else {
            var_3 = var_18 - M2C_FIELD(arg0, s32 *, 8);
        }
        var_16_2 = var_17;
        if (var_3 != 0) {
            var_16_2 = var_3 + M2C_FIELD(arg0, s32 *, 8);
        }
        if (var_3 == 0) {
            _uassert(&D_011DB040, &D_011DB050, 0x14B);
        }
        temp_2 = M2C_FIELD(var_16_2, void **, 0xC);
        if (temp_2 != var_17) {
            var_16_2 = temp_2;
            var_3_2 = var_16_2 + 8;
            if (M2C_FIELD(var_16_2, s32 *, 8) != var_17) {
                do {
                    var_16_2 = *var_3_2;
                    var_3_2 = var_16_2 + 8;
                } while (M2C_FIELD(var_16_2, s32 *, 8) != var_17);
            }
        } else {
loop_20:
            temp_3 = M2C_FIELD(var_16_2, void **, 4);
            if (temp_3 == var_17) {
                var_16_2 = temp_3;
            } else {
                var_16_2 = temp_3;
                if (M2C_FIELD(temp_3, s32 *, 0xC) != var_16_2) {

                } else {
                    goto loop_20;
                }
            }
        }
        if (var_16_2 == var_17) {
            var_3_3 = 0;
        } else {
            var_3_3 = var_16_2 - M2C_FIELD(arg0, s32 *, 8);
        }
        var_2 = var_17;
        if (var_3_3 != 0) {
            if (var_18 == var_17) {
                var_3_4 = 0;
            } else {
                var_3_4 = var_18 - M2C_FIELD(arg0, s32 *, 8);
            }
            var_16_3 = var_17;
            if (var_3_4 != 0) {
                var_16_3 = var_3_4 + M2C_FIELD(arg0, s32 *, 8);
            }
            if (var_3_4 == 0) {
                _uassert(&D_011DB040, &D_011DB050, 0x14B);
            }
            temp_2_2 = M2C_FIELD(var_16_3, void **, 0xC);
            if (temp_2_2 != var_17) {
                var_16_3 = temp_2_2;
                var_3_5 = var_16_3 + 8;
                if (M2C_FIELD(var_16_3, s32 *, 8) != var_17) {
                    do {
                        var_16_3 = *var_3_5;
                        var_3_5 = var_16_3 + 8;
                    } while (M2C_FIELD(var_16_3, s32 *, 8) != var_17);
                }
            } else {
loop_46:
                temp_3_2 = M2C_FIELD(var_16_3, void **, 4);
                if (temp_3_2 == var_17) {
                    var_16_3 = temp_3_2;
                } else {
                    var_16_3 = temp_3_2;
                    if (M2C_FIELD(temp_3_2, s32 *, 0xC) != var_16_3) {

                    } else {
                        goto loop_46;
                    }
                }
            }
            temp_2_3 = M2C_FIELD(arg0, s32 *, 8);
            if (var_16_3 != var_17) {
                var_3_6 = var_16_3 - temp_2_3;
            } else {
                var_3_6 = 0;
            }
            var_2 = var_3_6 + temp_2_3;
        }
        var_16 = var_2;
    }
    temp_2_4 = M2C_FIELD(var_16, void **, 8);
    var_5 = temp_2_4;
    if (temp_2_4 == var_17) {
        var_5 = M2C_FIELD(var_16, void **, 0xC);
    }
    M2C_FIELD(var_5, void **, 4) = (void *) M2C_FIELD(var_16, void **, 4);
    temp_3_3 = M2C_FIELD(var_16, void **, 4);
    if (temp_3_3 != var_17) {
        if (var_16 != M2C_FIELD(temp_3_3, void **, 8)) {
            M2C_FIELD(temp_3_3, void **, 0xC) = var_5;
        } else {
            M2C_FIELD(temp_3_3, void **, 8) = var_5;
        }
    } else {
        M2C_FIELD(arg0, void **, 0) = var_5;
    }
    if (M2C_FIELD(var_16, s32 *, 0) == 0) {
        vtree_remove_fixup__FP7vtree_tP7vnode_t(arg0, var_5);
    }
    if (var_16 != var_18) {
        M2C_FIELD(var_16, void **, 8) = (void *) M2C_FIELD(var_18, void **, 8);
        M2C_FIELD(var_16, s32 *, 0) = (s32) M2C_FIELD(var_18, s32 *, 0);
        M2C_FIELD(var_16, void **, 0xC) = (void *) M2C_FIELD(var_18, void **, 0xC);
        M2C_FIELD(var_16, void **, 4) = (void *) M2C_FIELD(var_18, void **, 4);
        temp_3_4 = M2C_FIELD(var_18, void **, 4);
        if (temp_3_4 != var_17) {
            if (var_18 != M2C_FIELD(temp_3_4, void **, 8)) {
                M2C_FIELD(temp_3_4, void **, 0xC) = var_16;
            } else {
                M2C_FIELD(temp_3_4, void **, 8) = var_16;
            }
        } else {
            M2C_FIELD(arg0, void **, 0) = var_16;
        }
        M2C_FIELD(M2C_FIELD(var_18, void **, 8), void **, 4) = var_16;
        M2C_FIELD(M2C_FIELD(var_18, void **, 0xC), void **, 4) = var_16;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
    return arg1;
}
