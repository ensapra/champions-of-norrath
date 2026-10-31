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

M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK perror(M2C_UNK *);                          /* extern */
M2C_UNK xmlInitParserCtxt(s32);                     /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern s32 (*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D6970;
extern M2C_UNK D_011D69A0;

s32 xmlNewParserCtxt(void) {
    s32 temp_2;

    temp_2 = D_011B1E1C(0x118);
    if (temp_2 == 0) {
        D_0118EDD0(D_0118EDD4, &D_011D6970, 0x118);
        perror(&D_011D69A0);
        return 0;
    }
    memset(temp_2, 0, 0x118);
    xmlInitParserCtxt(temp_2);
    return temp_2;
}
