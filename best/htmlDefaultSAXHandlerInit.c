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

extern M2C_UNK D_011B1D18;
extern M2C_UNK cdataBlock;
extern M2C_UNK characters;
extern M2C_UNK comment;
extern M2C_UNK endDocument;
extern M2C_UNK endElement;
extern M2C_UNK getEntity;
extern M2C_UNK ignorableWhitespace;
extern M2C_UNK internalSubset;
extern M2C_UNK setDocumentLocator;
extern M2C_UNK startDocument;
extern M2C_UNK startElement;
extern M2C_UNK xmlParserError;
extern M2C_UNK xmlParserWarning;

void htmlDefaultSAXHandlerInit(void) {
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x5C) = &xmlParserError;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0) = &internalSubset;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x14) = &getEntity;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x2C) = &setDocumentLocator;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x30) = &startDocument;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x34) = &endDocument;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x38) = &startElement;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x3C) = &endElement;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x44) = &characters;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x64) = &cdataBlock;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x48) = &ignorableWhitespace;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x50) = &comment;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x54) = &xmlParserWarning;
    M2C_FIELD(&D_011B1D18, s32 *, 0x68) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 4) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 8) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0xC) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x10) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x60) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x18) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x20) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x24) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x1C) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x28) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x40) = 0;
    M2C_FIELD(&D_011B1D18, s32 *, 0x4C) = 0;
    M2C_FIELD(&D_011B1D18, M2C_UNK **, 0x58) = &xmlParserError;
}
