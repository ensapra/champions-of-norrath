typedef struct Req { s32 cmd, a, b; u8 mac[6]; s16 pad; s32 res; } Req;
extern Req D_010F4800;
extern u8 D_010F45C0[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001906A8(s32, s32, s32);

s32 func_00190C88(s32 a, s32 b, u8 *mac) {
    Req *r = &D_010F4800;
    s32 i;
    r->cmd = 8;
    r->a = a;
    r->b = b;
    for (i = 0; i < 6; i++) r->mac[i] = mac[i];
    if (func_001B08B0(D_010F45C0, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (r->res == 1) {
        func_001906A8(a, b, 2);
    }
    return r->res;
}
