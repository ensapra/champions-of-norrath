extern s32 D_001D0500;
extern s32 D_010ECC48;
extern void *D_010ECC4C;
extern s32 D_010ECC50;
extern u8 _gp[];
void func_0017BE60(void);
s32 func_001B5C80(void);
void func_001B5CD8(void);

s32 func_0017BD88(s32 a0, s32 a1)
{
    s32 old;
    s32 r;

    if (D_001D0500 < 0) {
        func_0017BE60();
    }
    r = func_001B5C80();
    old = D_010ECC48;
    D_010ECC50 = a1;
    D_010ECC48 = a0;
    D_010ECC4C = _gp;
    if (r) {
        func_001B5CD8();
    }
    return old;
}

extern u8 jtbl_004C006C[];
void *func_001A1568(void *, s32, void *);
void func_001A2660(s32, s32, s32);
void func_00187F10(s32);
void func_00187620(s32, s32);

void ovl_ntgui2_func_00187440(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        func_001A1568(jtbl_004C006C + 0xE09C, 0xB1, jtbl_004C006C + 0xE0BC);
    }
    if (arg1 == 0) {
        func_001A1568(jtbl_004C006C + 0xE09C, 0xB2, jtbl_004C006C + 0xE0CC);
    }
    func_001A2660(arg0, 0, 0x310);
    func_00187F10(arg0);
    func_00187620(arg0, arg1);
}

u8 *func_001884C8(u8 *, s32);

u8 *func_00188528(u8 *a, s32 *out)
{
    u8 *p = func_001884C8(a, (s32)out);
    if (p != 0 && *(s32 *)p == 0x745865) {
        if (out != 0) {
            *out = *(s32 *)(p + 8);
        }
        return p + 0x10;
    }
    return p;
}

u8 *func_00188580(u8 *a)
{
    u8 *p = func_001884C8(a, 0);
    u8 *r = p;
    if (p != 0) {
        r = 0;
        if (*(s32 *)p == 0x745865) {
            s32 off = *(s32 *)(p + 8);
            if (*(s32 *)(p + 4) != off + 0x10) {
                r = p + off + 0x10;
            }
        }
    }
    return r;
}
