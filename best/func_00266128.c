extern char D_004349A8[], D_004349B8[], D_004756B8[], D_004756D0[], D_004756E8[], D_00485C20[];
void func_002D70D0(const char *, ...);
void func_00303EB8(void *, const char *, ...);
s32 func_00304CFC(void *);
void func_00266128(void) {
    char buf[0x70];
    s32 i = 0;
    func_002D70D0(D_004756B8);
    while (i < 0x80) {
        s32 off = i << 5;
        char *rec = D_004349A8 + off;
        i++;
        if (func_00304CFC(rec)) {
            func_00303EB8(buf, D_004756D0, rec, D_004349B8 + off,
                          *(s32 *)(D_004349B8 + off + 0xC),
                          *(s8 *)(D_004349A8 + off + 0x18));
            func_002D70D0(D_00485C20, buf);
        }
    }
    func_002D70D0(D_004756E8);
}
