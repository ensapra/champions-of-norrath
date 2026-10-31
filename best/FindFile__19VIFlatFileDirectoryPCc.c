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

void **Begin__Ct6VIList1ZP10VIFlatFile(s32);        /* extern */
s32 End__Ct6VIList1ZP10VIFlatFile(s32);             /* extern */
void **Next__Ct6VIList1ZP10VIFlatFilei(s32, void **); /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
s32 __wrap_strdup(s32);                             /* extern */
s32 strcasecmp(s32, s32);                           /* extern */
s32 strlen(s32, void **);                           /* extern */
s32 strtok(s32, M2C_UNK *);                         /* extern */
extern M2C_UNK D_011C2600;

void *FindFile__19VIFlatFileDirectoryPCc(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    void **var_2;
    void *temp_16;
    void *var_20;

    if (arg1 == 0) {
        return NULL;
    }
    var_20 = NULL;
    temp_2 = __wrap_strdup(arg1);
    temp_2_2 = strtok(temp_2, &D_011C2600);
    temp_18 = arg0 + 0x18;
    if (temp_2_2 != 0) {
        var_2 = Begin__Ct6VIList1ZP10VIFlatFile(temp_18);
loop_9:
        if (var_2 != End__Ct6VIList1ZP10VIFlatFile(temp_18)) {
            temp_16 = *var_2;
            if (temp_16 != NULL) {
                temp_2_3 = M2C_FIELD(temp_16, s32 *, 0);
                if (temp_2_3 != 0) {
                    if (strcasecmp(temp_2_2, temp_2_3) == 0) {
                        temp_2_4 = M2C_FIELD(temp_16, s32 *, 0xC);
                        if (temp_2_4 == 1) {
                            var_20 = temp_16;
                        } else {
                            if (temp_2_4 != 2) {
                                goto block_7;
                            }
                            var_20 = FindFile__19VIFlatFileDirectoryPCc(temp_16, temp_2_2 + strlen(temp_2_2, var_2) + 1);
                        }
                    } else {
                        goto block_8;
                    }
                } else {
block_7:
                    goto block_8;
                }
            } else {
block_8:
                var_2 = Next__Ct6VIList1ZP10VIFlatFilei(temp_18, var_2);
                goto loop_9;
            }
        }
    }
    __wrap_free(temp_2);
    return var_20;
}
