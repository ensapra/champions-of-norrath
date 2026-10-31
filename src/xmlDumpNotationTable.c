void xmlHashScan(s32, void *, s32);
extern void xmlDumpNotationDecl;
void xmlDumpNotationTable(s32 arg0, s32 arg1) {
    xmlHashScan(arg1, (void *)&xmlDumpNotationDecl, arg0);
}
