typedef struct { f32 x, y, z; } V3;
typedef struct E {
    char pad0[0x10]; V3 pos; char pad1[0x174]; f32 sc;
    char pad2[0x28]; f32 gx, gy, gz; char pad3[0x68]; s32 f230;
    char pad4[0x14]; s32 c248; s32 c24C;
} E;
extern s32 func_00153FA8(void *);
extern void func_00180DA0(void *, void *, void *, f32);
extern void func_00149438(void *);
extern s32 func_002FB320(f32);
extern s32 func_002FB680(s32, s64);
extern f32 func_002FBC20(s32);
extern char D_007D6740[];
extern char D_007D6790[];

#define RND(p) (2.0f * ((f32)func_00153FA8(p) * 0.0000152587890625f) - 1.0f)

void func_001DF588(E *e) {
    V3 g, v, u, r;
    s32 i;
    f32 k;
    f32 sc = e->sc;
    g.x = e->gx * sc;
    g.y = e->gy * sc;
    g.z = e->gz * sc;
    if (e->c248++ < 90 && !(func_00153FA8(e) & 7))
        func_00180DA0(D_007D6740, &e->pos, &g, 0.0f);
    if (e->f230 != 0 && e->c24C < 3) {
        V3 *pp = &e->pos, *pr = &r, *pv = &v, *pu = &u;
        i = 0x1D;
        do {
            do {
                r.x = RND(e);
                r.y = RND(e);
                r.z = RND(e);
            } while (r.x * r.x + r.y * r.y + r.z * r.z > 1.0f);
            *pu = *pr;
            k = (f32)func_00153FA8(e) * 0.0000152587890625f * 20.0f;
            v.x = pu->x * k;
            v.y = u.y * k;
            v.z = func_002FBC20(func_002FB680(func_002FB320(u.z * k), (s64)0xFF40 << 46));
            if (v.z < 0.0f)
                v.z = -v.z;
            i--;
            v.x += g.x;
            v.y += g.y;
            func_00180DA0(D_007D6790, pp, pv, 0.0f);
        } while (i >= 0);
        e->c24C++;
    }
    func_00149438(e);
}
