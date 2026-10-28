extern f32 D_00482074, D_00482078;
extern s32 D_00485C80, D_00485C88, D_00485C90, D_00485C8C, D_00485C94;
extern s16 *D_00485C84;
extern s32 func_002FB320(f32);
extern s32 func_002F0860(s32);
extern s32 func_002F0B98(s32);
extern s32 func_002FBB50(s32);
extern s32 func_002676B0(s32 *, s32, s32 *);

#define SC(v) ((v) * 0.25f)
#define CHK(x) if ((x) > D_00482074 || (x) < D_00482078) D_00485C80 = 1

s32 func_00267D88(u8 *a0, s32 n, s16 *a2, s32 *a3, s32 *a4, s32 max, s32 *a6, u8 *a7) {
    s32 i;
    f32 x;
    s32 *o;
    s32 arr[6];
    if (max < n) return 1;
    D_00485C88 = 0;
    D_00485C84 = a2;
    i = 0;
    a2[0] = 0x4567;
    D_00485C88 = 1;
    D_00485C94 = 0;
    D_00485C80 = 0;
    D_00485C8C = (s32)a6;
    D_00485C90 = (s32)a7;
    if (n > 0) {
        u8 *p = a0;
        o = a6;
        for (; i < n; i++) {
            ((s16 *)a4)[i] = i;
            x = SC(*(f32 *)(p + 0x14)); CHK(x);
            o[0] = func_002FBB50(func_002F0860(func_002FB320(x)));
            x = SC(*(f32 *)(p + 0x18)); CHK(x);
            o[2] = func_002FBB50(func_002F0860(func_002FB320(x)));
            x = SC(*(f32 *)(p + 0x1C)); CHK(x);
            o[4] = func_002FBB50(func_002F0860(func_002FB320(x)));
            x = SC(*(f32 *)(p + 8)); CHK(x);
            o[1] = func_002FBB50(func_002F0B98(func_002FB320(x)));
            x = SC(*(f32 *)(p + 0xC)); CHK(x);
            o[3] = func_002FBB50(func_002F0B98(func_002FB320(x)));
            x = SC(*(f32 *)(p + 0x10)); CHK(x);
            o[5] = func_002FBB50(func_002F0B98(func_002FB320(x)));
            a7[i] = p[0x24] >> 7;
            o += 6;
            p += 0x3C;
        }
    }
    if (D_00485C80 == 0) {
        for (i = 0; i < 3; i++) {
            arr[i * 2] = 0x77359400;
            arr[i * 2 + 1] = 0x88CA6C00;
        }
        {
            s32 r = func_002676B0(a4, n, arr);
            *a3 = D_00485C88;
            if (r) return 1;
            if (D_00485C80) return 1;
            return 0;
        }
    }
    return 1;
}
