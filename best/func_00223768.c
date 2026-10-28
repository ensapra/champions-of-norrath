typedef struct { f32 x, y, z; } V3;
s32 D_004844A4;
s32 D_00484F68;
f32 D_00481740;
s32 func_00153FA8(void *);
s32 func_0015A198(f32, f32);
f32 func_0015A540(s32);
void func_00186B58(V3 *, void *, void *, s32, s32, s32, s32, s32);
void func_001815C8(V3 *, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void ovl_ntgui2_func_0013D230(void *);
#define RI(o) (*(s32 *)((u8 *)t + (o)))
#define RF(o) (*(f32 *)((u8 *)t + (o)))
#define RH(o) (*(s16 *)((u8 *)t + (o)))
#define RB(o) (*(s8 *)((u8 *)t + (o)))

void func_00223768(u8 *t, V3 *b, V3 *c, s32 d) {
    V3 v;
    V3 w;
    V3 *pv = &v;
    f32 f21, f20, k, z;
    s32 q8, q7, q5, q6, n;
    s16 save;
    u8 *p;
    v = *b;
    if (RI(0x50) && RI(0x5C)) {
        if (d == 0) {
            RI(0x180) = D_004844A4;
        } else if (d == 1 && RB(0x75) < 0) {
            RI(0x180) = func_00153FA8(t) % (RB(0x75) < 0 ? -RB(0x75) : RB(0x75));
        } else {
            RI(0x180) = RI(0x180) + 1;
        }
        if (c) {
            save = RH(0x84);
            RH(0x84) -= func_0015A198(c->y, c->z);
            func_00186B58(pv, t + 0xAC, t + 0x64, RI(0x180), func_0015A198(c->y, c->x), 0, 0, 0);
            RH(0x84) = save;
        } else {
            func_00186B58(pv, t + 0xAC, t + 0x64, RI(0x180), 0, 0, 0, 0);
        }
        if (d == 0 || d == 3) {
            if (RI(0x60) && RB(0xA0) == 0) {
                RI(0x5C) = 0;
                RI(0x60) = 0;
            }
        }
    }
    if (RI(0x54) && RI(0xFC)) {
        f21 = RF(0x11C);
        switch (RI(0x14C)) {
        case 0:
            f21 = RI(0x144);
            break;
        case 1:
            if (RI(0x13C) < D_004844A4) {
                f21 = RI(0x144);
                f20 = RI(0x148) - RI(0x144);
                RI(0x13C) = D_004844A4 + RI(0x150);
                f21 += f20 * ((f32)func_00153FA8(t) * 0.0000152587890625f);
            }
            break;
        case 2:
            if (RI(0x13C) < D_004844A4) {
                n = -RI(0x140);
                RI(0x140) = n;
                RI(0x13C) = D_004844A4 + RI(0x150);
                if (n == 1) f21 = RI(0x144);
                else f21 = RI(0x148);
            }
            if (RI(0x150)) {
                f21 += (f32)RI(0x140) * (f32)(RI(0x148) - RI(0x144)) / (f32)RI(0x150);
            }
            break;
        case 3:
            if (RI(0x13C) < D_004844A4) {
                z = RI(0x144);
                RI(0x13C) = D_004844A4 + RI(0x150);
                if (f21 == z) f21 = RI(0x148);
                else f21 = z;
            }
            break;
        }
        if (f21 >= 300.0f) f21 = D_00481740;
        if (f21 < 0.0f) f21 = 0.0f;
        k = 1.0f / (f21 * f21);
        w = *pv;
        q8 = RH(0x154); q7 = RH(0x158); q5 = RH(0x15C); q6 = RH(0x160);
        *(V3 *)(t + 0x130) = w;
        p = t + 0x100;
        *(f32 *)(p + 0x2C) = 0.0f;
        *(s16 *)(p + 0x12) = q8;
        *(s16 *)(p + 0x14) = q7;
        *(s16 *)(p + 0x16) = q5;
        *(s16 *)(p + 0x18) = q6;
        *(f32 *)(p + 0x28) = k;
        *(f32 *)(p + 0x1C) = f21;
        *(f32 *)(p + 0x24) = f21;
        *(f32 *)(p + 0x20) = k;
        *(s16 *)(p + 0xA) = q8;
        *(s16 *)(p + 0xC) = q7;
        *(s16 *)(p + 0xE) = q5;
        *(s16 *)(p + 0x10) = q6;
        *(u8 *)(p + 8) = 0;
        ovl_ntgui2_func_0013D230(p);
    }
    if (RI(0x58) && RI(0xFC)) {
        f32 r = func_0015A540(0x7EFE41 + (s32)t * 0x19660D + (D_004844A4 << 4));
        s32 i = (s32)(r * 22.0f);
        func_001815C8(pv, RI(0x164), RI(0x168), RI(0x16C), RI(0x170), D_00484F68, 0, 2,
                      (f32)RI(0x17C), (f32)(RI(0x174) + (i << RI(0x178))));
    }
}
