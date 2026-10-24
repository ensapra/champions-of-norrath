/* identical to func_0018FCE0 (matched), with its names changed by decompdecomp */
typedef struct Req { s32 cmd, a, b, c, res; } Req;
typedef struct Ent { void *w0; s32 w1, w2, w3, state, w5, w6; } Ent;
typedef struct Row { Ent e[4]; } Row;
extern Row D_010F4610[];
extern u8 D_010F45C0[];
extern Req D_010F4800;
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001AE018(void *, void *);
void func_002D2BC0(void *, u32, s32);
typedef struct Chan { u32 p[4]; u32 madr; } Chan;

s32 func_002D32B0(Chan *d, u32 addr, s32 mode, s32 a3) {
    if (mode == 1) return d->madr < addr;
    func_002D2BC0(d, addr, a3);
    return 0;
}

s32 func_00190328(s32 a, s32 b) {
    s32 *st = &D_010F4610[a].e[b].state;
    Req *r;
    if (*st == 0) return 0;
    r = &D_010F4800;
    r->cmd = 14;
    r->a = a;
    r->b = b;
    r->res = 1;
    if (func_001B08B0(D_010F45C0, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) return 0;
    *st = 0;
    return r->c;
}

void *func_001903E0(s32 a, s32 b) {
    u8 *p = D_010F4610[a].e[b].w0;
    func_001AE018(p, p + 0xFF);
    return p + ((*(s32 *)(p + 0x58) < *(s32 *)(p + 0xD8)) << 7);
}

s32 func_00190440(s32 a, s32 b) {
    if (D_010F4610[a].e[b].state == 0) return 0;
    return *(s32 *)((u8 *)func_001903E0(a, b) + 0x58);
}
