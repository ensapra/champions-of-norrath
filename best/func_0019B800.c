extern char D_00367474[];
s32 func_001A444C(char *s);
void func_001A24AC(char *dst, char *src, s32 n);

static inline s32 CopyStr(char *dst, char *src) {
    s32 n = func_001A444C(src);
    func_001A24AC(dst, src, n);
    dst[n] = 0;
    return n;
}

char *func_0019B800(char *src, char *a, char *b) {
    char *p = src;
    s32 total = func_001A444C(D_00367474);
    s32 len = CopyStr(a, p);
    s32 off;
    p += len;
    off = ((u8 *)p)[1];
    p = D_00367474 + off;
    if (off < total) {
        CopyStr(b, p);
    } else {
        b[0] = 0;
    }
    return src + len + 2;
}
