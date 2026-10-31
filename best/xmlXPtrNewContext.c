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

void *xmlXPathNewContext();                         /* extern */
M2C_UNK xmlXPathRegisterFunc(void *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_011DD9C0;
extern M2C_UNK D_011DD9D0;
extern M2C_UNK D_011DD9D8;
extern M2C_UNK D_011DD9E8;
extern M2C_UNK D_011DD9F8;
extern M2C_UNK D_011DDA08;
extern M2C_UNK D_011DDA18;
extern M2C_UNK D_011DDA20;
extern M2C_UNK xmlXPtrEndPointFunction;
extern M2C_UNK xmlXPtrHereFunction;
extern M2C_UNK xmlXPtrOriginFunction;
extern M2C_UNK xmlXPtrRangeFunction;
extern M2C_UNK xmlXPtrRangeInsideFunction;
extern M2C_UNK xmlXPtrRangeToFunction;
extern M2C_UNK xmlXPtrStartPointFunction;
extern M2C_UNK xmlXPtrStringRangeFunction;

void *xmlXPtrNewContext(s32 arg1, s32 arg2) {
    void *temp_2;

    temp_2 = xmlXPathNewContext();
    if (temp_2 != NULL) {
        M2C_FIELD(temp_2, s32 *, 0x50) = arg1;
        M2C_FIELD(temp_2, s32 *, 0x4C) = 1;
        M2C_FIELD(temp_2, s32 *, 0x54) = arg2;
        xmlXPathRegisterFunc(temp_2, &D_011DD9C0, &xmlXPtrRangeToFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DD9D0, &xmlXPtrRangeFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DD9D8, &xmlXPtrRangeInsideFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DD9E8, &xmlXPtrStringRangeFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DD9F8, &xmlXPtrStartPointFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DDA08, &xmlXPtrEndPointFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DDA18, &xmlXPtrHereFunction);
        xmlXPathRegisterFunc(temp_2, &D_011DDA20, &xmlXPtrOriginFunction);
    }
    return temp_2;
}
