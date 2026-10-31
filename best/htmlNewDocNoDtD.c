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

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK xmlCreateIntSubset(void *, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D1E00;
extern M2C_UNK D_011D1E20;

void *htmlNewDocNoDtD(s32 arg0, s32 arg1) {
    void *temp_2;

    temp_2 = D_011B1E1C(0x50);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011D1E00, D_0118EDD0);
        return NULL;
    }
    memset(temp_2, 0, 0x50);
    M2C_FIELD(temp_2, s32 *, 0x38) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0xD;
    M2C_FIELD(temp_2, s32 *, 0x2C) = 0;
    if ((arg1 != 0) || (arg0 != 0)) {
        xmlCreateIntSubset(temp_2, &D_011D1E20, arg1, arg0);
    }
    M2C_FIELD(temp_2, void **, 0x20) = temp_2;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 0x30) = 0;
    M2C_FIELD(temp_2, s32 *, 0x34) = 0;
    M2C_FIELD(temp_2, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_2, s32 *, 0x24) = 0;
    M2C_FIELD(temp_2, s32 *, 0x40) = 0;
    M2C_FIELD(temp_2, s32 *, 0x44) = 0;
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2, s32 *, 0x28) = 1;
    return temp_2;
}
