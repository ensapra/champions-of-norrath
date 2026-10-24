s32 func_001B5C80(void);
void func_001B5CD8(void);
void func_001B6560(u32);
void func_001B68D0(s32);
s32 func_001B6DC0(void);
s32 func_001B67C0(void)
{
    s32 di = func_001B5C80();
    u32 v = *(volatile u32 *)0x10001010;
    if (v & 0x80) {
        if (di)
            func_001B5CD8();
        return 1;
    }
    func_001B6560((v & 0xFFFFF3FF) | 0x80);
    func_001B68D0(func_001B6DC0());
    if (di)
        func_001B5CD8();
    return 0;
}

s32 func_0013FBB8(s32 a)
{
    s32 r;
    switch (a) {
    case 0: r = 0; break;
    case 1: r = 1; break;
    case 2: r = 2; break;
    case 3: r = 3; break;
    default: r = 4; break;
    }
    return r;
}

extern s32 D_010D1250[];
void func_0013F450(s32 a)
{
    D_010D1250[0] = a;
}

extern u8 func_001C6788[];
void func_0011B968(s32);
void func_0013F3D0(void)
{
    s32 *p;
    p = (s32 *)(func_001C6788 + 0xA0);
    if (*p) {
        func_0011B968(*p);
        *p = 0;
    }
    p = (s32 *)(func_001C6788 + 0xA4);
    if (*p) {
        func_0011B968(*p);
        *p = 0;
    }
    p = (s32 *)(func_001C6788 + 0xA8);
    if (*p) {
        func_0011B968(*p);
        *p = 0;
    }
}
