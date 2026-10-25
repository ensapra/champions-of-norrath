extern vu32 *D_004448C0[];
extern s32 D_0047B388[];
extern void func_002D2C70(void *, int);
extern void func_002D2DB0(void *);

s32 func_002D2CD0(s32 a) {
    char buf[0x20];
    s32 i;
    s32 r = *(vu32 *)0x1000E000 & 1;
    for (i = 9; i >= 0; i--) {
        if (D_0047B388[9 - i] != 0) {
            vu32 *p = D_004448C0[9 - i];
            p[0x80 / 4] = 0;
            p[0] = 0;
            p[0x30 / 4] = 0;
            p[0x10 / 4] = 0;
            p[0x50 / 4] = 0;
            p[0x40 / 4] = 0;
        }
    }
    *(vu32 *)0x1000E010 = 0xFF1F;
    *(u32 *)0x1000E010 = *(vu32 *)0x1000E010 & 0xFF1F0000;
    func_002D2C70(buf, 0x14);
    func_002D2DB0(buf);
    if (a == 1) *(vu32 *)0x1000E000 |= 1;
    return r;
}
