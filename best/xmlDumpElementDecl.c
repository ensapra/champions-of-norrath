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

M2C_UNK xmlBufferWriteCHAR(M2C_UNK *, s32);         /* extern */
M2C_UNK xmlBufferWriteChar(M2C_UNK *, u32);         /* extern */
M2C_UNK xmlDumpElementContent(M2C_UNK *, s32, M2C_UNK); /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, u32, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011CBEC0;
extern M2C_UNK D_011CBED0;
extern M2C_UNK D_011CBEE0;
extern M2C_UNK D_011CBEE8;
extern M2C_UNK D_011CBEF0;
extern M2C_UNK D_011CBEF8;

void xmlDumpElementDecl(M2C_UNK *arg0, void *arg1) {
    u32 temp_6;

    temp_6 = M2C_FIELD(arg1, u32 *, 0x24);
    switch (temp_6) {                               /* irregular */
    case 1:
        xmlBufferWriteChar(&D_011CBEC0, temp_6);
        xmlBufferWriteCHAR(arg0, M2C_FIELD(arg1, s32 *, 8));
        xmlBufferWriteChar(arg0, (u32) &D_011CBED0);
        return;
    case 2:
        xmlBufferWriteChar(&D_011CBEC0, temp_6);
        xmlBufferWriteCHAR(arg0, M2C_FIELD(arg1, s32 *, 8));
        xmlBufferWriteChar(arg0, (u32) &D_011CBEE0);
        return;
    case 3:
        xmlBufferWriteChar(&D_011CBEC0, temp_6);
        xmlBufferWriteCHAR(arg0, M2C_FIELD(arg1, s32 *, 8));
        xmlBufferWriteChar(arg0, (u32) &D_011CBEE8);
        xmlDumpElementContent(arg0, M2C_FIELD(arg1, s32 *, 0x28), 1);
        xmlBufferWriteChar(arg0, (u32) &D_011CBEF0);
        return;
    case 4:
        xmlBufferWriteChar(&D_011CBEC0, temp_6);
        xmlBufferWriteCHAR(arg0, M2C_FIELD(arg1, s32 *, 8));
        xmlBufferWriteChar(arg0, (u32) &D_011CBEE8);
        xmlDumpElementContent(arg0, M2C_FIELD(arg1, s32 *, 0x28), 1);
        xmlBufferWriteChar(arg0, (u32) &D_011CBEF0);
        return;
    default:
        D_0118EDD0(D_0118EDD4, &D_011CBEF8, temp_6, D_0118EDD0);
        return;
    }
}
