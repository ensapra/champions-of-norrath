typedef struct __attribute__((packed, aligned(1))) { char c[4]; } C4;
extern char D_00484F18[];
extern char D_00484F20[];
int func_00174390(int, char *, int);
int func_00303EB8(char *, char *, char *);
int func_00304640(char *, char *);
int func_00304CFC(char *);
void func_001D11D0(char *a, int b, int c, char *d) {
    char buf[256];
    int n;
    func_00303EB8(buf, D_00484F18, a);
    while (c < func_00174390(b, buf, 100000)) {
        buf[func_00304CFC(buf) - 1] = 0;
    }
    n = func_00304CFC(buf);
    if (n != func_00304CFC(a)) {
        *(C4 *)(buf + func_00304CFC(buf)) = *(C4 *)D_00484F20;
    }
    func_00304640(d, buf);
}
