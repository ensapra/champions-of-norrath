extern s32 func_002FD348(void *, void *, void *);
extern void func_00312DD0(void);
extern char D_00460C60[];
extern char D_00460FB0[];
s32 D_00486DC8[2];
extern s32 D_008EAE98[];
extern s32 D_008EB138[];

s32 *func_00310DA0(void) {
    if (D_008EAE98[0] == 0) {
        if (D_008EB138[0] == 0) {
            func_00312DD0();
            func_002FD348(D_008EB138, D_00460C60, D_00486DC8);
        }
        func_002FD348(D_008EAE98, D_00460FB0, D_008EB138);
    }
    return D_008EAE98;
}
