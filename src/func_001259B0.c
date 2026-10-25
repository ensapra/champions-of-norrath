extern u8 D_001C5500[];
extern u8 D_004CA0F0[];
extern s32 D_001BB6C4[];
void func_00114948(s32, s32, s32, s32, void *, s32);
s32 func_0011BA18(s32);
void func_00125908(void);
void func_00126540(void);
s32 func_0013B6F0(void *, s32);
void func_0013DE28(void *);

void func_001259B0(s32 a) {
    if (a >= 0) {
        func_0013DE28(D_001C5500);
        func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x39), func_00125908, D_001BB6C4[0]);
        return;
    }
    func_00126540();
    switch (a) {
    case -8:
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x3D), 0, D_001BB6C4[0]);
        return;
    case -12:
        if (func_0013B6F0(D_004CA0F0, -1) == 3) {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x59), 0, D_001BB6C4[0]);
            return;
        }
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x58), 0, D_001BB6C4[0]);
        return;
    case -16:
        if (func_0013B6F0(D_004CA0F0, -1) == 3) {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4B), 0, D_001BB6C4[0]);
            return;
        }
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x4A), 0, D_001BB6C4[0]);
        return;
    default:
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x3A), 0, D_001BB6C4[0]);
        return;
    }
}
