extern "C" {
typedef struct { f32 x, y, z; } V3;
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern void func_0016C238(s32, s32, V3 *, s32, s32, V3 *, V3 *, s32, f32);
extern s32 func_0016CD50(s32);
extern void func_00180DA0(void *, V3 *, V3 *, f32);
extern s32 func_001D0E08(V3 *, s32);
extern u8 D_007D62E0[];
extern f32 D_00480860[1], D_00480864[1], D_00480868[1], D_0048086C[1], D_00480870[1];
extern u32 D_00483E58[1];
#define STEP(s) (s = s * 0x19660D + 0x3C6EF35F)
#define FR(s) ((f32)(STEP(s) >> 16) * 0.0000152587890625f)
void func_001DB838(s32 a0, s32 a1, V3 *a2, s32 a3, s32 *a4, f32 f0, f32 f1, f32 f2) {
    V3 pos, off, hit, vel, p, dir;
    s32 n, cnt, h;
    u32 s;
    pos = *a2;
    if (func_001D0E08(&pos, (s16)a3) == 0 || a0 == 0) return;
    if (f0 > 1.0f) f0 = 1.0f;
    cnt = (s32)(f0 * 113.0f);
    n = func_0016CD50(a0);
    if (n == 0) return;
    off.x = func_0015A070((s16)a3) * f2;
    off.y = func_0015A100((s16)a3) * f2;
    off.z = 0.0f;
    pos.x += off.x;
    pos.y += off.y;
    if (cnt <= 0) return;
    do {
        s = D_00483E58[0];
        h = (STEP(s) >> 16) % n;
        D_00483E58[0] = s;
        a4[0] = h;
        func_0016C238(a0, a1, &pos, (s16)a3, h, &hit, &vel, 0, f1);
        ((f32 *)a4)[1] = vel.x * vel.x;
        while (((f32 *)a4)[1] > 0.0f) {
            f32 m;
            s = D_00483E58[0];
            ((f32 *)a4)[1] -= D_0048086C[0];
            m = vel.x * D_00480864[0] * D_00480868[0];
            p.x = (FR(s) - 0.5f) * m;
            p.y = (FR(s) - 0.5f) * m;
            p.z = (FR(s) - 0.5f) * m;
            p.x += hit.x; p.y += hit.y; p.z += hit.z;
            dir.x = (FR(s) - 0.5f) * D_00480860[0];
            dir.y = (FR(s) - 0.5f) * D_00480860[0];
            dir.z = (FR(s) - 0.5f) * D_00480860[0];
            cnt--;
            m = FR(s) * D_00480870[0];
            D_00483E58[0] = s;
            func_00180DA0(D_007D62E0, &p, &dir, m);
            if (cnt <= 0) return;
        }
    } while (cnt > 0);
}
}
