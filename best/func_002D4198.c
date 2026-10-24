void func_002D2B50(void *);
void func_002D3130(void *p) {
    func_002D2B50(p);
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)p = (((*(s32 *)p & ~0xC) | 4) & ~1) | 0x100;
}

typedef struct { s32 cmd; s32 a; s32 b; s32 c; s32 d; s32 res; s32 pad[26]; } Rpc40E0;
extern Rpc40E0 D_008DDAC0;
extern u8 D_008DD880[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_002D3C78(s32, s32, s32);

s32 func_002D40E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_008DDAC0.c = arg2;
    D_008DDAC0.d = arg3;
    D_008DDAC0.cmd = 6;
    D_008DDAC0.a = arg0;
    D_008DDAC0.b = arg1;
    if (func_002D8270(D_008DD880, 1, 0, &D_008DDAC0, 0x80, &D_008DDAC0, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (D_008DDAC0.res == 1) {
        func_002D3C78(arg0, arg1, 2);
    }
    return D_008DDAC0.res;
}

typedef struct { s32 f0; u8 *f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; } Ent1C;
extern Ent1C D_008DD8D0[][4];
u8 *func_002D39B0(s32, s32);
s32 func_002D3398(s32, s32);

s32 func_002D4198(s32 arg0, s32 arg1, u8 *arg2) {
    s32 *q;
    u8 *d;
    s32 i;
    if (func_002D39B0(arg0, arg1)[0x72] != 1) {
        return 0;
    }
    q = (s32 *)D_008DD8D0[arg0][arg1].f4;
    d = (u8 *)(q + 3);
    for (i = 0; i < 6; i++) {
        *(d + i) = *(arg2 + i);
    }
    q[1] = 1;
    q[2] = 6;
    if (func_002D3398(arg0, arg1) != 1) {
        return 0;
    }
    return 1;
}

s32 func_002D4330(s32 arg0, s32 arg1) {
    u8 *p;
    if (D_008DD8D0[arg0][arg1].f10 == 0) {
        return 0;
    }
    p = func_002D39B0(arg0, arg1);
    if (p[0x72] != 1) {
        return 0;
    }
    if (p[0x64] < 2) {
        return 0;
    }
    if (p[0x66] < 2) {
        return 0;
    }
    return p[0x79] + ((long)p[0x7A] << 8) + ((long)p[0x7B] << 16) + ((long)p[0x7C] << 24);
}
