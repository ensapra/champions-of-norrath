extern char D_00460C60[], D_00460FF0[], D_00461030[];
extern s32 D_00486DC8[2];
extern s32 D_008EAD88[4], D_008EB038[4], D_008EB138[4];
void func_002FD348(void *, void *, void *);
void func_00312DD0(void);
s32 *func_00311560(void) {
    if (D_008EB038[0] == 0) {
        if (D_008EAD88[0] == 0) {
            if (D_008EB138[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EB138, D_00460C60, D_00486DC8);
            }
            func_002FD348(D_008EAD88, D_00460FF0, D_008EB138);
        }
        func_002FD348(D_008EB038, D_00461030, D_008EAD88);
    }
    return D_008EB038;
}
