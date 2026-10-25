s32 func_0011C6C8(void);
s32 func_0011C6F0(void);
void func_0013B738(void *);
void func_0012B0B0(void);
extern u8 D_004CA2E8[];

s32 func_0012B050(void) {
    if (func_0011C6C8() & 0x10) {
        if (!(func_0011C6F0() & 0x10)) {
            func_0013B738(D_004CA2E8);
            func_0012B0B0();
            return 1;
        }
    }
    return 0;
}
