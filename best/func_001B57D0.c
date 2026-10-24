s32 func_001B08B0();
s32 func_001B4C40();
extern s32 D_0110B1C0[];
extern u8 D_0110B3C0[];

s32 func_001B57D0(s32 a, void *out, u32 size) {
    if (func_001B4C40() < 0) return 0xFFFF0000;
    if (size < 3) {
        D_0110B1C0[0] = a;
        D_0110B1C0[1] = size;
        if (func_001B08B0(D_0110B3C0, 3, 0, D_0110B1C0, 0x20, D_0110B1C0, 0x20, 0, 0) < 0) return 0xFFFEFFFF;
        if (size == 0) *(u8 *)out = *(u8 *)D_0110B1C0;
        else if (size == 1) *(u16 *)out = *(u16 *)D_0110B1C0;
        else if (size == 2) *(s32 *)out = D_0110B1C0[0];
        else return 0xFFFEFFFE;
        return 0;
    }
    return 0xFFFEFFFE;
}
