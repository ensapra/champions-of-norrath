typedef void (*Fn)(void);
extern u8 D_004C55C8[];
extern u8 D_01106FD0[];
extern Fn D_001BA320[];
extern void func_001A06D0();
extern s32 func_001A15A0(Fn);
void func_0019FE38(void);
void func_0019FEC8(void) {
    unsigned long nptrs;
    unsigned i;
    func_001A06D0(D_004C55C8, D_01106FD0);
    nptrs = (unsigned long)D_001BA320[0];
    if (nptrs == (unsigned long)-1)
        for (nptrs = 0; D_001BA320[nptrs + 1] != 0; nptrs++)
            ;
    for (i = nptrs; i >= 1; i--)
        D_001BA320[i]();
    func_001A15A0(func_0019FE38);
}
