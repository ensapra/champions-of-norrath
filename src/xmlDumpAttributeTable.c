/* identical to xmlDumpNotationTable (matched), with its names changed by decompdecomp */
void xmlHashScan(s32, void *, s32);
extern void xmlDumpAttributeDecl;
void xmlDumpAttributeTable(s32 arg0, s32 arg1) {
    xmlHashScan(arg1, (void *)&xmlDumpAttributeDecl, arg0);
}
