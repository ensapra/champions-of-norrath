extern char D_00471288[], D_00471298[], D_004712D8[];
extern s32 D_00486DC8[2];
extern s32 D_008EB4B8[4], D_008EB4E8[4], D_008EB4F8[4];
void func_002FD348(void *, void *, void *);
void func_00312DD0(s32, s32);
s32 *func_003150C8(s32 a, s32 b) {
    if (D_008EB4B8[0] == 0) {
        if (D_008EB4F8[0] == 0) {
            if (D_008EB4E8[0] == 0) {
                func_00312DD0(a, b);
                func_002FD348(D_008EB4E8, D_00471288, D_00486DC8);
            }
            func_002FD348(D_008EB4F8, D_00471298, D_008EB4E8);
        }
        func_002FD348(D_008EB4B8, D_004712D8, D_008EB4F8);
    }
    return D_008EB4B8;
}
