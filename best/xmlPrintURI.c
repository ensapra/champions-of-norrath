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

M2C_UNK fprintf(s32, M2C_UNK *, s32);               /* extern */
s32 xmlSaveUri(s32);                                /* extern */
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011CAA50;

void xmlPrintURI(s32 arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = xmlSaveUri(arg1);
    if (temp_2 != 0) {
        fprintf(arg0, &D_011CAA50, temp_2);
        D_011B1E18(temp_2);
    }
}
