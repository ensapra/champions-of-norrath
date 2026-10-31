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

s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CC3A8;

void *xmlCopyNotation(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    void *temp_2;

    temp_2 = D_011B1E1C(0xC);
    if (temp_2 != NULL) {
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_4 == 0) {
            M2C_FIELD(temp_2, s32 *, 0) = 0;
        } else {
            M2C_FIELD(temp_2, s32 *, 0) = xmlStrdup(temp_4);
        }
        temp_4_2 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_4_2 == 0) {
            M2C_FIELD(temp_2, s32 *, 4) = 0;
        } else {
            M2C_FIELD(temp_2, s32 *, 4) = xmlStrdup(temp_4_2);
        }
        temp_4_3 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_4_3 == 0) {
            M2C_FIELD(temp_2, s32 *, 8) = 0;
        } else {
            M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(temp_4_3);
        }
        return temp_2;
    }
    D_0118EDD0(D_0118EDD4, &D_011CC3A8, D_0118EDD0);
    return NULL;
}
