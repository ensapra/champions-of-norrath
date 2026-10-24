typedef struct Req { s32 cmd, a, b, c, res; } Req;
typedef struct Blk { u8 pad[0x58]; s32 key; u8 pad2[0x24]; } Blk;
typedef struct Ent { Blk *w0; s32 w1, w2, w3, state, w5, w6; } Ent;
typedef struct Row { Ent e[4]; } Row;
extern Row D_010F4610[];
extern u8 D_010F45C0[];
extern Req D_010F4800;
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001AE018(void *, void *);

s32 func_00190328(s32 a, s32 b) {
    s32 *st = (s32 *)((u8 *)D_010F4610 + 0x10 + b * 0x1C + a * 0x70);
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

Blk *func_001903E0(s32 a, s32 b) {
    Blk *p = D_010F4610[a].e[b].w0;
    s32 i;
    func_001AE018(p, (u8 *)p + 0xFF);
    i = p[0].key < p[1].key;
    return p + i;
}
