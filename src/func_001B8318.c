typedef struct Req { s32 cmd, a, b, c, res; } Req;
typedef struct Ent { s32 w0, w1, w2, w3, state, w5, w6; } Ent;
typedef struct Row { Ent e[4]; } Row;
extern Row D_010F4610[];
extern u8 D_010F45C0[];
extern Req D_010F4800;
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001906A8(s32, s32, s32);
s32 func_00190D60(s32, s32);
s32 _SetTLBEntry_2(s32);

s32 func_001B8318(s32 a) {
    if ((u32)(a - 0xD) >= 0x23U) return -1;
    return _SetTLBEntry_2(a);
}

s32 func_00190E18(s32 a, s32 b, s32 c) {
    Req *r = &D_010F4800;
    r->c = c;
    r->cmd = 10;
    r->a = a;
    r->b = b;
    if (func_001B08B0(D_010F45C0, 1, 0, r, 0x80, r, 0x80, 0, 0) >= 0) {
        if (r->res == 1) {
            func_001906A8(a, b, 2);
        }
        return r->res;
    }
    return 0;
}

s32 func_00190F28(s32 a, s32 b) {
    if (D_010F4610[a].e[b].state == 0) return 0;
    return func_00190E18(a, b, 0xFFF);
}

s32 func_00190EC8(s32 a, s32 b) {
    s32 r = 0;
    if (D_010F4610[a].e[b].state != 0) {
        r = func_00190D60(a, b) == 0x3FFFF;
    }
    return r;
}
