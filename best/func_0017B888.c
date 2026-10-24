s32 func_001AFD10(u32,void*,s32,s32,s32,s32);
s32 func_001B0318(s32 a,s32 b,s32 c,void*p){s32*q=p;return func_001AFD10(0x80000008,p,64,q[9],q[10],q[11])?0:0x800;}

extern s32 iSignalSema(s32);
extern volatile s32 D_001D0518[], D_001D051C[], D_001D04E8[], D_001D04F4[], D_001D04D4[], D_001D04E0[], D_010ECC40[];

void func_0017B938(s32 *arg0) {
    D_001D0518[0] = *arg0;
    D_001D051C[0] = D_001D0518[0];
    if (D_001D0518[0] == 0xB) {
        D_001D0518[0] = 0;
        D_001D04F4[0] = 0;
        return;
    }
    iSignalSema(D_001D04E8[0]);
    if (D_001D04D4[0] && D_010ECC40[0]) {
        iSignalSema(D_001D04E0[0]);
    } else {
        D_001D04F4[0] = 0;
    }
    D_001D0518[0] = 0;
}

s32 func_0017B6C8(void *, s32, u8 *, s32);

s32 func_0017B888(void *a, s32 b, u8 *c) {
    s32 t;
    switch (*c) {
    case 0xF9:
        t = 5;
        break;
    case 0xFD:
        t = 7;
        break;
    default:
        return -1;
    }
    return func_0017B6C8(a, b, c, t);
}
