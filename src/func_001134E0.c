struct V3 {
    f32 x, y, z;
    V3() {}
    V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};
inline V3 operator-(const V3 &a, f32 r) { return V3(a.x - r, a.y - r, a.z - r); }
inline V3 operator+(const V3 &a, f32 r) { return V3(a.x + r, a.y + r, a.z + r); }

struct Obj {
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11();
    virtual void Hit(void *outer, f32 r, V3 *box, s32 arg2);
};

extern "C" {
void func_0013EF30(V3 *, V3 *, Obj **, s32);
void func_001134E0(void *outer, V3 *p, s32 arg2, f32 r);
}

void func_001134E0(void *outer, V3 *p, s32 arg2, f32 r)
{
    V3 box = *p;
    V3 *pb = &box;
    Obj *list[128];
    V3 lo = box - r;
    V3 hi = box + r;
    func_0013EF30(&lo, &hi, list, 128);
    for (s32 i = 0; list[i]; i++) {
        list[i]->Hit(outer, r, pb, arg2);
    }
}
