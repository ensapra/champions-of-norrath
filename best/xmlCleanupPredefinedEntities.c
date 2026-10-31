/* identical to func_0013EE80 (matched), with its names changed by decompdecomp */
extern s32 D_010D1220[];
extern s32 D_010D1224[];
extern s32 D_010D1228[];
extern s32 D_010D122C[];
extern u8 func_001C6788[];
extern void xmlFreeEntitiesTable(s32);

void func_0013EEC0(s32 a) {
    D_010D122C[0] = a;
}

void xmlCleanupPredefinedEntities(void) {
    s32 *p = (s32 *)(func_001C6788 + 0x98);
    if (*p != 0) {
        xmlFreeEntitiesTable(*p);
        *p = 0;
    }
}

void func_0013EE48(void) {
    D_010D1220[0] = 0;
    D_010D1224[0] = 0;
    D_010D1228[0] = 0;
    D_010D122C[0] = 0;
    *(s32 *)(func_001C6788 + 0x9C) = 0;
    *(s32 *)(func_001C6788 + 0x98) = 0;
}
