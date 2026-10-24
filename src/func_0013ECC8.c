extern s32 D_010D110C[];
extern s32 D_010D111C[];
extern s32 D_010D1100[];
extern s32 D_010D1108[];
void func_0013FFF8(void);
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140A60(s32);

void func_0013ECC8(void) {
    func_0013FFF8();
    D_010D110C[0] = 3;
    D_010D111C[0] = 3;
}

void func_0013EC90(void) {
    func_0013FFF8();
    D_010D111C[0] = 2;
    D_010D110C[0] = 3;
}

s32 func_0013EC10(void) {
    if (func_001404D0() != 0) return 0;
    D_010D1108[0] = func_001404F0();
    func_00140A60(D_010D1100[0]);
    return 1;
}

void func_00191268(s32 **a);
void func_00191C68(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 *p;
    func_00191268(arg0);
    arg2 |= 0x30000000;
    arg5 |= arg2;
    arg1 &= 0x9FFFFFFF;
    p = *arg0;
    *p++ = arg5;
    p[0] = arg1;
    p[1] = arg3;
    p[2] = arg4;
    *arg0 = p + 3;
}
