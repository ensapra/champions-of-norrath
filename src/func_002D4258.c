typedef struct Req { s32 cmd, a, b; u8 mac[6]; s16 pad; s32 res; } Req;
extern Req D_008DDAC0;
extern u8 D_008DD880[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_002D3C78(s32, s32, s32);

s32 func_002D4258(s32 a, s32 b, u8 *mac) {
    Req *r = &D_008DDAC0;
    s32 i;
    r->cmd = 8;
    r->a = a;
    r->b = b;
    for (i = 0; i < 6; i++) r->mac[i] = mac[i];
    if (func_002D8270(D_008DD880, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (r->res == 1) {
        func_002D3C78(a, b, 2);
    }
    return r->res;
}
