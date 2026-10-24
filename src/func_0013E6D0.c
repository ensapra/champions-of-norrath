extern s32 D_010D10E0[];
extern s32 D_010D10E8[];
extern s32 D_010D10EC[];
extern s32 D_010D10F0[];

s32 func_0013E6D0(void) { return D_010D10E0[0]; }

void func_0013E6E0(void) {
    D_010D10E8[0] = 0;
    D_010D10EC[0] = 0;
    D_010D10F0[0] = -1;
}

void func_0013E700(s32 a) { D_010D10F0[0] = a; }

typedef struct {
    s32 v;
    s32 pad;
    char str[0xFC];
} S1B52A8;
extern S1B52A8 D_0110B1C0;
extern u8 D_0110B3C0[];
s32 func_001B4C40(void);
s32 func_001B4D40(void);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void *func_001A4738(void *, void *, s32);

s32 func_001B52A8(void *arg0)
{
    if (func_001B4C40() < 0) {
        return 0xFFFF0000;
    }
    if (func_001B4D40() != 0) {
        return 0xFFFEFFFC;
    }
    func_001A4738(D_0110B1C0.str, arg0, 0xFC);
    D_0110B1C0.str[0xFB] = 0;
    if (func_001B08B0(D_0110B3C0, 9, 0, &D_0110B1C0, 0x200, &D_0110B1C0, 4, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    return D_0110B1C0.v;
}
