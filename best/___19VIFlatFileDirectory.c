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
void **Erase__t6VIList1ZP10VIFlatFilei(s32, void **); /* extern */
M2C_UNK ___t6VIList1ZP10VIFlatFile(s32, M2C_UNK);   /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
extern M2C_UNK D_011F3A78;
extern M2C_UNK D_011F3A90;

void ___19VIFlatFileDirectory(void *arg0, s32 arg1) {
    s32 temp_19;
    s32 temp_4;
    s32 temp_4_2;
    void **var_17;
    void *temp_16;
    void *temp_2;

    temp_19 = arg0 + 0x18;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_011F3A78;
    var_17 = Begin__Ct6VIList1ZP10VIFlatFile(temp_19);
loop_4:
    if (var_17 != End__Ct6VIList1ZP10VIFlatFile(temp_19)) {
        temp_16 = *var_17;
        var_17 = Erase__t6VIList1ZP10VIFlatFilei(temp_19, var_17);
        if (temp_16 != NULL) {
            temp_2 = M2C_FIELD(temp_16, void **, 0x10);
            M2C_FIELD((temp_2 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(temp_16 + M2C_FIELD(temp_2, s16 *, 8), 3);
        }
        goto loop_4;
    }
    ___t6VIList1ZP10VIFlatFile(temp_19, 2);
    temp_4 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_011F3A90;
    if (temp_4 != 0) {
        __wrap_free(temp_4);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_4_2 != 0) {
        __wrap_free(temp_4_2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
