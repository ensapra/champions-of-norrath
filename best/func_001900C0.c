/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_001B08B0(void *, M2C_UNK, M2C_UNK, void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK huffmanTemp;
extern M2C_UNK xmlParseTryOrFinish;

s32 func_001900C0(void) {
    s32 temp_7;
    void *temp_2;

    temp_2 = &xmlParseTryOrFinish + 0xC28;
    M2C_FIELD(&xmlParseTryOrFinish, s32 *, 0xC28) = 0xF;
    if (func_001B08B0(&xmlParseTryOrFinish + 0x9E8, 1, 0, temp_2, 0x80, temp_2, 0x80, 0, 0) >= 0) {
        temp_7 = M2C_FIELD(temp_2, s32 *, 0xC);
        if (temp_7 == 1) {
            M2C_FIELD(&huffmanTemp, s32 *, 0xD0B8) = 0;
        }
        return temp_7;
    }
    return 0;
}
