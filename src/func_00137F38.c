extern s32 D_010CE538[]; extern s32 D_010CE558[];
void func_0010C7E8(s32,s32,s32,s32); s32 func_0011BA18(s32); void func_0011CEF0(s32,s32,s32); void func_0011E420(s32,s32); void func_00139550(s32,s32); void func_0014D240(s32); void func_0014D270(s32);
void func_00137F38(s32 a) {
    func_0011E420(0, D_010CE558[0]);
    func_0011CEF0(D_010CE538[0], a, 2);
    switch (a) {
    case 0 ... 6:
        if (D_010CE538[0] != 0) func_0014D240(D_010CE538[0]);
        func_00139550(0, 0x14);
        func_0010C7E8(0, func_0011BA18(2), 0, 0);
        break;
    case 7 ... 13:
        if (D_010CE538[0] != 0) func_0014D270(D_010CE538[0]);
        func_00139550(0xFF, 0x14);
        break;
    }
}
