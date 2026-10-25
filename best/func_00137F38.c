extern s32 D_010CE538[];
extern s32 D_010CE558[];
s32 func_0010C7E8(s32, s32, s32, s32);
s32 func_0011BA18(s32);
s32 func_0011CEF0(s32, s32, s32);
s32 func_0011E420(s32, s32);
s32 func_00139550(s32, s32);
s32 func_0014D240(s32, s32);
s32 func_0014D270(s32);

void func_00137F38(s32 a) {
    s32 *p = D_010CE538;
    func_0011E420(0, D_010CE558[0]);
    func_0011CEF0(*p, a, 2);
    if (a < 0) return;
    if (a < 7) {
        if (*p != 0) {
            func_0014D240(*p, 0x14);
        }
        func_00139550(0, 0x14);
        func_0010C7E8(0, func_0011BA18(2), 0, 0);
        return;
    }
    if (a >= 0xE) return;
    if (D_010CE538[0] != 0) {
        func_0014D270(D_010CE538[0]);
    }
    func_00139550(0xFF, 0x14);
}
