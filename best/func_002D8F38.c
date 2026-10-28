extern int D_004449F4; extern int D_008E1C40[]; extern int D_008E1C80[];
extern char _gp[];
void func_002D8EF8(int); void func_002D9028(void); int func_002DD640(void); void func_002DD698(void); void func_002D8F28(void);
int func_002D8F38(int a, int b) {
    int old, r;
    func_002D8EF8(0x1B);
    if (D_004449F4 == 0) func_002D9028();
    r = func_002DD640();
    old = D_008E1C40[0];
    D_008E1C40[1] = b;
    D_008E1C40[0] = a;
    D_008E1C80[0] = (int)_gp;
    if (r) func_002DD698();
    func_002D8F28();
    return old;
}
