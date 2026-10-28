/* identical to func_0030DB68 (matched), with its names changed by decompdecomp */
s64 D_00486DC8;
extern char D_00483920[];
extern char D_00483918[];
extern s32 D_008EADB8[];
extern s32 D_008EB248[];
void func_00312DD0(s32, s32);
void func_002FD348(s32 *, char *, void *);

s32 *func_0030DD48(s32 a, s32 b) {
    if (D_008EB248[0] == 0) {
        if (D_008EADB8[0] == 0) {
            func_00312DD0(a, b);
            func_002FD348(D_008EADB8, D_00483918, &D_00486DC8);
        }
        func_002FD348(D_008EB248, D_00483920, D_008EADB8);
    }
    return D_008EB248;
}
