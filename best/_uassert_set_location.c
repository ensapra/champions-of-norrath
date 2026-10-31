/* identical to func_001176C0 (matched), with its names changed by decompdecomp */
extern s32 D_001BD960[];
extern s32 D_001BD964[];

void _uassert_set_location(s32 a, s32 b) {
    D_001BD960[0] = a;
    D_001BD964[0] = b;
}

void func_001176D8(s32 *a, s32 *b) {
    *a = D_001BD960[0];
    *b = D_001BD964[0];
}

extern s32 func_0011B940(s32, s32);
extern s32 func_0011B8D0(void);

void ovl_ntgui2_func_00117778(s32 *p) {
    s32 v = p[1] + p[4];
    p[1] = v;
    if (p[0] != 0)
        p[0] = func_0011B940(p[0], v << 5);
    else
        p[0] = func_0011B8D0();
}

typedef struct __attribute__((packed)) { u64 d0, d1, d2, d3; } Blk32;

void func_00117848(s32 *p, void *src) {
    if (p[3] >= p[1])
        ovl_ntgui2_func_00117778(p);
    *(Blk32 *)(p[0] + (p[3] << 5)) = *(Blk32 *)src;
    p[3]++;
}
