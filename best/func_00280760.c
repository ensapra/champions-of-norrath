extern s32 func_0015A198(f32, f32);
extern f32 D_0037EE80[];
extern u32 D_008D5D40[];
extern s8 D_008D5B48[], D_008D5B58[], D_00437052[], D_00437053[];
void func_002806B8(void) {
    s32 i;
    f32 *g = D_0037EE80;
    u32 *list = D_008D5D40;
    for (i = 9; i >= 0; i--) {
        u8 *obj = (u8 *)*list++;
        f32 *p = (f32 *)(obj + 0x10);
        f32 v[3];
        s32 r;
        v[0] = p[0] - g[0];
        v[1] = p[1] - g[1];
        v[2] = p[2] - g[2];
        r = func_0015A198(v[0], v[1]);
        *(s16 *)(obj + 0x38) = -0x4000 - r;
    }
}
s32 func_00280760(s32 i, s32 d) {
    s32 m;
    if (d == 0) { D_008D5B48[i] = 0; return 0; }
    m = D_00437052[i * 636] - 1;
    if (d > 0) {
        s8 *p = &D_008D5B48[i];
        if (*p < m) { *p = (u8)*p + d; return 1; }
    }
    if (d < 0) {
        s8 *p = &D_008D5B48[i];
        if (*p > 0) { *p = (u8)*p + d; return 1; }
    }
    return 0;
}
s32 func_00280810(s32 i, s32 d) {
    if (d == 0) { D_008D5B58[i] = -1; return 0; }
    if (d > 0) {
        s8 *p = &D_008D5B58[i];
        if (*p < D_00437053[i * 636] - 2) { *p = (u8)*p + d; return 1; }
    }
    if (d < 0) {
        s8 *p = &D_008D5B58[i];
        if (*p >= 0) { *p = (u8)*p + d; return 1; }
    }
    return 0;
}
