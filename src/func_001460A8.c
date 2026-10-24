extern u8 D_004CB130[];
extern s32 D_001C6894[];
s32 func_001B34C0(void *, void *);

void func_001460A8(void) {
    u8 buf[0x40];
    D_001C6894[0] = func_001B34C0(D_004CB130, buf);
}

extern s32 D_001C688C[];
extern s32 D_001C6890[];
extern s32 D_001C6898[];
extern s32 D_001C689C[];
extern s32 D_001C68A0[];
extern u8 D_004CB158[];
void func_0013F450(s32);
void func_0013CB90(s32);
void func_0013D440(s32);
void ovl_ntgui2_func_0013E928(s32);
void func_0013DE80(s32);
void func_0013E330(s32);
void func_0013D2B8(s32);
void func_0013B658(void *, s32);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
void func_00147350(void);
void func_00147380(void);
void func_00147460(void);
void func_00146AB8(void);

void func_001460E8(s32 arg0) {
    u8 buf[0x20];
    D_001C688C[0] = arg0;
    D_001C689C[0] = 0;
    D_001C6890[0] = 0;
    D_001C68A0[0] = 0;
    D_001C6898[0] = 0;
    func_0013F450(3);
    func_0013CB90(3);
    func_0013D440(3);
    ovl_ntgui2_func_0013E928(3);
    func_0013DE80(3);
    func_0013E330(3);
    func_0013D2B8(3);
    func_0013B658(D_004CB158, 3);
    func_00118140(buf, 1, func_00147350, func_00147380, func_00147460);
    *(void **)(buf + 8) = func_00146AB8;
    func_00118160(buf);
}

extern u8 *D_001C682C[];
extern s32 D_001C6834[];
s32 func_001A4174();
void func_00146538();
void func_00146270();

void func_001461C8(s32 arg0) {
    u8 *p = D_001C682C[0] + D_001C689C[0] * 524 + 0xC;
    s32 n;
    if (func_001A4174(p, arg0) == 0) {
        D_001C6890[0] = 1;
        func_00146538(p);
        return;
    }
    n = D_001C68A0[0] + 1;
    D_001C68A0[0] = n;
    if (n < D_001C6834[0]) {
        func_00146270(n);
        return;
    }
    D_001C6890[0] = 2;
    func_00146538(n);
}
