extern s32 * volatile D_00480430;
extern u8 jtbl_004C006C[];
extern u8 D_00508021[];
extern void func_001A1568(void *, s32, void *);
extern void func_001A2660(s32 *, s32, s32);
void func_0017F8D0(void) {
    if (D_00480430 == 0)
        func_001A1568(jtbl_004C006C + 0xD56C, 0xEC, D_00508021 + 0x417);
    func_001A2660(D_00480430, 0, 0x590);
}
