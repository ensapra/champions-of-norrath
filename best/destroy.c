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

s32 *__errno();                                     /* extern */
M2C_UNK __wrap_free(void *);                        /* extern */
s32 deflateEnd(void *);                             /* extern */
s32 fclose(s32);                                    /* extern */
s32 inflateEnd(void *);                             /* extern */

s32 destroy(void *arg0) {
    s32 temp_17;
    s32 temp_3_2;
    s32 temp_4_2;
    s32 var_17;
    s32 var_2;
    s32 var_2_2;
    s8 temp_3;
    void *temp_4;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;

    var_2 = -2;
    var_17 = 0;
    if (arg0 != NULL) {
        temp_4 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_4 != NULL) {
            __wrap_free(temp_4);
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            temp_3 = M2C_FIELD(arg0, s8 *, 0x5C);
            switch (temp_3) {                       /* irregular */
            case 0x77:
                var_2_2 = deflateEnd(arg0);
block_11:
                var_17 = var_2_2;
                break;
            case 0x72:
                var_2_2 = inflateEnd(arg0);
                goto block_11;
            }
        }
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0x40);
        if ((temp_4_2 != 0) && (fclose(temp_4_2) != 0)) {
            var_17 = ((*__errno() ^ 0x1D) != 0) ? -1 : var_17;
        }
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0x38);
        temp_4_3 = M2C_FIELD(arg0, void **, 0x44);
        temp_17 = (temp_3_2 < 0) ? temp_3_2 : var_17;
        if (temp_4_3 != NULL) {
            __wrap_free(temp_4_3);
        }
        temp_4_4 = M2C_FIELD(arg0, void **, 0x48);
        if (temp_4_4 != NULL) {
            __wrap_free(temp_4_4);
        }
        temp_4_5 = M2C_FIELD(arg0, void **, 0x54);
        if (temp_4_5 != NULL) {
            __wrap_free(temp_4_5);
        }
        var_2 = temp_17;
        if (arg0 != NULL) {
            __wrap_free(arg0);
            var_2 = temp_17;
        }
    }
    return var_2;
}
