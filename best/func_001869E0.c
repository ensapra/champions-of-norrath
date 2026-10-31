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

M2C_UNK func_001A2660(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_00468878;
extern M2C_UNK huffmanTemp;
extern M2C_UNK xmlParseTryOrFinish;

s32 func_001869E0(void *arg0) {
    s32 var_2;
    void *temp_17;

    var_2 = -1;
    if (arg0 != NULL) {
        temp_17 = &xmlParseTryOrFinish + 0x8D0;
        M2C_FIELD(&huffmanTemp, void **, 0xCFC8) = arg0;
        func_001A2660(temp_17, 0, 0x88);
        var_2 = M2C_FIELD(M2C_FIELD(&huffmanTemp, void **, 0xCFC8), s32 (**)(void *, void *), 0x110)(temp_17 + 0x40, &D_00468878 + 8) != 0;
    }
    return var_2;
}
