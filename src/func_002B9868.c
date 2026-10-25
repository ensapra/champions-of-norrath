extern "C" {
s32 func_00153FA8(void *);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
extern char D_008D7D10[];
s32 D_004844A4;
extern const f32 D_00482ED0;
extern const f32 D_00482ED4;
}
struct Vec3 { f32 x, y, z; };
void func_00180DA0(void *, Vec3 *, Vec3 *, f32);

struct Base {
    char pad0[0x10];
    Vec3 pos;
    char pad1[0x48 - 0x1C];
    virtual void Kill(s32, ...);
};
struct Obj : Base {
    s32 unk4C;
    s32 unk50;
};

extern "C" void func_002B9868(Obj *o) {
    Vec3 a;
    Vec3 b;
    s32 i;
    s32 r;
    f32 s;
    f32 t;

    if (D_004844A4 < o->unk4C) {
        i = 0;
        while (i < 12) {
            Vec3 *p;
            i++;
            r = func_00153FA8(o);
            s = func_0015A070(r);
            s *= (f32)func_00153FA8(o) * (1.0f / 65536.0f) * (f32)o->unk50;
            a.x = s;
            s = func_0015A100(r);
            s *= (f32)func_00153FA8(o) * (1.0f / 65536.0f) * (f32)o->unk50;
            a.y = s;
            t = (f32)func_00153FA8(o) * (1.0f / 65536.0f);
            p = &o->pos;
            a.x += p->x;
            a.y += p->y;
            a.z = t * D_00482ED0 + p->z;
            b.x = 0;
            b.y = 0;
            b.z = D_00482ED4;
            func_00180DA0(D_008D7D10, &a, &b, 0.0f);
        }
        return;
    }
    if (o != NULL) {
        o->Kill(3);
    }
}
