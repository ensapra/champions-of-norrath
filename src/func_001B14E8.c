extern u8 jtbl_004C006C[];
s32 CreateSema(void *);

void func_001B14E8(void) {
    s32 a[8];
    if (*(s32 *)(jtbl_004C006C + 0x3F38) == -1) {
        a[5] = 0;
        a[2] = 1;
        a[1] = 1;
        *(s32 *)(jtbl_004C006C + 0x3F38) = CreateSema(a);
    }
}

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

typedef struct {
    s16 x;
    s16 y;
    s16 z;
    s16 w;
} Pos16B;

typedef struct {
    u8 pad[0x10];
    Pos16B p;
    u8 pad18[0x8];
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
    default:
        sx = -1;
        sy = -1;
        break;
    }
    oy = o->y;
    ox = o->x;
    v[0].p.y = oy + y;
    v[0].p.x = ox + x;
    for (i = 0; i < 8; i++) {
        v[i + 1].p = v[i].p;
    }
    v[9].p.y = oy + (sy * h + y);
    v[9].p.x = ox + x;
    v[10].p.y = oy + (sy * h + y);
    v[10].p.x = ox + (sx * w + x);
    v[11].p.y = oy + y;
    v[11].p.x = ox + (sx * w + x);
}

typedef struct {
    u8 pad[0x4B0];
    u64 a;
    u8 pad4B8[0x118];
    u64 b;
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
    u64 bit = (in->flag & 1) << 6;
    Sub160 *s = &in->subs[o->idx];
    s->b = (s->b & ~0x40) | bit;
    s->a = (s->a & ~0x40) | bit;
}
