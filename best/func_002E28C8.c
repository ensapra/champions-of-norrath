extern s32 D_004460C0[];
extern s32 D_004460A4[];
extern s32 D_008E8148[];
extern s32 D_008E814C[];
extern s32 D_008E8150[];
s32 func_002DD640(void);
void func_002DD698(void);
void func_002E2920(void);
s32 func_002E2848(s32 a0, s32 a1) {
    s32 r;
    s32 prior;
    if (D_004460C0[0] < 0) func_002E2920();
    r = func_002DD640();
    prior = D_008E8148[0];
    D_008E8150[0] = a1;
    D_008E8148[0] = a0;
    D_008E814C[0] = 0;
    if (r) func_002DD698();
    return prior;
}
void func_002E28C8(void) {
    s32 (*f)(s32);
    f = (s32 (*)(s32))D_008E8148[0];
    if (f != 0) {
        if (D_004460A4[0] == 0) {
            f(D_008E8150[0]);
        }
    }
}
extern s32 sceSifGetReg_2(s32);
extern void func_002D5560(void);
extern void func_002DF7B0(s32, s32);
s32 func_002DD4E0(void) {
    s32 val = sceSifGetReg_2(4);
    if (val & 0x40000) {
        func_002D5560();
        func_002DF7B0(1, 1);
        func_002DF7B0(0, 1);
        return 1;
    }
    return 0;
}
