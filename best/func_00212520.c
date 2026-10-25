extern "C" {
typedef struct { f32 x, y, z; } V3;
struct Obj212520 {
    char pad0[0x48];
    void *vt;
    char pad4C[0x1C4 - 0x4C];
    s32 f1C4;
    s32 f1C8;
};
void func_001450E8(Obj212520 *, s32, s32, s32, V3, V3, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00194390(s32 *, s32, s32);
extern char D_00449CB0[];

static inline void Init(s32 *p, s32 v) {
    *p = 0;
    if (v)
        func_00194390(p, v, v);
}

void func_00212520(Obj212520 *o, V3 a, V3 b, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s0, s32 s1, s32 s2) {
    func_001450E8(o, 0, 0, 0, a, b, a3, a4, 0, 0, a5, a6, a7, s0, s1, 4, 0);
    o->vt = D_00449CB0;
    Init(&o->f1C4, a4);
    o->f1C8 = s2;
}
}
