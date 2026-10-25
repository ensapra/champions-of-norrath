typedef struct { u8 b[12]; } __attribute__((packed)) B12;
extern u8 D_010F45C0[];
extern s32 D_010F4800[];
s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,s32,s32);
void func_001906A8(s32, s32, s32);
s32 func_00190FD8(s32 a, s32 b, B12 *c) {
    s32 r;
    D_010F4800[1] = a;
    D_010F4800[0] = 11;
    D_010F4800[2] = b;
    *(B12 *)&D_010F4800[3] = *c;
    if (func_001B08B0(D_010F45C0, 1, 0, D_010F4800, 128, D_010F4800, 128, 0, 0) < 0) return 0;
    r = D_010F4800[7];
    if (r == 1) {
        func_001906A8(a, b, 2);
        r = D_010F4800[7];
    }
    return r;
}
