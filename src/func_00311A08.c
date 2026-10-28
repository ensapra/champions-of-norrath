/* identical to func_0030DB68 (matched), with its names changed by decompdecomp */
s64 D_00486DC8;
extern char D_004610A0[];
extern char D_00460CD0[];
extern s32 D_008EB088[];
extern s32 D_008EB128[];
void func_00312DD0(s32, s32);
void func_002FD348(s32 *, char *, void *);

s32 *func_00311A08(s32 a, s32 b) {
    if (D_008EB128[0] == 0) {
        if (D_008EB088[0] == 0) {
            func_00312DD0(a, b);
            func_002FD348(D_008EB088, D_00460CD0, &D_00486DC8);
        }
        func_002FD348(D_008EB128, D_004610A0, D_008EB088);
    }
    return D_008EB128;
}
