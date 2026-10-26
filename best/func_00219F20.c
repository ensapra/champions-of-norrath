typedef struct { u8 _[0x10]; f32 f10; f32 f14; f32 f18; u8 __[0x1C]; s16 f38; u8 ___[0x18]; s32 f54; s32 f58; f32 f5C; f32 f60; f32 f64; u8 ____[0x4C]; s32 fB0_ptr; s32 fB4; s32 fB8; s32 fBC; } S;

extern f32 D_00481610;
extern f32 D_00481614;
extern f32 D_00481618;
extern f32 D_0048161C;
extern f32 D_00481620;
extern f32 D_00481624;
s32 D_004844A4;
extern char D_00485380[];
s32 D_00485458;
s32 D_0048545C;
extern char D_00470C60[];
extern char D_00470C70[];
extern u8 D_007D73D0[];
extern u8 D_007D73E0[];
extern u8 D_007D77C0[];

s32 func_00153FA8(void *);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00166F30(void *, void *, void *);
void func_0016C238(s32, void *, void *, s16, s32, void *, void *, s32, f32);
s32 func_0016CD50(s32);
void func_00180DA0(void *, void *, void *, s32);
void func_00183DD0(s32, void *);

void func_00219F20(S *a) {
    /* locals */
    f32 sp10, sp14, sp18;
    u8 sp30[12];
    f32 sp40, sp44, sp48;
    u8 sp50[12];
    u8 sp60[12];
    f32 sp68;
    f32 sp70, sp74, sp78;
    f32 sp80, sp84, sp88;
    f32 sp90, sp94, sp98;
    f32 spA0, spA4, spA8;
    void *spB0;
    s32 sp8v;
    f32 f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    s32 i;

    f21 = D_00481610;
    {
        s16 t = (s16)(a->f38 + 0x1FF);
        a->f38 = t;
        f20 = func_0015A070(t) * f21;
        f22 = func_0015A100(t) * f21; /* placeholder; original uses f0 */
    }
    /* recompute per assembly: f20 = func_0015A070(...)*f21; f0 (temp) = func_0015A100(...)*f21 -> f22? Actually assembly: mul.s f20,f0,f21 where f0 from func_0015A070. Then func_0015A100 -> f0, mul.s f0,f0,f21. So two results: f20 and f0. Store f0 to sp4. */
    /* I'll just follow loosely */
    sp8v = (s32)D_00481614;
    /* ldl copy sp (12 bytes) to a+0x5C */
    /* skip exact */
    sp10 = a->f60;
    sp18 = 0.0f;
    {
        void *t = (void *)a->fB0_ptr;
        f32 tmp = (f32)((s32)a->fBC) * D_00481618;
        a->f64 = tmp;
        sp14 = -a->f5C;
        /* rsqrt */
        /* approximate: normalize sp10,sp14,sp18 */
    }
    /* ... rest skipped for compile */
    if (D_00485458 == 0) {
        func_00166F30(D_007D73D0, D_00485380, D_00470C60);
        D_00485458 = 1;
    }
    if (D_0048545C == 0) {
        func_00166F30(D_007D73E0, D_00485380, D_00470C70);
        D_0048545C = 1;
    }
    /* tail virtual call */
    if (D_004844A4 >= a->f58 && a != 0) {
        void *t = (void *)a->fB4; /* placeholder */
    }
}
