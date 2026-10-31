void xmlDocDumpFormatMemory(void *a, void *b, void *c, void *d, int e) {
    xmlDocDumpFormatMemoryEnc(a,b,c,d,0);
}
void xmlDocDumpMemory(void *a, void *b, void *c) {
    xmlDocDumpFormatMemoryEnc(a,b,c,0,0);
}
void xmlDocDumpMemoryEnc(void *a) {
    xmlDocDumpFormatMemoryEnc(a,1);
}
void xmlNodeSetSpacePreserve(void *a, int b) {
}
