extern s32 D_0037F720[];
extern char D_00463E80[], D_00463E90[];
f32 D_004800D0;
void func_00172890(char *, s32, char *, s32);

void func_00180820(s32 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                   f32 fa, f32 fb, f32 fc, s32 s0, s32 x, s32 y, s32 z, s32 w)
{
    f32 *pf = (f32 *)p;
    f32 r, f14, f21, f0, f1, f2, f3;
    s32 t2, t3;
    if (w != 0) func_00172890(D_00463E80, 0x1F6, D_00463E90, (s32)__builtin_return_address(0));
    if (x < 0) x = 0;
    if (y < 0) y = 0;
    if (x >= 4) x = 3;
    if (y >= 4) y = 3;
    f14 = fc * 0.00390625f;
    p[0] = ((y * 4 + x) * 16) >> 4;
    r = 1.0f / (f32)D_0037F720[x];
    p[3] = w;
    pf[6] = f14;
    f21 = fa * 100.0f;
    fb = fb * 100.0f;
    if (y == 2) {
        pf[4] = f14;
        f0 = f21 * D_004800D0;
    } else {
        t3 = (z >> 4) << 5;
        t2 = (z & 0xF) << 5;
        f0 = (fb - f21) * r;
        p[4] = (t2 + 1) * 16;
        p[5] = (t3 + 1) * 16;
        p[8] = (t2 + 0x1F) * 16;
        p[9] = (t3 + 0x1F) * 16;
    }
    pf[7] = f0;
    pf[11] = f21;
    p[10] = (s32)p;
    if (y == 3) {
        f1 = (f32)a2;
        f2 = (f32)a3;
        f3 = (f32)a4;
        pf[12] = (f32)a1;
    } else {
        f1 = (f32)a2 + 8388608.0f;
        f2 = (f32)a3 + 8388608.0f;
        f3 = (f32)a4 + 8388608.0f;
        pf[12] = (f32)a1 + 8388608.0f;
    }
    pf[13] = f1;
    pf[14] = f2;
    pf[15] = f3;
    pf[16] = (f32)(a5 - a1) * r;
    pf[17] = (f32)(a6 - a2) * r;
    pf[18] = (f32)(a7 - a3) * r;
    pf[19] = (f32)(s0 - a4) * r;
}
