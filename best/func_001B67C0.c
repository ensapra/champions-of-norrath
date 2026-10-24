extern void func_001B64E0(u32, s32);
void func_001B6560(s32 a) { func_001B64E0(0xB0001010, a); }

extern u8 jtbl_004C006C[];
u32 func_001B6790(void)
{
    if (*(s32 *)(jtbl_004C006C + 0x4EEC) < 0) {
        return 0x80008001;
    }
    return *(volatile u32 *)0x10001010 & 3;
}

s32 func_001B5C80(void);
void func_001B5CD8(void);
void func_001B68D0(s32);
s32 func_001B6DC0(void);
s32 func_001B67C0(void)
{
    s32 di = func_001B5C80();
    u32 v = *(volatile u32 *)0x10001010;
    if (v & 0x80) {
        if (di) {
            func_001B5CD8();
        }
        return 1;
    }
    func_001B6560((v & 0xFFFFF3FF) | 0x80);
    func_001B68D0(func_001B6DC0());
    if (di) {
        func_001B5CD8();
    }
    return 0;
}

void _LoadExecPS2(char *, s32, char **);
char *func_001B6150(char *);
void func_001B6268(void);
void func_001B62E0(char *name, s32 argc)
{
    char *path = func_001B6150(name);
    func_001B6268();
    _LoadExecPS2(path, argc, *(char ***)(jtbl_004C006C + 0x5284) + 1);
}
