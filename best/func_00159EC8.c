typedef struct { u64 x0:11, p0:5, x1:11, p1:5, y0:11, p2:5, y1:11, p3:5; } Sc;
typedef struct Vt { u8 pad[0x9c]; void (*get)(void *, s32 *, s32 *); } Vt;
typedef struct Obj {
    u8 pad0[0x4c]; Vt *vt; u8 pad1[4]; s32 f54;
    u8 pad2[0x4ec-0x58]; s32 idx;
    u8 pad3[0x5ac-0x4f0]; s32 f5ac, f5b0;
    u8 pad4[0x8d4-0x5b4]; s32 f8d4;
    u8 pad5[0xb20-0x8d8]; Sc sc[1][8];
    u8 pad6[0xc5c-0xb20-64]; s32 c5c, c60, c64, c68, c6c, c70, c74, c78;
    u8 pad7[0xcf0-0xc7c]; s32 cf0, cf4;
} Obj;
void func_0014D18C(s32,s32*);void func_0014BA50(s32,s32,s32,s32,s32*,s32*,s32*,s32*);
void func_00159EC8(Obj *p){
    s32 *a = &p->c6c;
    s32 *b = &p->c70;
    Sc *r = (Sc *)((u8 *)p + p->idx * 64 + 0xb20);
    s32 tmp;
    p->vt->get(p, a, b);
    if (p->f54) { tmp = 0; func_0014D18C(p->f54, &tmp); p->c6c += tmp; p->c70 += tmp; }
    p->c74 = p->c6c + p->f5ac;
    p->c78 = p->c70 + p->f5b0;
    p->c6c += p->f8d4 + p->cf0;
    p->c70 += p->f8d4 + p->cf4;
    p->c74 -= p->f8d4 + p->cf0;
    p->c78 -= p->f8d4 + p->cf4;
    func_0014BA50(p->c5c, p->c60, p->c64, p->c68, a, b, &p->c74, &p->c78);
    r->x0 = p->c6c >> 4;
    r->x1 = p->c74 >> 4;
    if (p->idx) { r->y0 = p->c70 >> 4; r->y1 = (p->c78 >> 4) - 1; }
    else { r->y0 = (p->c70 + 7) >> 4; r->y1 = ((p->c78 + 15) >> 4) - 1; }
}
