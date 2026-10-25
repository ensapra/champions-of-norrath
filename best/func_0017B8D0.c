extern s32 iSignalSema(s32);
extern volatile s32 D_001D0518[], D_001D051C[], D_001D04E8[], D_001D04F4[], D_001D04D4[], D_001D04E0[];
extern volatile s32 D_010ECC40[], D_010ECC44[];

s32 func_0017B6C8(void *, s32, u8 *, s32);
s32 func_0017C418(s32);
s32 func_001B5C80(void);
void func_001B5CD8(void);

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

s32 func_0017B810(void *a0, u32 a1, u8 *msg, u32 len) {
    u8 *p = msg;
    u32 i;
    if (*p++ != 0xF0) return -1;
    if (len < 2) return -1;
    i = 2;
    do {
        if (*p++ == 0xF7) return func_0017B6C8(a0, a1, msg, i);
        i++;
    } while (len >= i);
    return -1;
}

s32 func_0017B8D0(s32 a) {
    s32 old;
    s32 r;
    if (func_0017C418(1) != 0) return 0;
    r = func_001B5C80();
    old = D_010ECC40[0];
    D_010ECC40[0] = a;
    D_010ECC44[0] = 0;
    if (r != 0) func_001B5CD8();
    return old;
}
