typedef struct { s16 off; s16 pad; s32 (*fn)(void *, ...); } VE;
typedef struct { f32 x, y, z; } V3;
typedef struct { u8 p0[0x10]; V3 pos; u8 p1C[0x1C]; s16 s38; u8 p3A[0x12]; void *p4C; u8 p50[4]; s32 s54; V3 v58; u8 p64[0x54]; u8 *pB8; s32 sBC; } A0;
typedef struct { u8 p0[0xC]; s32 flags; u8 p10[0x9C]; s8 sAC; u8 pAD[0x183]; f32 f230; } A1;
s32 func_001441B8(s32);
s32 func_00153FA8(void *);
s32 func_00165DC0(void *, void *);
void func_00180DA0(void *, void *, void *, f32);
void func_001CE218(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_001E5278(s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_00219638(s32, void *, void *, s16, s32, s32, s32);
void func_0024D308(s32, void *, f32);
f32 D_00482F0C, D_00482F10, D_00482F14;
extern u8 D_004797F0[], D_00486500[], D_008D8050[];
#define RND(a) (2.0f * ((f32)func_00153FA8(a) * 0.0000152587890625f) - 1.0f)
void func_002BB4B0(A0 *a, A1 *b) {
    if (b->flags & 0x20) {
        if (a->s54) {
            int i;
            V3 tmp, d, pad1, pad2, p, q, pad3;
            s32 v, n, w;
            f32 k, k0;
            V3 *dp, *dp2;
            a->s54 = 0;
            v = func_001441B8(0xBC);
            if (v) {
                tmp = a->pos;
                func_001E5278(v, &tmp, 0, 0, 172.0f, 252.0f, 500.0f, -32.0f, 0, 0, 0, 0, 180.0f, 120.0f, 1.0f, 1.0f);
            }
            dp = &d;
            k0 = D_00482F0C;
            i = 0;
            dp2 = dp;
            do {
                do {
                    dp->x = RND(a);
                    dp->y = RND(a);
                    dp->z = RND(a);
                } while (dp->x * dp->x + dp->y * dp->y + d.z * d.z > 1.0f);
                i++;
                dp2->x *= k0; d.y *= k0; d.z *= k0;
                func_00180DA0(D_008D8050, &a->pos, dp2, 0.0f);
            } while (i < 0x32);
            func_0024D308(func_00165DC0(D_00486500, D_004797F0), a, 1.0f);
            if (b->sAC == 0x10) {
                n = ((VE *)(*(u8 **)(a->pB8 + 0x60) + 0x58))->fn(a->pB8, 0, a->sBC);
                k = D_00482F10;
            } else {
                n = ((VE *)(*(u8 **)(a->pB8 + 0x60) + 0x58))->fn(a->pB8, 1, a->sBC);
                k = D_00482F14;
            }
            w = n + (s32)((f32)func_00153FA8(a) * 0.0000152587890625f * k * (f32)n);
            func_001CE218(b, a->p4C ? ((s32 *)a->p4C)[3] : 0, 10000000, 0, 0, 0x0200C040, 0, 0, (f32)n, (f32)w);
            if (b->f230 <= 0.0f) {
                v = func_001441B8(0xB0);
                if (v) {
                    p = a->pos;
                    q = a->v58;
                    func_00219638(v, &p, &q, a->s38, 0, 0, 1);
                }
            }
        }
    }
}
