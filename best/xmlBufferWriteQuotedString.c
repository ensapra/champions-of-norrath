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

M2C_UNK xmlBufferAdd(s32, s32, M2C_UNK);            /* extern */
M2C_UNK xmlBufferCCat(s32, M2C_UNK *);              /* extern */
s32 xmlStrchr(s32, M2C_UNK);                        /* extern */
extern M2C_UNK D_011C2CB0;
extern M2C_UNK D_011C2CB8;

void xmlBufferWriteQuotedString(s32 arg0, s32 arg1) {
    if (xmlStrchr(arg1, 0x22) != 0) {
        xmlStrchr(arg1, 0x27);
        xmlBufferCCat(arg0, &D_011C2CB0);
        if (arg1 != 0) {
            xmlBufferAdd(arg0, arg1, -1);
        }
        xmlBufferCCat(arg0, &D_011C2CB0);
        return;
    }
    xmlBufferCCat(arg0, &D_011C2CB8);
    if (arg1 != 0) {
        xmlBufferAdd(arg0, arg1, -1);
    }
    xmlBufferCCat(arg0, &D_011C2CB8);
}
