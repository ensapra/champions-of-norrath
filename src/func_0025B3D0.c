typedef struct { u8 b[8]; } Cfg8;
extern Cfg8 D_00444850;
void func_002D1108(Cfg8 *p) {
    D_00444850 = *p;
}

typedef struct { u16 a; u16 b; } Arg25B4D0;
extern s32 D_00484F50;
extern u8 D_0081E240[];
extern u8 D_0081E2B0[];
s32 func_0026FC90(s32);
s32 func_002847A0(void);
void func_0025B528(u8 *, void *, s32);

void func_0025B4D0(Arg25B4D0 arg) {
    u8 *p;
    *(u16 *)(D_0081E240 + 0x6A) = arg.a;
    p = func_0026FC90(D_00484F50) + (D_0081E240 + 0x70);
    p += func_002847A0();
    func_0025B528(p + 0x1004, &arg, 4);
}

u8 *func_0025B450(s32 n) {
    u8 *p;
    s32 i;
    p = func_0026FC90(D_00484F50) + D_0081E2B0;
    p += func_002847A0();
    p += 0x1008;
    p += 0xE;
    for (i = 0; i < 4; i++) {
        if (i == n) return p;
        p += 0x5DB0;
        p += 0xE;
    }
    return 0;
}

typedef struct { u64 d[0x5DB0 / 8]; } Blk25B3D0;
extern Blk25B3D0 D_00408600[];
extern Blk25B3D0 D_007E05E0[];
s32 func_0024FFD8(s32);

s64 func_0025B3D0(s32 i) {
    D_00408600[i] = D_007E05E0[i];
    return func_0024FFD8(i);
}
