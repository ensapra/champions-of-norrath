s32 Deci2Call(s32, void *);

void func_001B8028(s32 a, s8 b)
{
    s32 buf[2];
    buf[0] = a;
    buf[1] = b;
    Deci2Call(-7, buf);
}

typedef struct { s32 cmd; s32 a; s32 b; s32 c; s32 d; s32 res; s32 pad[26]; } Rpc40E0;
extern Rpc40E0 D_010F4800;
extern u8 D_010F45C0[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_001906A8(s32, s32, s32);

s32 func_00190B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_010F4800.c = arg2;
    D_010F4800.d = arg3;
    D_010F4800.cmd = 6;
    D_010F4800.a = arg0;
    D_010F4800.b = arg1;
    if (func_001B08B0(D_010F45C0, 1, 0, &D_010F4800, 0x80, &D_010F4800, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (D_010F4800.res == 1) {
        func_001906A8(arg0, arg1, 2);
    }
    return D_010F4800.res;
}

typedef struct { s32 f0; u8 *f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; } Ent1C;
extern Ent1C D_010F4610[][4];
u8 *func_001903E0(s32, s32);
s32 func_0018FDC8(s32, s32);

s32 func_00190BC8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 *q;
    u8 *d;
    s32 i;
    if (func_001903E0(arg0, arg1)[0x72] != 1) {
        return 0;
    }
    q = (s32 *)D_010F4610[arg0][arg1].f4;
    d = (u8 *)(q + 3);
    for (i = 0; i < 6; i++) {
        *(d + i) = *(arg2 + i);
    }
    q[1] = 1;
    q[2] = 6;
    if (func_0018FDC8(arg0, arg1) != 1) {
        return 0;
    }
    return 1;
}

s32 func_00190D60(s32 arg0, s32 arg1) {
    u8 *p;
    if (D_010F4610[arg0][arg1].f10 == 0) {
        return 0;
    }
    p = func_001903E0(arg0, arg1);
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
