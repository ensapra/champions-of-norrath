typedef struct { u64 flags; u8 pad[0x18]; u64 mask; } Obj;
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
    Ent *e = D_010EA1E0 + arg0;
    A *a = &D_010EA1E0[arg0].a;
    B *b = &D_010EA1E0[arg0].b;
    void *p = D_010E8970 + arg0 * 0x28;
    Dst *d;
    s32 t10, t1c, t0c, t14, t18;
    e->obj = p;
    func_00174230(p, a->x4, a->xc, b->x0, b->x2, p);
    d = (Dst *)(func_001CE218 + 0x2010);
    t10 = a->xe;
    t1c = b->x2;
    t0c = a->xc;
    t14 = b->x4;
    t18 = b->x0;
    d->x1c = t1c;
    d->x0c = t0c;
    d->x10 = t10;
    d->x14 = t14;
    d->x18 = t18;
}
