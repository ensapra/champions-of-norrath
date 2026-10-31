/* identical to func_002D45A8 (matched), with its names changed by decompdecomp */
typedef struct { u8 b[12]; } __attribute__((packed)) B12;
extern u8 D_008DD880[];
extern s32 D_008DDAC0[];
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
void func_002D3C78(s32, s32, s32);
s32 func_00190FD8(s32 a, s32 b, B12 *c) {
    s32 r;
    D_008DDAC0[1] = a;
    D_008DDAC0[0] = 11;
    D_008DDAC0[2] = b;
    *(B12 *)&D_008DDAC0[3] = *c;
    if (func_002D8270(D_008DD880, 1, 0, D_008DDAC0, 128, D_008DDAC0, 128, 0, 0) < 0) return 0;
    r = D_008DDAC0[7];
    if (r == 1) {
        func_002D3C78(a, b, 2);
        r = D_008DDAC0[7];
    }
    return r;
}
