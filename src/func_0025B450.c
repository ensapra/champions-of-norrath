typedef struct { u8 b[8]; } Cfg8;
extern u8 D_00444850[];
void func_002D1108(Cfg8 *p, s32 a, s32 b) {
    *(Cfg8 *)D_00444850 = *p;
}

typedef struct { u16 a; u16 b; } Arg25B4D0;
extern s32 D_00484F50;
extern u8 D_0081E240[];
extern u8 D_0081E2B0[];
s32 func_0026FC90(s32);
s32 func_002847A0(void);
void func_0025B528(u8 *, void *, s32);

void func_0025B4D0(Arg25B4D0 arg) {
    u8 *p = D_0081E240;
    *(u16 *)(p + 0x6A) = arg.a;
    p += 0x70;
    p = func_0026FC90(D_00484F50) + p;
    p += func_002847A0();
    func_0025B528(p + 0x1004, &arg, 4);
}

u8 *func_0025B450(s32 n) {
    u8 *p = D_0081E2B0;
    s32 i;
    p = func_0026FC90(D_00484F50) + p;
    p += func_002847A0();
    p += 0x1008;
    for (i = 0; i < 4; i++) {
        p += 0xE;
        if (i == n) return p;
        p += 0x5DB0;
    }
    return 0;
}
