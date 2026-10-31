s32 xmlHashFree(s32, void *);
void xmlFreeNotation(void);
void xmlFreeNotationTable(s32 arg0) {
    xmlHashFree(arg0, (void *)xmlFreeNotation);
}
