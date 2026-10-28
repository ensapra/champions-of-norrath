struct V3_17B {
    f32 x, y, z;
    V3_17B() {}
    V3_17B(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
};
inline V3_17B operator*(const V3_17B &a, f32 k) { return V3_17B(a.x * k, a.y * k, a.z * k); }
inline V3_17B operator+(const V3_17B &a, const V3_17B &b) { return V3_17B(a.x + b.x, a.y + b.y, a.z + b.z); }

extern "C" {
extern f32 D_0037EF00[12];
extern V3_17B D_0037EE80;
extern V3_17B D_0037EE90;
void func_0017B740(void) {
    D_0037EE90 = D_0037EE80 + V3_17B(D_0037EF00[2], D_0037EF00[5], D_0037EF00[8]) * 600.0f;
}
}
