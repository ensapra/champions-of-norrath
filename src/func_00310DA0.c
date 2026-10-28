/* identical to func_0030DB68 (matched), with its names changed by decompdecomp */
s64 D_00486DC8;
extern char D_00460FB0[];
extern char D_00460C60[];
extern s32 D_008EB138[];
extern s32 D_008EAE98[];
void func_00312DD0(s32, s32);
void func_002FD348(s32 *, char *, void *);

s32 *func_00310DA0(s32 a, s32 b) {
    if (D_008EAE98[0] == 0) {
        if (D_008EB138[0] == 0) {
            func_00312DD0(a, b);
            func_002FD348(D_008EB138, D_00460C60, &D_00486DC8);
        }
        func_002FD348(D_008EAE98, D_00460FB0, D_008EB138);
    }
    return D_008EAE98;
}
