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
    Rpc40E0 *r = &D_008DDAC0;
    r->c = arg2;
    r->d = arg3;
    r->cmd = 6;
    r->a = arg0;
    r->b = arg1;
    if (func_002D8270(D_008DD880, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (r->res == 1) {
        func_002D3C78(arg0, arg1, 2);
        return r->res;
    }
    return r->res;
}

typedef struct { s32 f0; u8 *f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; } Ent1C;
extern Ent1C D_008DD8D0[][4];
u8 *func_002D39B0(s32);
s32 func_002D3398(s32, s32);

s32 func_002D4198(s32 arg0, s32 arg1, u8 *arg2) {
    u8 *q;
    s32 i;
    if (func_002D39B0(arg0)[0x72] != 1) {
        return 0;
    }
    q = D_008DD8D0[arg0][arg1].f4;
    for (i = 0; i < 6; i++) {
        q[0xC + i] = arg2[i];
    }
    *(s32 *)(q + 4) = 1;
    *(s32 *)(q + 8) = 6;
    return func_002D3398(arg0, arg1) == 1;
}

s32 func_002D4330(s32 arg0, s32 arg1) {
    u8 *p;
    if (D_008DD8D0[arg0][arg1].f10 == 0) {
        return 0;
    }
    p = func_002D39B0(arg0);
    if (p[0x72] != 1) {
        return 0;
    }
    if (p[0x64] < 2) {
        return 0;
    }
    if (p[0x66] < 2) {
        return 0;
    }
    return p[0x79] + ((long)p[0x7C] << 24) + (((long)p[0x7B] << 16) + ((long)p[0x7A] << 8));
}
