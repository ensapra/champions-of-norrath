typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x13]; s8 b; } Obj;
extern void func_001564B8(void *, void *, void *);
extern void func_00157668(void *, void *, s16);
extern void func_0016CA18(s32, s32, s32, void *);
extern s32 func_0016CD50(void *);
extern void func_0016CD68(void *, void *, s32, void *, void *);
extern void func_00180DA0(void *, void *, void *, f32);
extern char D_0042AD70[];
extern f32 D_00480914;
extern u32 D_00483E58;

void func_001DF298(s32 a0, Obj *o, s32 a2, V3 *a3, s16 ang, s32 off) {
    V3 sp0;
    char sp10[0x30];
    char sp40[0x30];
    V3 sp70;
    char sp80[16];
    V3 sp90;
    V3 spA0;
    s32 j, n, i = 0;
    u32 r;
    sp0 = *a3;
    func_0016CA18(a0, a2, o->b + off, sp10);
    func_00157668(sp40, &sp0, (s16)(ang + 0x4000));
    func_001564B8(sp10, sp10, sp40);
    n = func_0016CD50(o);
    for (; i < n; i++) {
        f32 x, y, z;
        f32 f22 = D_00480914;
        func_0016CD68(o, sp10, i, &sp70, sp80);
        r = D_00483E58;
        for (j = 0; j < 3; j++) {
            do {
                r = r * 0x19660D + 0x3C6EF35F;
                x = (f32)(s32)(r >> 16) * 0.0000152587890625f * 2.0f - 1.0f;
                r = r * 0x19660D + 0x3C6EF35F;
                y = (f32)(s32)(r >> 16) * 0.0000152587890625f * 2.0f - 1.0f;
                r = r * 0x19660D + 0x3C6EF35F;
                z = (f32)(s32)(r >> 16) * 0.0000152587890625f * 2.0f - 1.0f;
                sp90.z = z;
            } while (x * x + y * y + z * z > 1.0f);
            sp90.y = y; sp90.x = x;
            sp90.x *= f22;
            sp90.y *= f22;
            sp90.z = sp90.z * f22 - 4.0f;
            r = r * 0x19660D + 0x3C6EF35F;
            spA0.x = (f32)((s32)((r >> 16) % 6u) - 3) + sp70.x;
            r = r * 0x19660D + 0x3C6EF35F;
            spA0.y = (f32)((s32)((r >> 16) % 6u) - 3) + sp70.y;
            r = r * 0x19660D + 0x3C6EF35F;
            D_00483E58 = r;
            spA0.z = (f32)((s32)((r >> 16) % 6u) - 3) + sp70.z;
            func_00180DA0(D_0042AD70, &spA0, &sp90, 0.0f);
            r = D_00483E58;
        }
    }
}
