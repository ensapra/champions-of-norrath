extern char D_00460EB0[], D_00483918[], D_00483920[];
extern s32 D_00486DC8[2];
extern s32 D_008EB0C8[], D_008EB248[], D_008EADB8[];
void func_00312DD0(void);
void func_002FD348(s32 *, char *, s32 *);

s32 *func_0030FD28(void) {
    if (D_008EB0C8[0] == 0) {
        if (D_008EB248[0] == 0) {
            if (D_008EADB8[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EADB8, D_00483918, D_00486DC8);
            }
            func_002FD348(D_008EB248, D_00483920, D_008EADB8);
        }
        func_002FD348(D_008EB0C8, D_00460EB0, D_008EB248);
    }
    return D_008EB0C8;
}
