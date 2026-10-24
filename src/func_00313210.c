s64 D_00486DC8;
extern char D_00460DD8[];
extern char D_00460DE8[];
extern s32 D_008EAB78[];
extern s32 D_008EABD8[];
extern s32 D_008EB008[];
extern char D_00460CE0[];
extern char D_00483918[];
extern char D_00483920[];
extern char D_00483928[];
extern s32 D_008EADB8[];
extern s32 D_008EAE78[];
extern s32 D_008EAE88[];
extern s32 D_008EB248[];
extern char D_00483EE0[];
void func_002FD348(s32 *, char *, void *);
void func_0030D510(void);
void func_00312DD0(void);
s32 func_001671F8(char *a);
s32 ovl_ntgui2_func_00191830(s32 a, s32 b);

s32 *func_0030EE98(void)
{
    if (D_008EB008[0] == 0) {
        if (D_008EABD8[0] == 0) {
            func_0030D510();
            func_002FD348(D_008EABD8, D_00460DD8, D_008EAB78);
        }
        func_002FD348(D_008EB008, D_00460DE8, D_008EABD8);
    }
    return D_008EB008;
}

s32 *func_0030DB68(void) {
    if (D_008EAE88[0] == 0) {
        if (D_008EADB8[0] == 0) {
            func_00312DD0();
            func_002FD348(D_008EADB8, D_00483918, &D_00486DC8);
        }
        func_002FD348(D_008EAE88, D_00460CE0, D_008EADB8);
    }
    return D_008EAE88;
}

s32 *func_0030DE38(void) {
    if (D_008EAE78[0] == 0) {
        if (D_008EB248[0] == 0) {
            if (D_008EADB8[0] == 0) {
                func_00312DD0();
                func_002FD348(D_008EADB8, D_00483918, &D_00486DC8);
            }
            func_002FD348(D_008EB248, D_00483920, D_008EADB8);
        }
        func_002FD348(D_008EAE78, D_00483928, D_008EB248);
    }
    return D_008EAE78;
}

s64 func_00313210(s32 unused, s32 arg1) {
    return ovl_ntgui2_func_00191830(arg1, func_001671F8(D_00483EE0));
}
