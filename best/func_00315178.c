extern char D_00471288[], D_004712A8[], D_004712E8[];
extern s32 D_00486DC8[2];
extern s32 D_008EB4D8[4], D_008EB4E8[4], D_008EB518[4];
void func_002FD348(void *, void *, void *);
void func_00312DD0(void);
s32 *func_00315178(void) {
    if (D_008EB4D8[0] == 0) {
        if (D_008EB518[0] == 0) {
            if (D_008EB4E8[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EB4E8, D_00471288, D_00486DC8);
            }
            func_002FD348(D_008EB518, D_004712A8, D_008EB4E8);
        }
        func_002FD348(D_008EB4D8, D_004712E8, D_008EB518);
    }
    return D_008EB4D8;
}
