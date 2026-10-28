/* identical to func_0030DB68 (matched), with its names changed by decompdecomp */
s64 D_00486DC8;
extern char D_00473088[];
extern char D_00473078[];
extern s32 D_008EB5F8[];
extern s32 D_008EB638[];
void func_00312DD0(s32, s32);
void func_002FD348(s32 *, char *, void *);

s32 *func_00315E08(s32 a, s32 b) {
    if (D_008EB638[0] == 0) {
        if (D_008EB5F8[0] == 0) {
            func_00312DD0(a, b);
            func_002FD348(D_008EB5F8, D_00473078, &D_00486DC8);
        }
        func_002FD348(D_008EB638, D_00473088, D_008EB5F8);
    }
    return D_008EB638;
}
