extern void func_002FD348(void *, void *, void *);
extern void func_00312DD0(void);
extern char D_00460EC0[];
extern char D_00483918[];
extern char D_00483920[];
extern s32 D_00486DC8;
extern s32 D_008EADB8[];
extern s32 D_008EB248[];
extern s32 D_008EB288[];

s32 *func_0030FE40(void) {
    if (D_008EB288[0] == 0) {
        if (D_008EB248[0] == 0) {
            if (D_008EADB8[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EADB8, D_00483918, &D_00486DC8);
            }
            func_002FD348(D_008EB248, D_00483920, D_008EADB8);
        }
        func_002FD348(D_008EB288, D_00460EC0, D_008EB248);
    }
    return D_008EB288;
}
