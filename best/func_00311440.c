extern char D_00460C60[], D_00460FF0[], D_00461018[];
extern s32 D_00486DC8[2];
extern s32 D_008EABE8[], D_008EAD88[], D_008EB138[];
void func_00312DD0(void);
void func_002FD348(s32 *, char *, s32 *);

s32 *func_00311440(void) {
    if (D_008EABE8[0] == 0) {
        if (D_008EAD88[0] == 0) {
            if (D_008EB138[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EB138, D_00460C60, D_00486DC8);
            }
            func_002FD348(D_008EAD88, D_00460FF0, D_008EB138);
        }
        func_002FD348(D_008EABE8, D_00461018, D_008EAD88);
    }
    return D_008EABE8;
}
