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

void **Begin__Ct6VIList1ZP12VIPrimBuffer(void *, void **); /* extern */
void **Begin__Ct6VIList1ZP9VISurface(s32);          /* extern */
s32 End__Ct6VIList1ZP12VIPrimBuffer(void *);        /* extern */
s32 End__Ct6VIList1ZP9VISurface(s32);               /* extern */
s32 Erase__t6VIList1ZP12VIPrimBufferi(void *, void **); /* extern */
s32 Erase__t6VIList1ZP9VISurfacei(s32, void **);    /* extern */
void **Next__Ct6VIList1ZP12VIPrimBufferi(void *, void **); /* extern */
void **Next__Ct6VIList1ZP9VISurfacei(s32, void **); /* extern */
M2C_UNK ___12VIPrimBuffer(void *, M2C_UNK);         /* extern */
M2C_UNK ___9VISurface(void *, M2C_UNK);             /* extern */

s32 ReleaseDeferred__8VIRaster(void *arg0) {
    s32 temp_17;
    void **temp_18;
    void **temp_18_2;
    void **var_16;
    void **var_16_2;
    void *temp_17_2;
    void *temp_4;
    void *temp_4_2;

    temp_17 = arg0 + 0x4BCC;
    var_16 = Begin__Ct6VIList1ZP9VISurface(temp_17);
loop_6:
    if (var_16 == End__Ct6VIList1ZP9VISurface(temp_17)) {
        temp_17_2 = arg0 + 0x4B90;
        var_16_2 = Begin__Ct6VIList1ZP12VIPrimBuffer(temp_17_2, var_16);
loop_17:
        if (var_16_2 == End__Ct6VIList1ZP12VIPrimBuffer(temp_17_2)) {
            return 0;
        }
        temp_4 = *var_16_2;
        temp_18 = Next__Ct6VIList1ZP12VIPrimBufferi(temp_17_2, var_16_2);
        if (M2C_FIELD(arg0, s32 *, 0x45D8) < (M2C_FIELD(temp_4, s32 *, 0x10) + 3)) {
            var_16_2 = temp_18;
            goto loop_17;
        }
        if (temp_4 != NULL) {
            ___12VIPrimBuffer(temp_4, 3);
        }
        var_16_2 = temp_18;
        if (Erase__t6VIList1ZP12VIPrimBufferi(temp_17_2, var_16_2) < 0) {
            goto block_15;
        }
        goto loop_17;
    }
    temp_4_2 = *var_16;
    temp_18_2 = Next__Ct6VIList1ZP9VISurfacei(temp_17, var_16);
    if (M2C_FIELD(arg0, s32 *, 0x45D8) >= (M2C_FIELD(temp_4_2, s32 *, 0x24) + 3)) {
        if (temp_4_2 != NULL) {
            ___9VISurface(temp_4_2, 3);
        }
        if (Erase__t6VIList1ZP9VISurfacei(temp_17, var_16) >= 0) {
            goto block_5;
        }
block_15:
        return -1;
    }
block_5:
    var_16 = temp_18_2;
    goto loop_6;
}
