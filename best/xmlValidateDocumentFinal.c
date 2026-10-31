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

M2C_UNK xmlHashScan(s32, M2C_UNK *, void *);        /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011CD0E0;
extern M2C_UNK xmlValidateCheckRefCallback;

s32 xmlValidateDocumentFinal(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011CD0E0, D_0118EDD0);
        return 0;
    }
    M2C_FIELD(arg0, void **, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    xmlHashScan(M2C_FIELD(arg1, s32 *, 0x44), &xmlValidateCheckRefCallback, arg0);
    return M2C_FIELD(arg0, s32 *, 0x24);
}
