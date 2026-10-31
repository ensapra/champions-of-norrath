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

M2C_UNK __wrap_free(s32);                           /* extern */
s32 __wrap_strdup(s32);                             /* extern */
s32 atoi(s32);                                      /* extern */
M2C_UNK printf(M2C_UNK *, s8 *, s32);               /* extern */
s8 *strstr(s8 *, M2C_UNK *);                        /* extern */
s8 *strtok(s32, M2C_UNK *);                         /* extern */
extern M2C_UNK D_011D45E0;
extern M2C_UNK D_011D45E8;
extern M2C_UNK D_011D45F0;

void ParseHostsBuffer__20VIWndGenericRendererPCc(s32 arg1) {
    s32 temp_2;
    s32 temp_2_3;
    s8 *temp_2_2;
    s8 *var_16;

    if (arg1 != 0) {
        temp_2 = __wrap_strdup(arg1);
        if (temp_2 != 0) {
            var_16 = strtok(temp_2, &D_011D45E0);
loop_7:
            if (var_16 != NULL) {
                if (*var_16 != 0x23) {
                    temp_2_2 = strstr(var_16, &D_011D45E8);
                    if (temp_2_2 != NULL) {
                        *temp_2_2 = 0;
                        temp_2_3 = atoi(temp_2_2 + 1);
                        if (temp_2_3 > 0) {
                            printf(&D_011D45F0, var_16, temp_2_3);
                        }
                        goto block_6;
                    }
                } else {
block_6:
                    var_16 = strtok(0, &D_011D45E0);
                    goto loop_7;
                }
            }
            __wrap_free(temp_2);
        }
    }
}
