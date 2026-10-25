/* identical to func_001B7038 (matched), with its names changed by decompdecomp */
extern u8 D_00440AC4[];

s32 func_002DE9F8(s32 *arg0, s32 *arg1) {
    volatile s32 *base = (volatile s32 *)(D_00440AC4 + 0x4EE4);
    if (base[2] < 0) {
        return 0x80008001;
    }
    if (arg0 != 0) {
        *arg0 = base[4];
    }
    if (arg1 != 0) {
        *arg1 = 0x80 - base[4];
    }
    return 0;
}

extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern s32 func_002DE9F8(s32 *, s32 *);

s32 func_001B7088(s32 arg0, s32 arg1) {
    s32 x = func_001B5C80();
    s32 r = func_002DE9F8(arg0, arg1);
    if (x != 0) {
        func_001B5CD8();
    }
    return r;
}

extern s64 func_001B6DC0(void);
extern s32 func_001B6A60(void *);
extern s32 func_001B68D0(s64);

s32 func_001B70E8(u32 a) {
    s32 *p = (s32 *)((a >> 10) << 6);
    if ((s32)a < 0) {
        return 0x80008002;
    }
    if ((a & 0x3FF) != p[2]) {
        return 0x80008002;
    }
    {
        volatile s32 *base = (volatile s32 *)(D_00440AC4 + 0x4EE4);
        if (base[7] == a) {
            return 0x80000010;
        }
    }
    if (p[3] & 1) {
        return 1;
    }
    {
        s64 t = func_001B6DC0();
        s32 f = p[3];
        *(s64 *)(p + 4) = t;
        f |= 1;
        p[3] = f;
        if (f & 2) {
            func_001B6A60(p);
            func_001B68D0(t);
        }
    }
    return 0;
}

s32 func_001B7198(s32 arg0) {
    s32 x = func_001B5C80();
    s32 r = func_001B70E8(arg0);
    if (x != 0) {
        func_001B5CD8();
    }
    return r;
}
