extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern void func_001B6560(u32);
extern void func_0010B378(s32, void *, s32);
extern void func_0013BBD0(void);
extern void func_0011AD68(s32);
extern void func_00138990(s32);
extern void func_0014D328(s32, s32);
extern s32 func_0011AD08(void);
extern u8 func_01000000[];
extern u8 func_001B9FD8[];
extern u8 func_001C6788[];

s32 func_001B6850(void) {
    s32 st = func_001B5C80();
    u32 v = *(volatile u32 *)0x10001010;
    if (!(v & 0x80)) {
        if (st) func_001B5CD8();
        return 0;
    }
    func_001B6560(v & 0xFFFFF37F);
    if (st) func_001B5CD8();
    return 1;
}

void func_00145C08(s32 a, s32 i) {
    *(s32 *)(func_01000000 + 0xD44E8) = i;
    func_0010B378(*(s32 *)(func_01000000 + 0xD44C0 + i * 4), func_001B9FD8 + 0x1738, i);
    func_0013BBD0();
}

void func_00145BB0(void) {
    func_0011AD68(*(s32 *)(func_001C6788 + 0x100));
    *(s32 *)(func_01000000 + 0xD44A0) = 0;
    func_00138990(*(s32 *)(func_01000000 + 0xD44B0));
    func_0014D328(*(s32 *)(func_01000000 + 0xD44D0), 0xFF);
    func_0014D328(*(s32 *)(func_01000000 + 0xD44D4), 0xFF);
}

void func_00145AB8(void) {
    *(s32 *)(func_001C6788 + 0x100) = func_0011AD08();
}
