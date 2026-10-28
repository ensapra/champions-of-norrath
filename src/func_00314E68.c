/* identical to func_0030DB68 (matched), with its names changed by decompdecomp */
s64 D_00486DC8;
extern char D_00471298[];
extern char D_00471288[];
extern s32 D_008EB4E8[];
extern s32 D_008EB4F8[];
void func_00312DD0(s32, s32);
void func_002FD348(s32 *, char *, void *);

s32 *func_00314E68(s32 a, s32 b) {
    if (D_008EB4F8[0] == 0) {
        if (D_008EB4E8[0] == 0) {
            func_00312DD0(a, b);
            func_002FD348(D_008EB4E8, D_00471288, &D_00486DC8);
        }
        func_002FD348(D_008EB4F8, D_00471298, D_008EB4E8);
    }
    return D_008EB4F8;
}
