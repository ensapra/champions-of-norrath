extern char D_004C58D8[];
extern char D_004C58E0[];
extern char D_004C57C8[];
extern void func_001A2660(void *, s32, s32);
extern void func_0011C298(s32, const char *, ...);
extern void func_0018ACA0(char **, char *);

void func_00101150(char **list) {
    char buf[0x400];
    char *p;
    char **pp;
    s32 i;
    buf[0] = D_004C58D8[0];
    func_001A2660(buf + 1, 0, 0x3FF);
    pp = &p;
    func_0011C298(4, D_004C58E0);
    p = buf;
    for (i = 0; list[i]; i++) {
        func_0018ACA0(pp, list[i]);
    }
    **pp = 0;
    func_0011C298(0, buf);
    func_0011C298(4, D_004C57C8);
}
