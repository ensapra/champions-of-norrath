typedef struct { f32 x, y, z; } Vec3p;
typedef struct {
    u8 pad0[0xC];
    s32 flags;
    Vec3p pos;
    f32 f1C;
    u8 pad20[0x48 - 0x20];
    void *vt;
    s32 i4C;
    f32 f50;
    Vec3p vel;
    s32 i60;
} Obj;
extern void func_001411F0(Obj *, Vec3p *, s32, s32);
extern void func_00143630(Obj *);
extern void func_00143830(Obj *);
extern u8 D_0044DB58[];
extern s32 D_004844A4;

void func_001E6A10(Obj *o, Vec3p pos, Vec3p vel, f32 r) {
    func_001411F0(o, &pos, 0, 0);
    o->vt = D_0044DB58;
    o->flags |= 0x421D;
    __builtin_memcpy(&o->pos, &pos, 12);
    o->i4C = 0;
    o->i60 = D_004844A4 + 0x78;
    __builtin_memcpy(&o->vel, &vel, 12);
    o->f1C = r * 12.0f;
    o->f50 = r;
    func_00143630(o);
    func_00143830(o);
}
