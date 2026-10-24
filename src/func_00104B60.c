extern u8 D_010B4580[];
extern s32 D_001BAC64[];
extern char D_004C6178[];
extern char D_004C6190[];
extern char D_004C6198[];
s32 func_00104CA8(s32, void *);
s32 func_001B4778(s32);
s32 func_001B4900(void *, s32);
s32 func_001A2850(char *, ...);

void func_00104B60(void) {
    s32 r;
    s32 h = func_00104CA8(0x9080, D_010B4580);
    s32 *pid = D_001BAC64;
    r = func_001B4778(h);
    *pid = r;
    if (r == 0) {
        func_001A2850(D_004C6178, D_004C6190);
        return;
    }
    r = func_001B4900(D_010B4580, r);
    if (r < 0) {
        func_001A2850(D_004C6198, r);
        return;
    }
}
