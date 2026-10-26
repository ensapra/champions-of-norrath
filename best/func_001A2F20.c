typedef struct {
    u8 p0[0x50]; s32 f50;
    u8 p54[0xAC - 0x54]; f32 fAC;
    u8 pB0[0xBC - 0xB0]; f32 fBC;
    u8 pC0[0xC4 - 0xC0]; f32 fC4; f32 fC8; f32 fCC;
    u8 pD0[0x5588 - 0xD0]; s32 *eff[16];
    u8 pad[0x5DB0 - 0x55C8];
} Ch;
typedef struct { u8 p0[0xC]; u32 flags; u8 p10[0x3C0 - 0x10]; s32 idx; u8 p3c4[0x465 - 0x3C4]; s8 b465; } Pl;
extern Ch D_00408600[];
extern s32 D_0034B48C[];
f32 D_004803A8, D_004803AC, D_004803B0, D_004803B4, D_004803B8, D_004803BC;
extern s32 func_001138D0(void *, s32);
extern s32 func_001ABB48(s32, s32);
extern s32 func_001AC260(s32, s32);
extern s32 func_002A6DB0(s32);
extern s32 func_002B6C68(s32, s32);
extern s32 func_00318550(void);

void func_001A2F20(Pl *pl) {
    Ch *c;
    f32 f, g, h;
    s32 i, k, v, r, r2;
    s32 **p;
    if (pl->flags & 0x20000) return;
    c = &D_00408600[pl->idx];
    if (c->fAC <= 0.0f) return;
    if (c->fC4 < c->fC8) {
        f32 s = D_004803A8;
        f = c->fC8 * s;
        g = (f32)func_001ABB48(pl->idx, 0x200);
        if (g > 0.0f) f *= g * D_004803AC + D_004803B0;
        f += (f32)pl->b465 * s;
        if (c->f50 == 0) f = 0.0f;
        p = c->eff;
        for (i = 15; i >= 0; i--, p++) {
            u8 *e = (u8 *)*p;
            if (e != NULL && *(s32 *)e != 0) {
                s32 off = 0x20;
                u8 *b4 = e + 4;
                u8 *b6 = e + 6;
                k = 0;
                do {
                    if (*(s16 *)(b4 + off) == 0xC) {
                        v = *(s16 *)(b6 + off);
                        goto got;
                    }
                    k++;
                    off += 8;
                } while (k < 4);
                v = 0;
got:
                f *= (f32)v * D_004803B4 + 1.0f;
            }
        }
        r = func_001138D0(pl, func_00318550());
        if (r) f += f * ((f32)func_002A6DB0(r) * D_004803B8);
        r2 = func_001AC260(pl->idx, 0x13);
        if (r2) f += f * ((f32)func_002B6C68(D_0034B48C[0], r2) * D_004803BC);
        h = c->fC8;
        c->fC4 = c->fC4 + f;
        if (h < c->fC4) c->fC4 = h;
    }
    if (c->fCC > 0.0f) {
        f32 d = c->fBC;
        c->fC4 = c->fC4 + d;
        if (c->fC8 < c->fC4) {
            c->fC4 = c->fC8;
            c->fCC = 0.0f;
        }
        c->fCC = c->fCC - d;
        if (c->fCC < 0.0f) c->fCC = 0.0f;
    }
}
