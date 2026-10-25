extern s32 D_001D2108[];
extern struct { s32 n; u8 pad[0x8C]; s32 st; s32 id; s32 arg; } D_010EE080;
extern u8 D_010EE120[];
extern u8 D_010EE180[];
extern u8 D_010EE1C0[];
extern u8 D_004CC800[];
void WaitSema(s32);
void func_001AF710(void *, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
void func_0017EBF8(void);
s32 func_0017E7B8(s32 id, s32 arg) {
    s32 r;
    if (D_001D2108[0] == -1) return -1;
    if (id >= D_010EE080.n) return -11;
    D_010EE180[0] = id;
    WaitSema(D_001D2108[0]);
    r = func_001B08B0(D_010EE120, 3, 1, D_010EE180, 0x10, D_010EE1C0, 0x10, (void *)func_0017EBF8, 0);
    if (r != 0) {
        func_001AF710(D_004CC800, r);
        return -2;
    }
    D_010EE080.arg = arg;
    D_010EE080.st = 3;
    D_010EE080.id = id;
    return 0;
}
