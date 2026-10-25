extern u8 func_001C3BC0[];
void func_00141090(void);
s32 func_0011C6C8(void);
s32 func_0011C6F0(void);
void func_0011D9E0(void);
s32 func_00137918(void) {
    s32 *p;
    s32 a;
    func_00141090();
    a = func_0011C6C8();
    p = (s32*)(func_001C3BC0 + 0x30);
    if ((a & *p) && !(func_0011C6F0() & *p)) {
        func_0011D9E0();
        return 1;
    }
    return 0;
}
