typedef struct { s32 cmd; s32 a; s32 b; s32 c; s32 d; s32 res; s32 pad[26]; } Rpc40E0;
extern Rpc40E0 D_008DDAC0;
extern u8 D_008DD880[];
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
s32 func_002D3C78(s32, s32, s32);

s32 func_002D40E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Rpc40E0 *r = &D_008DDAC0;
    s32 result;
    r->c = arg2;
    r->d = arg3;
    r->cmd = 6;
    r->a = arg0;
    r->b = arg1;
    if (func_002D8270(D_008DD880, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) {
        return 0;
    }
    result = r->res;
    if (result == 1) {
        func_002D3C78(arg0, arg1, 2);
        result = r->res;
    }
    return result;
}
