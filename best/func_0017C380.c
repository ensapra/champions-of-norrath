/* identical to func_002E2E40 (matched), with its names changed by decompdecomp */
s32 SignalSema(s32);
s32 func_001B08B0(void *, s32, s32, s32, s32, void *, s32, s32, s32);
s32 func_0017C210(s32);
extern s32 D_001D04E8[];
extern u8 D_001D0540[];
extern u8 D_001D1690[];

s32 func_0017C380(void)
{
    s32 v;
    if (func_0017C210(2) == 0) {
        return 0;
    }
    if (func_001B08B0(D_001D1690, 14, 0, 0, 0, D_001D0540, 4, 0, 0) < 0) {
        SignalSema(D_001D04E8[0]);
        return 0;
    }
    v = *(s32 *)((u32)D_001D0540 | 0x20000000);
    SignalSema(D_001D04E8[0]);
    return v;
}

s32 func_002FD2E0(s32, s32);

s32 func_002FD5A8(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 *a7) {
    if (a4 == a6) {
        if (func_002FD2E0(a0, a5)) {
            a7[2] = a2;
            return 0;
        }
    }
    if (func_002FD2E0(a0, a3)) {
        a7[0] = a4;
        a7[1] = a2;
        a7[3] = 1;
    }
    return 0;
}

s32 func_002FD640(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    return (a4 != a3) ? 1 : 6;
}

s32 func_002FD658(void *a0, s32 a1, s32 a2, s32 a3, s32 *a4) {
    if (func_002FD2E0((s32)a0, a2)) {
        a4[0] = a3;
        a4[2] = 8;
        a4[1] = a1;
        return (a1 & 6) == 4;
    } else {
        void *obj = *(void **)((char *)a0 + 8);
        char *vt = *(char **)((char *)obj + 4);
        vt += 0x10;
        return (*(s32 (**)(void *, s32, s32, s32, s32 *, void *))(vt + 4))(
            (char *)obj + *(s16 *)vt, a1, a2, a3, a4, obj);
    }
}
