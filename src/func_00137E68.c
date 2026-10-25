s32 func_0010F6B0(s32, void *, s32);
s32 func_00110770(s32, s32, s32, void *);
s32 func_0011BA18();
void func_00138070(void);
extern s32 D_010CE538[];
extern s32 D_010CE540[];
extern u8 D_010CE558[];
extern s32 D_010CE55C[];

void func_00137E68(void) {
    s32 buf[4];
    s32 i;
    s32 y = 0x2D;
    s32 *p;
    D_010CE538[0] = func_00110770(func_0011BA18(0xAE), 2, 0, D_010CE558);
    buf[0] = 0x78;
    buf[2] = 0x1A4;
    buf[3] = 0x16;
    p = D_010CE540;
    for (i = 0; i < 6; i++) {
        buf[1] = y;
        *p = func_0010F6B0(D_010CE538[0], buf, func_0011BA18(0xAF + i));
        y += 0x16;
        p++;
    }
    D_010CE55C[0] = 0;
    func_00138070();
}
