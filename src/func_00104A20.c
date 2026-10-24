extern void func_001B6328(s32);
void func_001001C8(void) {
    func_001B6328(0);
}

extern char D_010B4400[];
extern void func_0017B760(void *, s32, s32);

void func_00104A20(void) {
    func_0017B760(D_010B4400, 0, 0x601490);
}

extern u8 D_010B4580[];
extern s32 D_001BAC64[];
extern char jtbl_004C006C[];
s32 func_00104CA8(s32, void *);
s32 func_001B4778(s32);
s32 func_001B4900(void *, s32);
s32 func_001A2850(char *, ...);

void func_00104B60(void) {
    s32 r = func_001B4778(func_00104CA8(0x9080, D_010B4580));
    D_001BAC64[0] = r;
    if (r == 0) {
        func_001A2850(jtbl_004C006C + 0x610C, jtbl_004C006C + 0x6124);
        return;
    }
    r = func_001B4900(D_010B4580, r);
    if (r < 0) {
        func_001A2850(jtbl_004C006C + 0x612C, r);
    }
}

extern u8 D_010B47C0[];
s32 func_001B06E0(void *, s32, s32);

s32 func_00104C10(void) {
    s32 i;
    do {
        if (func_001B06E0(D_010B47C0, 0x12346, 0) < 0) {
            while (1) ;
        }
        for (i = 0; i < 10000; i++) ;
    } while (*(s32 *)(D_010B47C0 + 0x24) == 0);
    return 1;
}
