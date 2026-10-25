struct Vec3 { f32 x, y, z; Vec3() {} };
struct Pair8 { s32 a; s32 b; };
struct Sub22E798 { char pad[0xC]; s32 fC; };
struct Obj22E798 {
    char pad0[0x10];
    Vec3 pos;
    char pad1C[0x8];
    Sub22E798 *sub;
    char pad28[0x10];
    u16 rot;
    char pad3A[0xE6];
    char f120[0x2BC];
    s32 f3DC;
    s32 f3E0;
};
extern "C" {
extern Pair8 D_0042CFC8[];
void func_00168A38(s32, Vec3, s16, void *, s32, Vec3 *, Vec3 *, f32);
void *func_001441B8(s32);
void func_00149068(void *, Vec3 *, s32, s32, s32, s32, s32, s32, f32);

void func_0022E798(Obj22E798 *o, s32 mode) {
    s32 flags = 1;
    s32 id = 0;
    Vec3 *pos = &o->pos;
    void *arg = o->f120;
    s32 second = 0;
    Vec3 p;
    Vec3 out;
    void *n;

    if (mode == 1) {
        id = o->f3DC;
        flags = 0x101;
        o->f3DC = 0;
    } else if (mode == 2) {
        id = o->f3E0;
        second = 1;
        o->f3E0 = 0;
    }
    if (id == 3) {
        flags |= 0x2000;
    } else {
        flags |= 0x4000;
    }
    if (id != 0) {
        s32 ang;
        p = *pos;
        ang = o->rot - 0x4001;
        func_00168A38(o->sub->fC, *pos, ang, arg, second, &p, &out, 1.0f);
        n = func_001441B8(0x248);
        if (n != 0) {
            func_00149068(n, &p, D_0042CFC8[0].a, D_0042CFC8[id].a, D_0042CFC8[id + 7].a, 1, flags, 0, 1.0f);
        }
    }
}
}
