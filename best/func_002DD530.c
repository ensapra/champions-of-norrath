extern char D_0047B8F0[];
extern char D_0047B900[];
void func_002D70D0(char *, char *);
void func_002D7908(s32);
void func_002D7AA8(void);
s32 func_002DD360(char *, s32);
s32 func_002DD530(char *s) {
    char buf[0x50];
    char *q = s;
    char *pre = D_0047B8F0;
    char *d;
    char *lim;
    while (*q) q++;
    lim = s - 0xB;
    if ((u32)(q - lim) > 0x50) {
        func_002D70D0(D_0047B900, s);
        return 0;
    }
    func_002D7908(0);
    func_002D7AA8();
    d = buf;
    while (*pre) {
        *d++ = *pre++;
    }
    while (*s) {
        *d++ = *s++;
    }
    *d = 0;
    return func_002DD360(buf, 0);
}
