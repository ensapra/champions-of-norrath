extern s32 D_0048661C;
extern s8 D_00483B11;
extern char D_00486620[];
extern s32 D_0048664C;
s32 func_002E9098(s32, s32);
void func_002EAF50(void);
s32 *func_002EB280(s32);
s32 func_003044FC(s32, char *);
void func_002EB0F8(s32, s32 *);

void func_002CCEC8(void) {
    s32 *p;
    s32 i;
    s32 last;
    D_00483B11 = 1;
    if (D_0048661C == 0) {
        func_002E9098(0, 0);
        D_0048661C = 1;
    }
    func_002EAF50();
    last = -1;
    for (i = 0; (p = func_002EB280(i)) != 0; i++) {
        if (func_003044FC(p[1], D_00486620) == 0) {
            last = p[0];
        }
    }
    func_002EB0F8(last, &D_0048664C);
    D_00483B11 = 0;
}
