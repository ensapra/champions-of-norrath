typedef struct S12 { char b[12]; } S12;
typedef struct Inner { char p[0x94]; s32 x94; } Inner;
typedef struct A {
    char p0[0x10];
    f32 x10, x14, x18;
    char p1[4];
    f32 x20;
    Inner *x24;
    char p2[0x38 - 0x28];
    u16 x38;
    char p3[0x120 - 0x3A];
    char x120[0x230 - 0x120];
    f32 x230, x234;
    char p4[2];
    u8 x23A;
    char p5;
    s16 x23C;
    char p6[0x328 - 0x23E];
    s32 x328;
    char p7[0x3C8 - 0x32C];
    s32 x3C8;
    char p8[0x3F8 - 0x3CC];
    s32 x3F8, x3FC, x400;
    char x404[8];
} A;
extern char D_00473798[];
extern S12 D_0034B988;
extern char D_00473830[];
s32 D_00483F48;
s32 D_00483F4C;
f32 D_00481E30;
char D_004858E0[5];
extern char D_004858F0[];
void func_0024AF80(s32);
void func_0024EED0(void *, s32);
u32 func_00153FA8(void *);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_001441B8(s32);
void func_001EFEB0(s32, void *, void *, s16, void *);
void func_00194390(void *, s32, s32);
void func_00160128(void *, s32, s32, f32);

void func_00242B68(A *a, s32 mode) {
    if (mode == 1) {
        D_0034B988 = *(S12 *)D_00473798;
        D_00483F48 = (s32)a->x230;
        D_00483F4C = (s32)a->x234;
        func_0024AF80(0);
        func_0024EED0(D_00473830, 0x103);
    } else if (mode == 0) {
        if (a->x23A & 8) {
            s32 i, off = 0;
            u16 ang;
            a->x23C = 0x16;
            a->x400 = a->x328;
            a->x3C8 = 0;
            for (i = 0; i < 6; i++) {
                f32 v[3];
                s32 o;
                u32 rnd;
                ang = a->x38;
                rnd = func_00153FA8(a);
                ang = (ang + off - 0x3FFF);
                off += 0x1555;
                ang = ang + (rnd % 12000u) - 0x1770;
                v[0] = func_0015A070(ang) * 240.0f;
                v[1] = func_0015A100(ang) * 240.0f + a->x14;
                v[0] += a->x10;
                v[2] = a->x20 * 0.5f + a->x18;
                o = func_001441B8(0x440);
                if (o) {
                    func_001EFEB0(o, D_004858F0, v, (s16)(ang + 0x801F), D_004858E0);
                    if (o) func_00194390(a->x404, o, o);
                }
            }
            func_00160128(a->x120, a->x24->x94, 3, D_00481E30);
        } else {
            a->x3FC = 1;
            a->x3F8 = a->x328 + 0x78;
        }
    }
}
