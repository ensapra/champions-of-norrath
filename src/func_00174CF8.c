typedef struct { u64 flags; u64 mask; } Obj;
typedef struct { s16 x0; s16 x2; s16 x4; s16 x6; } B;
typedef struct { s16 x0; s16 x2; s16 x4; s16 x6; s16 x8; s16 xa; s16 xc; s16 xe; } A;
typedef struct {
    s32 x0; s32 x4; s32 x8;
    Obj *obj;
    A a;
    B b;
} Ent;
typedef struct {
    u8 pad[0xC];
    s32 x0c; s32 x10; s32 x14; s32 x18; s32 x1c;
} Dst;
extern Ent D_010EA1E0[];
extern u8 D_010E8970[];
extern u8 func_001CE218[];
void func_00174230(void *, s16, s16, s16, s16, void *);

void func_00174670(s32 arg0) {
    Ent *e = &D_010EA1E0[arg0];
    void *p = D_010E8970 + arg0 * 0x28;
    Dst *d;
    e->obj = p;
    func_00174230(p, e->a.x4, e->a.xc, e->b.x0, e->b.x2, p);
    d = (Dst *)(func_001CE218 + 0x2010);
    d->x1c = e->b.x2;
    d->x0c = e->a.xc;
    d->x10 = e->a.xe;
    d->x14 = e->b.x4;
    d->x18 = e->b.x0;
}

void func_00174AA8(s32 arg0, s32 arg1, s32 arg2) {
    Obj *o = D_010EA1E0[arg0].obj;
    o->mask = arg1 & 0xFFFFFF;
    o->flags = (o->flags & ~0x80) | ((arg2 & 1) << 7);
}

typedef struct { s16 a0, a2, a4, a6, a8, aA, aC, aE; } S10_174;
typedef struct { s16 w, h; s32 x; } S20_174;
typedef struct { s32 f0, f4, f8; Obj *ptr; S10_174 s; S20_174 r; } E174;
void func_00174718(s32, s32, s32, s32, s32, s32, s32, E174 *);

void func_00174B38(s32 i) {
    s32 off = i * 0x28;
    S20_174 *r = (S20_174 *)(D_010EA1E0 + (off + 0x20));
    S10_174 *s = (S10_174 *)(D_010EA1E0 + (off + 0x10));
    E174 *e = (E174 *)(D_010EA1E0 + off);
    u64 *pk = (u64 *)(D_010E8970 + off);
    s32 w = r->w;
    s32 h = r->h;
    s32 t;
    pk[2] = s->a4 | ((s64)((w < 0) ? (w + 0x3F) : w) >> 6) << 9 | ((s64)s->aC << 15);
    e->ptr = pk;
    pk[0] = 0xFF23;
    func_00174718(i, 0, 0, w, h, w, h, e);
}

typedef struct {
    s32 depth;
    s32 vals[0x23];
    void *ptrs[0x20];
} Stack175;

extern Stack175 D_010EAA60;
void func_00171AE0(void *);

s32 func_00174CF8(void) {
    Stack175 *s = &D_010EAA60;
    s32 n;
    void *p;
    if (s->depth == 0) {
        return -1;
    }
    n = --s->depth;
    p = s->ptrs[n];
    if (p != 0) {
        func_00171AE0(p);
        return s->vals[s->depth];
    }
    return 0xFFFF;
}
