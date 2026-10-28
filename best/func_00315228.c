extern void func_002FD348(void *, void *, void *);
extern void func_00312DD0(void);
extern char D_00471288[], D_004712B8[], D_004712F8[];
extern s32 D_00486DC8[2];
extern s32 D_008EB4C8[4], D_008EB4E8[4], D_008EB508[4];

s32 *func_00315228(void) {
    if (D_008EB4C8[0] == 0) {
        if (D_008EB508[0] == 0) {
            if (D_008EB4E8[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EB4E8, D_00471288, D_00486DC8);
            }
            func_002FD348(D_008EB508, D_004712B8, D_008EB4E8);
        }
        func_002FD348(D_008EB4C8, D_004712F8, D_008EB508);
    }
    return D_008EB4C8;
}
