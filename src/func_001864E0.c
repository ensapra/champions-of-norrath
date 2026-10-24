extern s32 D_00362CC0[];extern s32 D_00362CC4[];
void func_001864E0(s32 a,s32 b){*D_00362CC0=a;*D_00362CC4=b;}

void func_00186580(s32 a, s32 b, s32 c);
void func_001864F8(s32 a, s32 *p) {
    u64 r;
    if (p) {
        s32 x = *D_00362CC0 + p[0];
        s32 y = *D_00362CC4 + p[1];
        s32 z = x + p[2];
        s32 w = y + p[3];
        r = (u64)x | ((u64)z << 16) | ((u64)y << 32) | ((u64)w << 48);
    } else {
        r = 0x01BF0000027F0000ULL;
    }
    func_00186580(a, 0x40, r);
}

typedef unsigned int u128 __attribute__((mode(TI)));
void func_001916D0(s32, s32);
void func_001917D8(s32, s32);
void func_00191860(s32, u128);
void func_001919C8(s32, s32, s32);
void func_00191878(s32);
void ovl_ntgui2_func_00191830(s32);
void func_00191678(s32);
void func_00186580(s32 a, s32 b, s32 c) {
    union { u64 d[2]; u128 q; } u;
    func_001916D0(a, 0);
    func_001917D8(a, 0);
    u.d[0] = 0x1000000000008000ULL;
    u.d[1] = 0xE;
    func_00191860(a, u.q);
    func_001919C8(a, b, c);
    func_00191878(a);
    ovl_ntgui2_func_00191830(a);
    func_00191678(a);
}

extern struct { u8 *p; s32 pad[4]; } D_00362CC8;
extern u8 D_010F44A8[];
extern char D_00468878[];
void func_001A2660(void *, s32, s32);
s32 func_001869E0(u8 *a0) {
    s32 r = -1;
    if (a0) {
        D_00362CC8.p = a0;
        func_001A2660(D_010F44A8, 0, 0x88);
        r = (*(s32 (**)(void *, void *))(D_00362CC8.p + 0x110))(D_010F44A8 + 0x40, D_00468878 + 8) != 0;
    }
    return r;
}
