struct V3_15A {
    f32 x, y, z;
    V3_15A() {}
    V3_15A(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    V3_15A operator-(const V3_15A &b) const { return V3_15A(x - b.x, y - b.y, z - b.z); }
    V3_15A operator*(f32 s) const { return V3_15A(x * s, y * s, z * s); }
    V3_15A &operator+=(const V3_15A &b) { x += b.x; y += b.y; z += b.z; return *this; }
};
static inline void Cross_15A(V3_15A *dst, const V3_15A &a, const V3_15A &b) {
    V3_15A r;
    r.x = a.y * b.z - a.z * b.y;
    r.y = a.z * b.x - a.x * b.z;
    r.z = a.x * b.y - a.y * b.x;
    *dst = r;
}
struct Obj_15A {
    f32 s;
    u8 pad[0xC];
    V3_15A pos;
    u8 pad2[0x2C - 0x1C];
    V3_15A dir;
    u8 pad3[0x8C - 0x38];
    V3_15A w;
};

extern "C" void func_0015A9F0(Obj_15A *o, V3_15A *p, V3_15A *out) {
    V3_15A d;
    d = *p - o->pos;
    Cross_15A(out, o->w, d);
    *out += o->dir * o->s;
}
