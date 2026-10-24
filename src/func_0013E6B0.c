extern s32 D_010D10E0[];
extern char D_010CFD80[];
extern char D_010CFDC0[];
extern u8 jtbl_004C006C[];
void func_00140010(void *);
s32 func_001B3EB8(void *);
s32 func_001B4110(void *, s32, s32, s32, s32, s32);
s32 func_001B3C48(void *, void *, s32, s32, s32);

typedef struct {
    char pad[8];
    void (*fn)();
} T;

void func_0013E5D0(T *t) {
    func_00140010(t);
    if (t->fn)
        t->fn(D_010CFDC0, *(s32 *)D_010CFD80);
}

void func_0013E6B0(void) {
    func_001B3EB8(jtbl_004C006C + 0xAF14);
}

void func_0013E610(void) {
    s32 r = func_001B4110(jtbl_004C006C + 0xAF0C, 0x4807, 0, 0, 0, 0);
    D_010D10E0[0] = r;
    if (r == 0) {
        if (func_001B3C48(jtbl_004C006C + 0xAF14, jtbl_004C006C + 0xAF1C, 0, 0, 0) < 0)
            D_010D10E0[0] = 1;
        if (D_010D10E0[0] == 0)
            *(vs32 *)0x001BAC80 |= 4;
    }
}
