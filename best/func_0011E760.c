s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, void *, s32);
extern u8 func_0011E568[];
extern s32 D_001BB6C4[];
void func_0011E760(s32 a) {
    s32 id = 0x6A;
    s32 v = 0;
    if (a == 10) {
        v = func_0011BA18(id);
    } else if (a < 11) {
        if (a == -1) {
            v = func_0011BA18(0x6B);
        }
    } else if (a == 11) {
        id = 0x69;
        v = func_0011BA18(id);
    }
    func_00114948(2, 0x1F4, 0xFA, v, func_0011E568, D_001BB6C4[0]);
}
