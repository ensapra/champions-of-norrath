/* identical to func_002DD4E0 (matched), with its names changed by decompdecomp */
extern s32 sceSifGetReg(s32);
extern void func_001ADBA0(void);
extern void func_001B7DF0(s32, s32);

s32 func_001B5B20(void) {
    s32 val = sceSifGetReg(4);
    if (val & 0x40000) {
        func_001ADBA0();
        func_001B7DF0(1, 1);
        func_001B7DF0(0, 1);
        return 1;
    }
    return 0;
}

typedef struct { s32 v; } Arg2E5118;

s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E4F00(s32, void *, s32, s32, s32);
s32 func_002E4F58(s32, s32, void *, s32, s32);
s32 func_002E4FB0(s32, void *, s32, s32);
s32 func_002E5040(s32, s32, void *, s32);

s32 func_002E5070(s32 sock, s32 *p, s32 a2, s32 n, s32 a4)
{
    s32 len = n * 8;
    s32 r;
    p[1] = a4;
    p[0] = n;
    r = func_002E4F00(sock, p, 2, a2, len);
    if (r < 0) {
        return r;
    }
    if (func_002E4E48(sock, 0x14, p, len + 8, len | 4) < 0) {
        return -0x21E;
    }
    r = func_002E4F58(sock, a2, p, 2, len);
    if (r >= 0) {
        r = p[0];
    }
    return r;
}

s32 func_002E5118(s32 sock, s32 *p, s32 flags, s32 a3, s32 a4, s32 a5, s32 a6, Arg2E5118 a7)
{
    s32 r;
    p[1] = a5;
    p[2] = a6;
    p[0] = flags;
    p[3] = 0;
    if (flags & 0x80) {
        p[3] = a7.v;
    }
    r = func_002E4FB0(sock, p, 5, a4);
    if (r < 0) {
        return r;
    }
    p[4] = r;
    if (func_002E4E48(sock, 6, p, r + 0x14, 0x14) < 0) {
        return -0x21E;
    }
    r = func_002E4F58(sock, a3, p, 1, 0x10);
    if (r >= 0) {
        r = p[0];
    }
    return r;
}

s32 func_002E51D8(s32 sock, s32 *p, s32 a2, s32 n, s32 a4)
{
    s32 r;
    p[0] = n;
    r = func_002E4F00(sock, p, 1, a4, 0x10);
    if (r < 0) {
        return r;
    }
    if (func_002E4E48(sock, 7, p, 0x14, n + 0x14) < 0) {
        return -0x21E;
    }
    r = func_002E5040(sock, a2, p, 5);
    if (r >= 0) {
        r = p[0];
    }
    return r;
}
