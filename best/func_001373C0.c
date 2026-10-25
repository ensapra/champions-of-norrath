extern s32 D_001BB8FC[], D_001C5438[], D_010CE388[], D_010CE390[];
extern void func_001050A8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_00105190(void *);
extern void func_0010C7E8(s32, s32, s32, s32);
extern s32 func_0011BA18(s32);
extern void func_0011CEF0(s32, s32, s32);
extern void func_0011E3E8(void);
extern void func_0011E420(s32, s32);
extern void func_0014D370(s32, s32);
void func_001373C0(s32 arg0) {
    u8 sp10[0xC0];
    u8 spD0[0xC0];
    s32 i, t;
    func_0011E3E8();
    func_0011E420(0, 0);
    func_0011CEF0(D_010CE388[0], arg0, 0);
    switch (arg0) {
    case 0 ... 6:
        func_001050A8(sp10, D_001BB8FC[0], 0xB, 0x14, 0xA, 0, 0xA, 0x55, 0xA, 0x6F);
        func_00105190(sp10);
        for (i = 0; i < 4; i++) {
            func_001050A8(sp10, D_010CE390[i], 0xB, 0, 1, 0, 0x10, 0x14, 0x150, 0x14);
            func_00105190(sp10);
        }
        t = func_0011BA18(2);
        func_0010C7E8(0, t, func_0011BA18(3), 0);
        break;
    case 7 ... 13:
        if (D_001C5438[0] == 0) {
            s32 *g = D_001BB8FC;
            func_0014D370(*g, 1);
            func_001050A8(spD0, *g, 0xB, 0x14, 0x14, 0, 0, 0x55, 0xB4, 0x6F);
            func_00105190(spD0);
        }
        for (i = 0; i < 4; i++) {
            func_001050A8(spD0, D_010CE390[i], 0xB, 0, 0xA, 0, 0x10, 6, 0x150, 6);
            func_00105190(spD0);
        }
        break;
    }
}
