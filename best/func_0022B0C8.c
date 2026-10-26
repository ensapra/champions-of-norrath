typedef struct { f32 x, y, z; } V3;
extern s32 func_001441B8(s32, s32, s32);
extern s32 func_00153FA8(void *);
extern void func_0016C238(s32, s32, V3, s32, s32, V3 *, s32 *, s32, f32);
extern s32 func_0016CD50();
extern void func_00180DA0(void *, V3 *, V3 *, f32);
extern void func_001E5278(s32, V3 *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_007D7AF0[];
extern f32 D_0048188C;
typedef struct { s16 off; s16 pad; s32 (*fn)(void *); } VE;
void func_0022B0C8(u8 *a0, u8 *a1, s32 idx) {
    V3 d; V3 p1; V3 p2; V3 va; V3 vb;
    s32 s50, s54;
    s32 cnt, m1, m2, r, res;
    f32 inv;
    u8 *c0 = a0 + 0x120;
    u8 *c1 = a1 + 0x120;
    u8 *v1 = a1 + 0x10;
    u8 *v0 = a0 + 0x10;
    m1 = func_0016CD50(((s32 *)*(s32 **)(a0 + 0x24))[idx * 2 + 1], c1, v1);
    {
        VE *e = (VE *)(*(u8 **)(a1 + 0x48) + 0x80);
        r = e->fn(a1 + e->off);
    }
    m2 = func_0016CD50(r);
    cnt = 99;
    do {
        cnt--;
        va = *(V3 *)v0;
        func_0016C238(((s32 *)*(s32 **)(a0 + 0x24))[idx * 2 + 1], (s32)c0, va, *(s16 *)(a0 + 0x38), func_00153FA8(a0) % m1, &p1, &s50, 0, 1.0f);
        {
            VE *e = (VE *)(*(u8 **)(a1 + 0x48) + 0x80);
            r = e->fn(a1 + e->off);
        }
        vb = *(V3 *)v1;
        func_0016C238(r, (s32)c1, vb, *(s16 *)(a1 + 0x38), func_00153FA8(a0) % m2, &p2, &s54, 0, 1.0f);
        d.x = p2.x - p1.x;
        d.y = p2.y - p1.y;
        d.z = p2.z - p1.z;
        inv = 1.0f / __builtin_sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
        d.x *= inv; d.y *= inv; d.z *= inv;
        d.x *= 30.0f; d.y *= 30.0f; d.z *= 30.0f;
        func_00180DA0(D_007D7AF0, &p2, &d, 0.0f);
    } while (cnt >= 0);
    *(s16 *)(a0 + 0x92) = 100;
    *(s16 *)(a0 + 0x8C) = 110;
    *(s16 *)(a0 + 0x8E) = 183;
    *(s16 *)(a0 + 0x90) = 255;
    *(s16 *)(a0 + 0x94) = 110;
    *(s16 *)(a0 + 0x96) = 183;
    *(s16 *)(a0 + 0x98) = 255;
    *(s16 *)(a0 + 0x9A) = 100;
    res = func_001441B8(0xBC, 0xFF, 0x64);
    if (res != 0) {
        V3 o; V3 q;
        o.x = 0.0f; o.y = 0.0f; o.z = 44.0f;
        q.x = *(f32 *)(a0 + 0x10) + o.x;
        q.y = *(f32 *)(a0 + 0x14);
        q.z = *(f32 *)(a0 + 0x18) + o.z;
        func_001E5278(res, &q, 0, 0, 110.0f, 183.0f, 255.0f, 100.0f, 120.0f, 60.0f, 0.5f, D_0048188C);
    }
}
