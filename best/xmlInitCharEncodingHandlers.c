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

s32 xmlNewCharEncodingHandler(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_0118ED70;
extern s32 D_0118ED74;
extern s32 D_0118ED84;
extern s32 D_0118ED88;
extern M2C_UNK (*D_0118EDD0)(M2C_UNK, M2C_UNK *, M2C_UNK *);
extern M2C_UNK (*D_0118EDD4)(M2C_UNK, M2C_UNK *, M2C_UNK *);
extern s32 (*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CB418;
extern M2C_UNK D_011CB478;
extern M2C_UNK D_011CB648;
extern M2C_UNK D_011CB670;
extern M2C_UNK D_011CB6A0;
extern M2C_UNK D_011CB6B0;
extern M2C_UNK D_011CB6C0;
extern M2C_UNK D_011CB6C8;
extern M2C_UNK UTF16BEToUTF8;
extern M2C_UNK UTF16LEToUTF8;
extern M2C_UNK UTF8ToHtml;
extern M2C_UNK UTF8ToUTF16BE;
extern M2C_UNK UTF8ToUTF16LE;
extern M2C_UNK UTF8Toascii;
extern M2C_UNK UTF8Toisolat1;
extern M2C_UNK asciiToUTF8;
extern M2C_UNK isolat1ToUTF8;

void xmlInitCharEncodingHandlers(void) {
    s16 sp0;

    sp0 = 0x1234;
    if (D_0118ED88 == 0) {
        D_0118ED88 = D_011B1E1C(0xC8);
        if ((u8) sp0 == 0x12) {
            D_0118ED84 = 0;
        } else if ((u8) sp0 == 0x34) {
            D_0118ED84 = 1;
        } else {
            D_0118EDD0(D_0118EDD4, &D_011CB648, &D_0118EDD0);
        }
        if (D_0118ED88 == 0) {
            D_0118EDD0(D_0118EDD4, &D_011CB670, &D_0118EDD4);
            return;
        }
        xmlNewCharEncodingHandler(&D_011CB418, NULL, NULL);
        D_0118ED70 = xmlNewCharEncodingHandler(&D_011CB6A0, &UTF16LEToUTF8, &UTF8ToUTF16LE);
        D_0118ED74 = xmlNewCharEncodingHandler(&D_011CB6B0, &UTF16BEToUTF8, &UTF8ToUTF16BE);
        xmlNewCharEncodingHandler(&D_011CB478, &isolat1ToUTF8, &UTF8Toisolat1);
        xmlNewCharEncodingHandler(&D_011CB6C0, &asciiToUTF8, &UTF8Toascii);
        xmlNewCharEncodingHandler(&D_011CB6C8, NULL, &UTF8ToHtml);
    }
}
