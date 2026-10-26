typedef struct R24 { char b[0x18]; } R24;
extern char D_0081E240[];
extern char D_00839AD8[];
s32 D_00484F50;
s16 func_0025A7F8(void);
s32 func_0026FC90(s32);
s32 func_002847A0(void);
void func_00301FFC(void *, void *, s32);
#define B D_0081E240

s32 func_0025A280(void) {
    char *p, *s, *q, *rec, *r;
    s32 i, k, n, total;
    p = B;
    *(s16 *)(p + 0x6E) = func_0025A7F8();
    p += 0x70;
    p += func_0026FC90(D_00484F50);
    p += func_002847A0();
    p += 0x6DC6;
    i = 2;
    do { i--; } while (i >= 0);
    s = p + 0x1193A;
    while ((s - B) & 3) s++;
    while ((p - B) & 3) p++;
    for (;;) {
        for (k = 0; k < 0x24; k++) p[k] = s[k];
        p += 0x24;
        if (*s == 0) break;
        s += 0x24;
    }
    while ((p - B) & 3) p++;
    rec = B + 0x1B610;
    n = 0;
    total = 0;
    if (*rec) {
        q = rec;
        for (n = 1; n < 0x1A; n++) {
            q += 0x18;
            if (*q == 0) break;
        }
    }
    *(s32 *)p = n;
    p += 4;
    if (*rec) {
        q = rec;
        r = rec + 0x14;
        do {
            *(R24 *)p = *(R24 *)q;
            p += 0x18;
            q += 0x18;
            total += *(s32 *)r;
            r += 0x18;
        } while (*q);
    }
    while ((p - B) & 3) p++;
    func_00301FFC(p, D_00839AD8, total);
    p += total;
    return p - B;
}
