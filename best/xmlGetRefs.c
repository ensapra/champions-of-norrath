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

s32 xmlHashLookup(s32);                             /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011CC610;
extern M2C_UNK D_011CC628;

s32 xmlGetRefs(void *arg0, s32 arg1) {
    M2C_UNK *var_5;
    s32 temp_3;

    if (arg0 == NULL) {
        var_5 = &D_011CC610;
        goto block_7;
    }
    if (arg1 != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_3 != 0) {
            return xmlHashLookup(temp_3);
        }
        return 0;
    }
    var_5 = &D_011CC628;
block_7:
    ((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) D_0118EDD0)(D_0118EDD4, var_5, (M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) D_0118EDD0);
    return 0;
}
