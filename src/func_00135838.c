extern u8 func_001C3BC0[];
s32 func_0011C6C8(void);
s32 func_0011C6F0(void);
void func_00135898(void);
s32 func_00135838(void) {
    s32 a = func_0011C6C8();
    s32 *p = (s32*)(func_001C3BC0 + 0x2C);
    if ((a & *p) && !(func_0011C6F0() & *p)) {
        func_00135898();
        return 1;
    }
    return 0;
}
