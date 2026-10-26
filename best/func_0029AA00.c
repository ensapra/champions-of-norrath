typedef struct { s16 off; s16 pad; s32 (*fn)(void *, ...); } VE;
typedef struct { f32 x, y, z; } V3;
typedef struct { u8 p0[0x10]; V3 pos; } Sub;
typedef struct { s8 c0; u8 p1[7]; u8 *o8; u8 *oC; u8 p10[4]; u8 *o14; f32 f18; } A0;
typedef struct { u8 p0[0xC]; s32 flags; V3 pos; u8 p1C[0x1C]; s16 s38; u8 p3A[0xE]; u8 *vt48; } A1;
s32 func_001441B8(s32);
s32 func_0015E948(void *);
void func_0016C238(s32, void *, void *, s16, s32, void *, void *, s32, f32);
s32 func_0016CD50(s32);
void func_00180DA0(void *, void *, void *, f32);
void func_001E5278(s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_00482890, D_00482894, D_00482898, D_0048289C;
extern u8 D_008D6CD0[], D_008D6D20[];
void func_0029AA00(A0 *a, A1 *b, s32 *r, s32 *r2) {
    f32 m = a->f18;
    u8 *s;
    VE *e;
    s32 v;
    m = __builtin_fminf(m, 1.0f);
    s = a->oC;
    *(s16 *)(s + 0x92) = 0x71;
    *(s16 *)(s + 0x8E) = (s32)(m * 128.0f);
    *(s16 *)(s + 0x96) = (s32)(m * 128.0f);
    if (b->flags & 0x20) {
        int i = 0x65;
        do {
            V3 hit, d, tmp; u8 q[16];
            s32 rnd, idx;
            f32 inv;
            i--;
            rnd = func_0015E948(a);
            e = (VE *)(*(u8 **)((u8 *)b + 0x48) + 0x80);
            v = e->fn((u8 *)b + e->off);
            idx = rnd % func_0016CD50(v);
            e = (VE *)(*(u8 **)((u8 *)b + 0x48) + 0x80);
            v = e->fn((u8 *)b + e->off);
            tmp = b->pos;
            func_0016C238(v, (u8 *)b + 0x120, &tmp, b->s38, idx, &hit, q, 0, 1.0f);
            d.x = hit.x - ((Sub *)a->oC)->pos.x;
            d.y = hit.y - ((Sub *)a->oC)->pos.y;
            d.z = 0;
            inv = 1.0f / __builtin_sqrtf(d.x * d.x + d.y * d.y);
            d.x *= inv; d.y *= inv; d.z *= inv;
            d.x *= D_00482890; d.y *= D_00482890; d.z *= D_00482890;
            func_0015E948(a);
            d.z = 0.0f;
            func_00180DA0(D_008D6CD0, &hit, &d, 0.0f);
            d.x *= D_00482894; d.y *= D_00482894; d.z *= D_00482894;
            func_00180DA0(D_008D6D20, &hit, &d, 0.0f);
        } while (i >= 0);
    }
}
