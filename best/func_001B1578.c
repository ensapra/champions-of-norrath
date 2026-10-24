extern u8 jtbl_004C006C[];
extern s32 D_0110AF80[];
extern void *D_0110AFC0[];
extern char _gp[];
s32 func_001B1538();
void func_001B1568(void);
void func_001B1668(void);
s32 func_001B5C80(void);
void func_001B5CD8(void);
s32 func_001B1578(s32 a, s32 b) {
    s32 *p = D_0110AF80;
    s32 old, r;
    func_001B1538(0x1B);
    if (*(s32 *)(jtbl_004C006C + 0x3F30) == 0) func_001B1668();
    r = func_001B5C80();
    old = D_0110AF80[0];
    p[1] = b;
    D_0110AF80[0] = a;
    D_0110AFC0[0] = _gp;
    if (r) func_001B5CD8();
    func_001B1568();
    return old;
}
