typedef struct { char p[0x918]; s64 buf[2][8]; s64 flag; } Ctx;
extern void func_002EF5C8(s32, s64 *);
extern void func_002EF8E0(Ctx *, s64 *, s32, char *);

static inline void Comp(s64 *t) {
    s64 *p = t;
    s32 n = 7;
    do {
        s64 x = *p, r;
        if (x < 0) {
            if (x < 0) x = -x;
            if (x < 0x2B33) r = x * 2;
            else if (x < 0x4E66) r = x + 0x2B33;
            else r = (x >> 2) + 0x6600;
            *p = -r;
        } else {
            r = x * 2;
            if (x >= 0x2B33) { r = x + 0x2B33; if (x >= 0x4E66) r = (x >> 2) + 0x6600; }
            *p = r;
        }
        n--;
        p++;
    } while (n >= 0);
}

void func_002F00C0(Ctx *o, s32 a1, char *a2) {
    s64 t[8];
    s64 *A, *B, *pa, *pb, *pt;
    s64 f;
    s32 n, i;
    i = *(s32 *)&o->flag;
    f = o->flag ^ 1;
    A = o->buf[i];
    o->flag = f;
    B = o->buf[(s32)f];
    func_002EF5C8(a1, A);
    pt = t; pb = B; pa = A; n = 7;
    do { s64 b = *pb++; s64 a = *pa++; n--; *pt++ = (b >> 2) + (a >> 2) + (b >> 1); } while (n >= 0);
    Comp(t);
    func_002EF8E0(o, t, 0xD, a2);
    pt = t; pb = B; pa = A; n = 7;
    do { s64 b = *pb++; s64 a = *pa++; n--; *pt++ = (b >> 1) + (a >> 1); } while (n >= 0);
    Comp(t);
    func_002EF8E0(o, t, 0xE, a2 + 0x68);
    pt = t; pb = B; pa = A; n = 7;
    do { s64 a = *pa++; s64 b = *pb++; n--; *pt++ = (b >> 2) + (a >> 2) + (a >> 1); } while (n >= 0);
    Comp(t);
    func_002EF8E0(o, t, 0xD, a2 + 0xD8);
    pt = t; pa = A; n = 7;
    do { s64 a = *pa++; n--; *pt++ = a; } while (n >= 0);
    Comp(t);
    func_002EF8E0(o, t, 0x78, a2 + 0x140);
}
