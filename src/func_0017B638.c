typedef struct { s32 unk0; u32 *p; } Ent17B;
typedef struct { s32 unk0; s32 unk4; s32 n; Ent17B *ents; } Sub17B;
typedef struct { s32 ver; Sub17B *sub; } Hdr17B;

s32 func_0017B638(Hdr17B *h) {
    Sub17B *s;
    s32 n;
    Ent17B *e;
    s32 i;
    u32 *p;
    u32 **pp;

    if (h != NULL) {
        s = h->sub;
        if (h->ver >= 2 && s != NULL) {
            n = s->n;
            e = s->ents;
            if (n != 0 && e != NULL) {
                i = 0;
                if (n > 0) {
                    pp = &e->p;
                    do {
                        p = *pp;
                        if (p == NULL) return -1;
                        i++;
                        if (*p < 8) return -1;
                        pp += 2;
                    } while (i < n);
                }
                return 0;
            }
        }
    }
    return -1;
}

extern s32 PollSema(s32);
extern s32 SignalSema(s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_0017A088(void);
extern s32 D_001D0480[];
extern s32 D_001D0484[];
extern s32 D_010EB640[];
extern s32 D_010EB6C0[];
extern s32 D_010ECC00[];

s32 func_0017B068(s32 arg0) {
    s32 *p = D_010EB640;
    s32 r;

    if (p[9] == 0) {
        return -100;
    }
    if (PollSema(D_001D0484[0]) < 0) {
        return -200;
    }
    D_010EB6C0[0] = arg0;
    r = func_001B08B0(p, 10, 1, D_010EB6C0, 0x30, D_010ECC00, 4, func_0017A088, 0);
    if (r == 0) {
        D_001D0480[0] = 10;
    } else {
        SignalSema(D_001D0484[0]);
    }
    return r;
}

s32 func_001799B0(f64, f64);
f64 func_00179948(f64, f64);
s64 func_00179AB8(f64);

s64 func_00179618(f64 a) {
    f64 z = 0;
    if (func_001799B0(a, z) < 0)
        return -func_00179AB8(func_00179948(z, a));
    return func_00179AB8(a);
}
