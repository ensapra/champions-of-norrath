typedef struct { s32 pad[4]; s32 mode; } Arg;
extern s32 func_0011BA18(s32);
extern s32 func_0010F6B0(s32, void *, s32);
extern s32 D_010C7628;
extern s32 D_010C7630[];
s32 func_00123100(Arg *a) {
    s32 buf[4];
    s32 i;
    switch (a->mode) {
    case 1:
        buf[0] = 0x78;
        buf[2] = 0x1A4;
        buf[3] = 0x16;
        for (i = 0; i < 2; i++) {
            buf[1] = 0x2D + i * 0x16;
            D_010C7630[i] = func_0010F6B0(D_010C7628, buf, func_0011BA18(0xFA + i));
        }
        return 0;
    default:
        return 0;
    }
}
