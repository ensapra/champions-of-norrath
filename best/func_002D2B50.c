extern char D_0047B370[];
void func_002D70D0(char*);
void func_002D32E8(volatile s32*);
void func_002D2B50(volatile s32 *p) {
    s32 i = 0x1000000;
    while (*p & 0x100) {
        if (--i < 0) {
            func_002D70D0(D_0047B370);
            func_002D32E8(p);
        }
    }
}
