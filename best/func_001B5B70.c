extern char D_00507630[];
extern char D_00507640[];
void func_001AF710(char *, char *);
void func_001AFF48(s32);
void func_001B00E8(void);
s32 func_001B59A0(char *, s32);

s32 func_001B5B70(char *s)
{
    char *q = D_00507630;
    char buf[0x50];
    char *d;
    char *p;

    for (p = s; *p; p++);
    if ((u32)(p - (s - 11)) > 0x50) {
        func_001AF710(D_00507640, s);
        return 0;
    }
    func_001AFF48(0);
    func_001B00E8();
    d = buf;
    while (*q) *d++ = *q++;
    while (*s) *d++ = *s++;
    *d = 0;
    return func_001B59A0(buf, 0);
}
