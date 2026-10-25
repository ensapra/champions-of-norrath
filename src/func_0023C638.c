struct Vec3 { f32 x, y, z; Vec3() {} Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
struct Info23C { char pad[0xC]; s32 fC; char pad10[4]; s32 f14; char pad18[0x9C]; s32 fB4; char padB8[4]; s32 fBC; char padC0[4]; s32 fC4; char padC8[4]; s32 fCC; };
struct Obj23C638 {
    char pad0[0x10];
    Vec3 pos;
    char pad1C[8];
    Info23C *info;
    char pad28[0x10];
    s16 f38;
    char pad3A[0xA6];
    f32 fE0;
    char padE4[0x3C];
    char f120[0x2A0];
    s32 f3C0;
    char pad3C4[4];
    s32 f3C8;
    char pad3CC[0x8C];
    s32 f458;
};
extern "C" {
s32 func_00109808(void *, s32, s32, s32);
void func_00168A38(s32, Vec3 *, s32, void *, s32, Vec3 *, void *, f32);
void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0023C638(Obj23C638 *o) {
    Vec3 *p = &o->pos;
    void *q = o->f120;
    s32 r;
    if (o->f3C0) {
        Vec3 t;
        Vec3 d;
        char buf[0x20];
        Vec3 *dp = &d;
        *p = t;
        o->f38 = 0;
        Vec3 zero(0.0f, 0.0f, 0.0f);
        func_00168A38(o->info->fC, &zero, 0, q, 9, dp, buf, o->fE0);
        p->x -= dp->x;
        p->y -= dp->y;
        p->z -= dp->z;
        r = func_00109808(o, o->info->fC, o->info->f14, 0);
    } else {
        r = func_00109808(o, o->info->fC, o->info->f14, 0);
    }
    if (o->f3C8) {
        func_0016C060(o->info->fB4, o->info->fBC, 0, o->info->fC, r, -1, -1, 0);
    }
    if (o->f458) {
        func_0016C060(o->info->fC4, o->info->fCC, 0, o->info->fC, r, -1, -1, 0);
    }
}
}
