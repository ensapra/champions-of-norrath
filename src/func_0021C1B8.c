struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub21C { char pad[0xC]; s32 flags; };
struct Ref21C { char pad[0xC]; Sub21C *sub; };
struct Obj21C1B8 {
    char pad0[0xC];
    s32 flags;
    char pad10[0xC];
    f32 f1C;
    f32 f20;
    char pad24[0x24];
    void *vtbl;
    Vec3 vel;
    s32 f58;
    s8 f5C;
    Ref21C *ref;
};
extern "C" {
extern char D_00449670[];
extern s32 D_004844A4;
void func_001411F0(void *, Vec3, s32, s32);
void func_00143630(void *);
void func_00143830(void *);
void func_00194390(Ref21C **, s32, s32);

void func_0021C1B8(Obj21C1B8 *o, Vec3 pos, Vec3 vel, s32 arg3, s32 arg4, f32 time) {
    Ref21C **ref = &o->ref;
    func_001411F0(o, pos, 0, 0);
    o->flags |= 0x421A;
    o->vtbl = D_00449670;
    *ref = 0;
    if (arg4) {
        func_00194390(ref, arg4, arg4);
    }
    o->f20 = o->f1C = 12.0f;
    if (*ref && ((*ref)->sub->flags & 0x40)) {
        o->flags |= 0x800;
        func_00143630(o);
        o->f1C = 28.0f;
    }
    o->vel = vel;
    o->f5C = arg3;
    o->f58 = D_004844A4 + (s32)(time * 60.0f);
    func_00143830(o);
}
}
