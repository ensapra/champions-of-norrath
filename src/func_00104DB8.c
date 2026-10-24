extern u8 D_010B47C0[];
extern s32 D_010B4780[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, void *);

s32 func_00104CA8(s32 cmd, s32 data) {
    s32 mode = 0;
    if (cmd & 0x8000) mode = 0x40;
    if (cmd & 0x1000) {
        func_001B08B0(D_010B47C0, cmd, 0, (void *)data, 0x40, D_010B4780, mode, 0, 0);
    } else {
        D_010B4780[0] = data;
        func_001B08B0(D_010B47C0, cmd, 0, D_010B4780, 0x10, D_010B4780, mode, 0, 0);
    }
    return D_010B4780[0];
}

s32 WaitSema(s32);
s32 func_001AF710(char *, ...);
s32 func_001B4110(void *, s32, s32, s32, s32, s32);
s32 func_0017D0A0(s32 *);
extern char D_004C61F0[];
extern u8 D_00507A80[];

void func_00104DB8(s32 sema) {
    s32 st;
    while (1) {
        WaitSema(sema);
        func_001AF710(D_004C61F0);
        while (func_001B4110(D_00507A80, 0x4402, 0, 0, 0, 0) < 0) ;
        do {
            while (func_0017D0A0(&st) == 0) ;
        } while (st != 0);
    }
}
