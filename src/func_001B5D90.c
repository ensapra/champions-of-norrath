u32 *func_001B5D90(u32 *p, u32 *end, u32 val) {
    while (*p != val && p < end)
        p++;
    return p < end ? p : NULL;
}

typedef struct { s32 unk0; u32 *p; } Ent17B;
typedef struct { s32 unk0; s32 unk4; s32 n; Ent17B *ents; } Sub17B;
typedef struct { s32 ver; Sub17B *sub; } Hdr17B;

s32 func_0017B638(Hdr17B *h) {
    Sub17B *s;
    s32 n;
    Ent17B *e;
    s32 i;

    if (h == NULL || h->ver < 2) return -1;
    s = h->sub;
    if (s == NULL) return -1;
    n = s->n;
    if (n == 0) return -1;
    e = s->ents;
    if (e == NULL) return -1;
    for (i = 0; i < n; i++) {
        if (e[i].p == NULL || *e[i].p < 8) return -1;
    }
    return 0;
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

s32 func_001799B0(s32, s32);
s32 func_00179948(s32);
s32 func_00179AB8(s32, s32);

s32 func_00179618(s32 a) {
    s32 z = 0;
    if (func_001799B0(a, z) >= 0) {
        return func_00179AB8(a, a);
    }
    return -func_00179AB8(func_00179948(z), a);
}
