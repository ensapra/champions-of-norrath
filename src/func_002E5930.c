s32 func_002E4F00(s32, s32 *, s32, s32, s32);
s32 func_002E4E48(s32, s32, s32 *, s32, s32);
s32 func_002E4F58(s32, s32, s32 *, s32, s32);

s32 func_002E5930(s32 a0, s32 *p, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 r;
    p[0] = a2;
    p[1] = a3;
    p[2] = a5;
    r = func_002E4F00(a0, p, 3, a4, a5);
    if (r >= 0) {
        if (func_002E4E48(a0, 9, p, a5 + 12, a5 + 12) < 0) return -0x21E;
        r = func_002E4F58(a0, a4, p, 3, a5);
        if (r >= 0) r = p[0];
    }
    return r;
}

s32 func_002FAB30(s32, s32, s32);
s32 func_00301FFC(s32, s32, s32);
extern s8 D_008EAA98[];
s32 func_002FABC0(s32 a0, s32 a1, s32 a2) {
    s32 x = func_002FAB30(a0, a1, 0);
    s32 y = func_002FAB30(a0, a2, 0);
    return func_00301FFC(y, x, D_008EAA98[a0]);
}
