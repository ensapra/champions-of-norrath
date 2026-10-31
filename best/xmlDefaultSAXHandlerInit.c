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

extern s32 D_011AFFC0;
extern M2C_UNK D_011B1CA8;
extern M2C_UNK attributeDecl;
extern M2C_UNK cdataBlock;
extern M2C_UNK characters;
extern M2C_UNK comment;
extern M2C_UNK elementDecl;
extern M2C_UNK endDocument;
extern M2C_UNK endElement;
extern M2C_UNK entityDecl;
extern M2C_UNK externalSubset;
extern M2C_UNK getEntity;
extern M2C_UNK getParameterEntity;
extern M2C_UNK hasExternalSubset;
extern M2C_UNK hasInternalSubset;
extern M2C_UNK ignorableWhitespace;
extern M2C_UNK internalSubset;
extern M2C_UNK isStandalone;
extern M2C_UNK notationDecl;
extern M2C_UNK processingInstruction;
extern M2C_UNK reference;
extern M2C_UNK resolveEntity;
extern M2C_UNK setDocumentLocator;
extern M2C_UNK startDocument;
extern M2C_UNK startElement;
extern M2C_UNK unparsedEntityDecl;
extern M2C_UNK xmlParserError;
extern M2C_UNK xmlParserWarning;

void xmlDefaultSAXHandlerInit(void) {
    s32 sp0;

    sp0 = D_011AFFC0;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x68) = &externalSubset;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0) = &internalSubset;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 4) = &isStandalone;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 8) = &hasInternalSubset;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0xC) = &hasExternalSubset;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x10) = &resolveEntity;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x14) = &getEntity;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x60) = &getParameterEntity;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x18) = &entityDecl;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x20) = &attributeDecl;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x24) = &elementDecl;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x1C) = &notationDecl;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x28) = &unparsedEntityDecl;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x2C) = &setDocumentLocator;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x30) = &startDocument;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x34) = &endDocument;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x38) = &startElement;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x3C) = &endElement;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x40) = &reference;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x44) = &characters;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x64) = &cdataBlock;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x48) = &ignorableWhitespace;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x4C) = &processingInstruction;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x50) = &comment;
    if (D_011AFFC0 == 0) {
        M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x54) = NULL;
    } else {
        M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x54) = &xmlParserWarning;
    }
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x5C) = &xmlParserError;
    M2C_FIELD(&D_011B1CA8, M2C_UNK **, 0x58) = &xmlParserError;
}
