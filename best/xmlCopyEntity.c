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
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CD3F8;

void *xmlCopyEntity(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    void *temp_2;

    temp_2 = D_011B1E1C(0x44);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011CD3F8, D_0118EDD0);
        return NULL;
    }
    memset(temp_2, 0, 0x44);
    temp_4 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_2, s32 *, 4) = 0xF;
    M2C_FIELD(temp_2, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_4 != 0) {
        M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_4_2 != 0) {
        M2C_FIELD(temp_2, s32 *, 0x34) = xmlStrdup(temp_4_2);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_4_3 != 0) {
        M2C_FIELD(temp_2, s32 *, 0x38) = xmlStrdup(temp_4_3);
    }
    temp_4_4 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_4_4 != 0) {
        M2C_FIELD(temp_2, s32 *, 0x28) = xmlStrdup(temp_4_4);
    }
    temp_4_5 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_4_5 != 0) {
        M2C_FIELD(temp_2, s32 *, 0x24) = xmlStrdup(temp_4_5);
    }
    return temp_2;
}
