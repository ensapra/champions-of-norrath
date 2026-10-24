typedef struct { u64 flags; u8 pad[0x18]; u64 mask; } Obj;
typedef struct {
    s32 x0; s32 x4; s32 x8;
    Obj *obj;
    s16 x10; s16 x12; s16 x14; s16 x16;
    s16 x18; s16 x1a; s16 x1c; s16 x1e;
    s16 x20; s16 x22; s16 x24; s16 x26;
} Ent;
typedef struct {
    u8 pad[0xC];
    s32 x0c; s32 x10; s32 x14; s32 x18; s32 x1c;
} Dst;
extern Ent D_010EA1E0[];
extern u8 D_010E8970[];
extern u8 func_001CE218[];
void func_00174230(void *, s16, s16, s16, s16, void *);

void func_00174AA8(s32 arg0, s32 arg1, s32 arg2) {
    Obj *o = D_010EA1E0[arg0].obj;
    o->mask = arg1 & 0xFFFFFF;
    o->flags = (o->flags & ~0x80) | ((arg2 & 1) << 7);
}

void func_00174670(s32 arg0) {
    Ent *e = &D_010EA1E0[arg0];
    void *p = D_010E8970 + arg0 * 0x28;
    Dst *d;
    e->obj = p;
    func_00174230(p, e->x14, e->x1c, e->x20, e->x22, p);
    d = (Dst *)(func_001CE218 + 0x2010);
    d->x1c = e->x22;
    d->x0c = e->x1c;
    d->x10 = e->x1e;
    d->x14 = e->x24;
    d->x18 = e->x20;
}
