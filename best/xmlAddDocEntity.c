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

M2C_UNK D_0118EDD4(s32, M2C_UNK *, M2C_UNK *);      /* extern */
void *xmlAddEntity(void *);                         /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern M2C_UNK D_011CD290;
extern M2C_UNK D_011CD2B8;

void *xmlAddDocEntity(void *arg0) {
    void *temp_16;
    void *temp_2;
    void *temp_4;

    if (arg0 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011CD290, D_0118EDD0);
        return NULL;
    }
    temp_16 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_16 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011CD2B8, D_0118EDD4);
        return NULL;
    }
    temp_2 = xmlAddEntity(temp_16);
    if (temp_2 != NULL) {
        temp_4 = M2C_FIELD(temp_16, void **, 0x10);
        M2C_FIELD(temp_2, void **, 0x14) = temp_16;
        M2C_FIELD(temp_2, s32 *, 0x20) = (s32) M2C_FIELD(temp_16, s32 *, 0x20);
        if (temp_4 == NULL) {
            M2C_FIELD(temp_16, void **, 0xC) = temp_2;
        } else {
            M2C_FIELD(temp_4, void **, 0x18) = temp_2;
            M2C_FIELD(temp_2, void **, 0x1C) = (void *) M2C_FIELD(temp_16, void **, 0x10);
        }
        M2C_FIELD(temp_16, void **, 0x10) = temp_2;
    }
    return temp_2;
}
