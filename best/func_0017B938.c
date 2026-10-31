extern void func_0017BE60(void);
extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern s32 func_0017C418(s32);
extern void func_001AD750(s32);
extern s32 D_001D0500[];
extern s32 D_001D04D4[];
extern s32 D_001D04E0[];
extern s32 D_001D04E4[];
extern s32 D_001D04E8[];
extern s32 D_001D04F4[];
extern volatile s32 D_001D0518[];
extern volatile s32 D_001D051C[];
extern volatile s32 D_010ECC40[];
extern volatile s32 D_010ECC44[];
extern volatile s32 D_010ECC48[];
extern volatile s32 D_010ECC4C[];
extern volatile s32 D_010ECC50[];

s32 func_0017BD88(s32 a, s32 b) {
    s32 old;
    s32 r;
    if (D_001D0500[0] < 0) func_0017BE60();
    r = func_001B5C80();
    old = D_010ECC48[0];
    D_010ECC50[0] = b;
    D_010ECC48[0] = a;
    if (r != 0) func_001B5CD8();
    return old;
}

void func_0017BE08(void) {
    if (D_010ECC48[0] != 0 && D_001D04E4[0] == 0) {
        ((void (*)(s32))D_010ECC48[0])(D_010ECC50[0]);
    }
}

void func_0017B938(s32 *arg0) {
    D_001D0518[0] = *arg0;
    D_001D051C[0] = D_001D0518[0];
    if (D_001D0518[0] == 0xB) {
        D_001D0518[0] = 0;
        D_001D04F4[0] = 0;
        return;
    }
    func_001AD750(D_001D04E8[0]);
    if (D_001D04D4[0] && D_010ECC40[0]) {
        func_001AD750(D_001D04E0[0]);
    } else {
        D_001D04F4[0] = 0;
    }
    D_001D0518[0] = 0;
}

s32 func_0017B8D0(s32 a) {
    s32 old;
    s32 r;
    if (func_0017C418(1) != 0) return 0;
    r = func_001B5C80();
    old = D_010ECC40[0];
    D_010ECC40[0] = a;
    if (r != 0) func_001B5CD8();
    return old;
}
