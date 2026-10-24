typedef struct {
    u8 pad0[0x980];
    s32 *list;
    u8 pad984[0x8];
    u8 sub98C[0x38];
    s32 count;
} Obj16D;

void func_00151788(void *, s32);
void func_0014B7F0(s32, s32);

void func_0016D728(Obj16D *o, s32 arg)
{
    s32 i;
    func_00151788(o->sub98C, 1);
    for (i = 0; i < o->count; i++) {
        func_0014B7F0(o->list[i], arg);
    }
}

typedef union {
    u64 d;
    struct {
        s16 x;
        s16 y;
    } s;
} Pos16B;

typedef struct {
    u8 pad[0x10];
    Pos16B p;
    u64 pad18;
} Vtx16B;

typedef struct {
    u8 pad[0x4DC];
    u16 x;
    u16 pad4DE;
    u16 y;
} Obj16B;

void func_0016B020(Obj16B *o, s32 dir, s32 x, s32 y, s32 w, s32 h, Vtx16B *v)
{
    s32 sx, sy;
    s32 i;
    u16 oy, ox;

    switch (dir) {
    case 1:
        sx = 1;
        sy = -1;
        break;
    case 2:
        sx = -1;
        sy = 1;
        break;
    case 3:
        sx = 1;
        sy = 1;
        break;
    case 0:
    default:
        sx = -1;
        sy = -1;
        break;
    }
    oy = o->y;
    ox = o->x;
    v->p.s.x = ox + x;
    v->p.s.y = oy + y;
    v++;
    for (i = 7; i >= 0; i--) {
        v->p.d = v[-1].p.d;
        v++;
    }
    v->p.s.x = ox + x;
    v->p.s.y = oy + (sy * h + y);
    v++;
    v->p.s.x = ox + (sx * w + x);
    v->p.s.y = oy + (sy * h + y);
    v++;
    v->p.s.x = ox + (sx * w + x);
    v->p.s.y = oy + y;
}

typedef struct {
    u64 lo : 6;
    u64 bit : 1;
    u64 rest : 57;
} BF160;

typedef struct {
    u8 pad[0x4B0];
    BF160 a;
    u8 pad4B8[0x118];
    BF160 b;
    u8 pad5D8[0x19C0 - 0x5D8];
} Sub160;

typedef struct {
    u8 hdr[0x10];
    Sub160 subs[2];
    u8 pad[0x30];
    s32 flag;
} Inner160;

typedef struct {
    u8 pad[0x4EC];
    s32 idx;
    u8 pad4F0[0x910 - 0x4F0];
    Inner160 in;
} Obj160;

void func_001606A0(Obj160 *o)
{
    Inner160 *in = &o->in;
    Sub160 *s = &in->subs[o->idx];
    s->a.bit = s->b.bit = in->flag;
}
