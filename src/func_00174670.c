typedef struct { s16 x0,x2,x4,x6,x8,xa,xc,xe; } A;
typedef struct { s16 x0,x2,x4,x6; } B;
typedef struct { s32 x0,x4,x8; void *obj; A a; B b; } Ent;
typedef struct { u8 pad[0xC]; s32 x0c,x10,x14,x18,x1c; } Dst;
extern Ent D_010EA1E0[]; extern u8 D_010E8970[]; extern u8 func_001CE218[];
void func_00174230(void *, s32, s32, s32, s32);
void func_00174670(s32 i) {
    void *p = D_010E8970 + i * 0x28;
    Dst *d;
    D_010EA1E0[i].obj = p;
    func_00174230(p, D_010EA1E0[i].a.x4, D_010EA1E0[i].a.xc, D_010EA1E0[i].b.x0, D_010EA1E0[i].b.x2);
    d = (Dst *)(func_001CE218 + 0x2010);
    d->x0c = D_010EA1E0[i].a.xc;
    d->x10 = D_010EA1E0[i].a.xe;
    d->x14 = D_010EA1E0[i].b.x4;
    d->x18 = D_010EA1E0[i].b.x0;
    d->x1c = D_010EA1E0[i].b.x2;
}
