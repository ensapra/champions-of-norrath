extern char D_00463FD0[];
extern char D_00463FE8[];
extern const char D_0047E1F1[];
extern char D_00790FA0[];
void func_00303EB8(char *, const char *, ...);
void func_002D70D0(char *, ...);

#define _ctype_ D_0047E1F1
#define islower(c) ((_ctype_)[(unsigned)(c)] & 2)
#define toupper(c) ({ int __x = (c); islower(__x) ? (__x - 'a' + 'A') : __x; })

char *func_001910E0(char *name)
{
    char *p;
    char c;
    func_00303EB8(D_00790FA0, D_00463FD0, name);
    p = D_00790FA0 + 7;
    goto test;
body:
    c = *(volatile u8 *)p;
    *p = toupper(c);
    p++;
test:
    if (*p) goto body;
    func_002D70D0(D_00463FE8, D_00790FA0);
    return D_00790FA0;
}
