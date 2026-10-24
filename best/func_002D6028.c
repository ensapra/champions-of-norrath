extern s32 sceSifGetReg_2(s32);
extern void func_002D5560(void);
extern void func_002DF7B0(s32, s32);

s32 func_002DD4E0(void) {
    s32 val = sceSifGetReg_2(4);
    if (val & 0x40000) {
        func_002D5560();
        func_002DF7B0(1, 1);
        func_002DF7B0(0, 1);
        return 1;
    }
    return 0;
}

typedef struct { u8 type; u8 val; } QEnt;
typedef struct { s32 f0; s32 f4; QEnt e[512]; } Queue;
extern s32 D_00444958[];
extern s32 D_008DE0C0[];
extern Queue D_008DE0C8;
extern s32 iSignalSema_2(s32);

s32 func_002D6028(u32 a0) {
    s32 i;
    if (a0 >= 0x80 || D_00444958[0] == 0) {
        return -1;
    }
    i = D_008DE0C8.f4 & 0x1FF;
    D_008DE0C8.f4 = i + 1;
    D_008DE0C8.e[i].type = 1;
    D_008DE0C8.e[i].val = a0;
    iSignalSema_2(D_008DE0C0[0]);
    return a0;
}

typedef struct { u8 pad0[0x30]; s32 size; } NetBuf;
extern char D_0047BE90[];
extern char D_0047BEC8[];
extern s32 func_002E4BE0(NetBuf *, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_002E4E48(NetBuf *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 lim;
    s32 ssize;
    s32 rsize;
    ssize = (arg3 + 0x3F) & ~0x3F;
    rsize = (arg4 + 0x3F) & ~0x3F;
    lim = arg0->size;
    if (lim < ssize || lim < rsize) {
        func_002D70D0(D_0047BE90);
        func_002D70D0(D_0047BEC8, arg1, ssize, rsize, lim);
        return -0x21F;
    }
    return func_002E4BE0(arg0, arg1, 0, arg2, ssize, arg2, rsize, 0, 0);
}

extern void *func_00301FFC(void *, void *, s32);

s32 func_002E4F00(NetBuf *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    s32 rem;
    arg2 *= 4;
    rem = arg0->size - arg2;
    if (arg3 != 0) {
        if (arg4 < 0 || rem < arg4) {
            return -0x21F;
        }
        func_00301FFC((void *)(arg2 + arg1), arg3, arg4);
    }
    return 0;
}
