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

s32 xmlHashLookup2(s32, u8 *, u8 *);                /* extern */
u8 *xmlStrdup(u8 *);                                /* extern */
u8 *xmlStrndup(u8 *, s32);                          /* extern */
extern M2C_UNK (*D_011B1E18)(u8 *);

s32 xmlGetDtdElementDesc(void *arg0, u8 *arg1) {
    u8 *sp0;
    s32 temp_18;
    s32 var_17;
    s32 var_2;
    s32 var_5;
    u8 *var_16;
    u8 *var_19;
    u8 temp_2;
    u8 temp_4;
    u8 var_2_2;

    var_2 = 0;
    var_19 = NULL;
    sp0 = NULL;
    if (arg0 != NULL) {
        temp_18 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_18 != 0) {
            temp_4 = M2C_FIELD(arg1, u8 *, 0);
            sp0 = NULL;
            var_5 = 0;
            if (temp_4 == 0x78) {
                if ((M2C_FIELD(arg1, u8 *, 1) == 0x6D) && (M2C_FIELD(arg1, u8 *, 2) == 0x6C)) {
                    if (M2C_FIELD(arg1, u8 *, 3) != 0x3A) {
                        goto block_6;
                    }
                } else {
                    goto block_7;
                }
            } else {
block_6:
block_7:
                var_19 = NULL;
                if (temp_4 != 0x3A) {
                    temp_2 = M2C_FIELD(arg1, u8 *, 0);
                    if (temp_2 != 0) {
                        var_16 = arg1;
                        if (temp_2 != 0x3A) {
                            var_5 += 1;
                            var_16 = arg1 + var_5;
                            var_2_2 = *var_16;
                            switch (var_2_2) {      /* irregular */
                            case 0x0:
                                var_19 = NULL;
                                break;
                            case 0x3A:
                                goto block_17;
                            }
                        } else {
                            var_2_2 = M2C_FIELD(var_16, u8 *, 0);
block_17:
                            var_19 = NULL;
                            if (var_2_2 != 0) {
                                sp0 = xmlStrndup(arg1, var_5);
                                var_19 = xmlStrdup(var_16 + 1);
                            }
                        }
                    }
                }
            }
            if (var_19 != NULL) {
                var_17 = xmlHashLookup2(temp_18, var_19, sp0);
                if (sp0 != NULL) {
                    D_011B1E18(sp0);
                }
                D_011B1E18(var_19);
            } else {
                var_17 = xmlHashLookup2(temp_18, arg1, NULL);
            }
            var_2 = var_17;
        }
    }
    return var_2;
}
