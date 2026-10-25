struct V {
    f32 x, y, z;
    V() {}
    V(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    void operator+=(const V &o) { x += o.x; y += o.y; z += o.z; }
};
struct W { f32 a, b, c, d; };
extern "C" {
void func_002207A8(void);
s32 func_0016CD50(s32);
s32 func_00153FA8(void *);
void func_0016C238(s32, void *, V, s16, s32, V *, W *, s32, f32);
void func_00180DA0(void *, V *, V *, f32);
s32 D_004844A4;
extern char D_007D7A90[];

void func_00225AE8(char *o) {
    V p;
    s32 i, n;
    func_002207A8();
    n = func_0016CD50(*(s32 *)(o + 0x90));
    for (i = D_004844A4 & 7; i < n; ) {
        V z(0.0f, 0.0f, 0.0f);
        W w;
        func_0016C238(*(s32 *)(o + 0x90), o + 0x98, *(V *)(o + 0x10), *(s16 *)(o + 0x38), i, &p, &w, 0, 1.0f);
        i += 8;
        f32 a = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f - 0.5f);
        f32 b = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f - 0.5f);
        f32 d = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f - 0.5f);
        p += V(a, b, d);
        func_00180DA0(D_007D7A90, &p, &z, 0.0f);
    }
}
}
