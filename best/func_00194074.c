extern char jtbl_004C006C[];
void func_001A1568(char *, s32, char *);
void func_0019416C(); void func_001944A8(); void func_00194698(); void func_00194B50();
void func_00194E0C(); void func_00194EF8(); void func_00194F14(); void func_00196464();
void func_00196528(); void func_0019658C(); void func_00196658(); void func_00196CA4();
void func_00196CE0(); void func_00196DF0(); void func_00196DF8();
typedef struct {
    void *unk0;
    void (*f4)(); void (*f8)(); void (*fC)(); void (*f10)(); void (*f14)(); void (*f18)(); void (*f1C)();
    void (*f20)(); void (*f24)(); void (*f28)(); void (*f2C)(); void (*f30)(); void (*f34)(); void (*f38)(); void (*f3C)();
} S;
void func_00194074(S *p) {
    if (p == 0)
        func_001A1568(jtbl_004C006C + 0xEC4C, 0x6D, jtbl_004C006C + 0xECF4);
    p->f4 = func_0019416C;
    p->f8 = func_001944A8;
    p->fC = func_00194698;
    p->f10 = func_00194B50;
    p->f2C = func_00196464;
    p->f14 = func_00194F14;
    p->f20 = func_00196528;
    p->f24 = func_0019658C;
    p->f28 = func_00196658;
    p->f30 = func_00194E0C;
    p->f34 = func_00194EF8;
    p->f38 = func_00196CA4;
    p->f3C = func_00196CE0;
    p->f18 = func_00196DF0;
    p->f1C = func_00196DF8;
}
