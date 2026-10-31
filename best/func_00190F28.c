/* identical to func_002D44F8 (matched), with its names changed by decompdecomp */
typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_008DD8D0[];
s32 func_002D43E8(s32, s32, s32);
s32 func_00190F28(s32 a, s32 b) {
    if (D_008DD8D0[a].e[b].state == 0) {
        return 0;
    }
    return func_002D43E8(a, b, 0xFFF);
}

s32 func_002E6020(s32, s32, s32 *, s32);
s32 func_002E6120(s32, s32, s32, s32);
s32 func_002E61E0(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 r;
    r = func_002E6020(arg0, arg1, arg2, arg3);
    if (r >= 0) {
        r = func_002E6120(arg0, arg1, *arg2, arg4);
        if (r >= 0) {
            r = 0;
        }
    }
    return r;
}

s32 func_002E6000(s32, s32, s32 *, s32);
s32 func_002E6040(s32, s32, s32 *);
s32 func_002E6250(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 r;
    if (arg2 == 0) {
        return -0x21C;
    }
    if (func_002E6040(arg0, arg1, arg2) >= 0) {
        return 0;
    }
    r = func_002E6000(arg0, arg1, arg2, arg3);
    if (r < 0) {
        return r;
    }
    return 0;
}

s32 func_002E6148(s32, s32, s32 *, s32, s32);
s32 func_002E62E0(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg5 & 2) {
        return func_002E6148(arg0, arg1, arg2, arg3, arg4);
    }
    return func_002E61E0(arg0, arg1, arg2, arg3, arg4);
}
