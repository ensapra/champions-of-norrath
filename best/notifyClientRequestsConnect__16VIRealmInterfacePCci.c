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

s64 GetTime__7VITimer(void *);                      /* extern */
M2C_UNK UpdateNumPlayers__16VIRealmInterfacei(void *, s32); /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK printf(M2C_UNK *);                          /* extern */
M2C_UNK snprintf(void *, M2C_UNK, s32);             /* extern */
M2C_UNK strcmp(s32, void *);                        /* extern */
extern M2C_UNK D_011D9530;

void notifyClientRequestsConnect__16VIRealmInterfacePCci(void *arg0, s32 arg1, s32 arg2) {
    s32 var_17;
    void *temp_17;
    void *temp_18;
    void *var_16;
    void *var_5;

    var_17 = 0;
    printf(&D_011D9530);
    if ((M2C_FIELD(arg0, s32 *, 0xD94) - 1) > 0) {
        var_16 = arg0 + 0x13E0;
        var_5 = var_16;
        do {
            var_16 += 0x478;
            var_17 += 1;
            strcmp(arg1, var_5);
            var_5 = var_16;
        } while (var_17 < (M2C_FIELD(arg0, s32 *, 0xD94) - 1));
    }
    if (M2C_FIELD(arg0, s32 *, 0xD94) < M2C_FIELD(arg0, s32 *, 0xD90)) {
        temp_18 = ((M2C_FIELD(arg0, s32 *, 0xD94) - 1) * 0x478) + arg0;
        temp_17 = temp_18 + 0x13E0;
        memset(temp_17, 0, 0x478);
        snprintf(temp_17, 0x3FF, arg1);
        M2C_FIELD(temp_18, s32 *, 0x17E0) = arg2;
        M2C_FIELD(temp_18, s32 *, 0x17F8) = 7;
        M2C_FIELD(temp_18, s64 *, 0x1800) = GetTime__7VITimer(temp_18);
        memset(temp_18 + 0x1824, 0, 0x34);
        UpdateNumPlayers__16VIRealmInterfacei(arg0, M2C_FIELD(arg0, s32 *, 0xD94) + 1);
    }
}
