struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};

struct Ent {
    char pad0[0xC];
    s32 flags;
    Vec3 pos;
};

struct Sub {
    char pad0[0xC];
    s32 fC;
};

struct Base {
    char pad0[0x10];
    Vec3 pos;
    char pad1[0x48 - 0x1C];
    virtual ~Base();
};

struct Obj : Base {
    Sub *f4C;
    s32 f50;
    s32 f54;
};

extern "C" {
void func_0013EF30(Vec3 *, Vec3 *, Ent **, s32);
void *func_001441B8(s32);
void func_00297568(void *, Vec3 *, s32, s32);
}

extern "C" void func_00296930(Obj *o) {
    Ent *list[64];
    s32 count = 0;
    f32 r = o->f54;
    Vec3 mn(o->pos.x - r, o->pos.y - r, o->pos.z - r);
    Vec3 mx(o->pos.x + r, o->pos.y + r, o->pos.z + r);
    s32 i;
    func_0013EF30(&mn, &mx, list, 0x40);
    for (i = 0; list[i] != NULL && count < o->f50 / 2; i++) {
        Ent *e = list[i];
        if ((e->flags & 0x28) == 0x28 && o->f4C != NULL) {
            void *p;
            count++;
            p = func_001441B8(100);
            if (p != NULL) {
                Vec3 v = e->pos;
                func_00297568(p, &v, o->f50, o->f4C->fC);
            }
        }
    }
    delete o;
}
