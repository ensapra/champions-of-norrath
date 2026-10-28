extern void func_00114948(int, int, int, int, void *, int);
extern int func_0011BA18(int);
extern void func_00129EC8(void);
extern void func_0012A230(void);
extern int func_001404D0(void);
extern char func_00128F80[];
extern int D_001BAC80[];
extern int D_001C6840[];
extern int D_001C6848[];
extern int D_001C6854[];
extern int D_001C686C[];
extern int D_001C4D78[];
extern int D_001BB6B0[];
extern int D_001BB6C4[];
extern int D_010CB060[];

int func_0012A490(void) {
    if (func_001404D0() != 0) return 0;
    if (D_001C6840[0] < 3) {
        if (D_001C6840[0] <= 0) goto end;
        goto B;
    }
    if (D_001C6840[0] == 3) {
        int *p = D_010CB060;
        int v = 0;
        if (p[0] != 0 && !(D_001BAC80[0] & 1)) {
            p[0] = 0;
            goto act;
        }
        if (p[1] != 0) {
            if (!(D_001BAC80[0] & 2)) {
                p[1] = 0;
act:
                func_0012A230();
                func_00129EC8();
                v = 1;
            }
        }
        if (D_001C4D78[0] != -1 && v) {
            func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x49), func_00128F80, D_001BB6C4[0]);
            D_001BB6B0[0] = 1;
        }
    }
    goto end;
B:
    if (D_010CB060[0] == 0 && (D_001BAC80[0] & 1) && D_001C6848[0] == 2) {
        D_010CB060[0] = 1;
        func_0012A230();
        func_00129EC8();
    } else if (D_010CB060[1] == 0) {
        if ((D_001BAC80[0] & 2) && D_001C6854[0] == 2) {
            D_010CB060[1] = 1;
            func_0012A230();
            func_00129EC8();
        }
    }
end:
    D_001C686C[0] = -1;
    return 0;
}
