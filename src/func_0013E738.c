extern s32 D_010D10EC[];
extern s32 D_010D10F0[];
extern s32 D_001C6820[];
s32 func_001404D0(void);
s32 func_00140020(void);
void func_001403B8(void);
void func_00140B78(s32);
s32 func_0013E7E0(void);

s32 func_0013E738(u8 *o)
{
    if (func_00140020() != 0)
        return 0;
    if (func_001404D0() != 0)
        return 0;
    if (D_010D10EC[0] > 0) {
        D_010D10EC[0]--;
        return 0;
    }
    func_001403B8();
    func_00140B78(*(s32 *)(D_010D10F0[0] * 0x21C + D_001C6820[0]));
    *(void **)(o + 0x18) = func_0013E7E0;
    return 0;
}
