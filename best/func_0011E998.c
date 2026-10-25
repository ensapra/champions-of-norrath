extern s32 D_010C5120[];
extern s32 D_001BB6C4[];
s32 func_0011E420(s32, s32);
s32 func_0011CEF0(s32, s32, s32);
s32 func_00139550(s32, s32);
s32 func_0011BA18(s32);
s32 func_0010C7E8(s32, s32, s32, s32);
void func_0011E998(s32 a) {
    s32 *p;
    s32 t;
    func_0011E420(0, 0);
    p = D_010C5120;
    func_0011CEF0(*p, a, 0x16);
    if (a >= 0) {
        if (a >= 7) {
            if (a < 0xE) {
                func_00139550(0xFF, 0x14);
            }
        } else {
            func_00139550(0, 0x14);
            D_001BB6C4[0] = *p;
            t = func_0011BA18(2);
            func_0010C7E8(0, t, func_0011BA18(3), 0);
        }
    }
}
