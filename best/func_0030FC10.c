s32 func_002FD348(void *, void *, void *);
s32 func_00312DD0(void);
extern char D_00460EA0[];
extern char D_00483918[];
extern char D_00483920[];
extern s32 D_00486DC8[2];
extern s32 D_008EACB8[4];
extern s32 D_008EADB8[4];
extern s32 D_008EB248[4];

s32 *func_0030FC10(void) {
    if (D_008EACB8[0] == 0) {
        if (D_008EB248[0] == 0) {
            if (D_008EADB8[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EADB8, D_00483918, D_00486DC8);
            }
            func_002FD348(D_008EB248, D_00483920, D_008EADB8);
        }
        func_002FD348(D_008EACB8, D_00460EA0, D_008EB248);
    }
    return D_008EACB8;
}
