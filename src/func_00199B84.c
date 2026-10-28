typedef struct S4 { u8 c0, c1, c2, c3; } S4;
typedef struct Vt {
    char p0[0x20];
    void (*f20)(void *, s32, s32);
    char p1[0x50 - 0x24];
    s32 (*f50)(S4 *);
    char p2[0xF4 - 0x54];
    void (*fF4)(void *);
} Vt;
typedef struct O {
    char p0[0x52];
    u8 f52;
    char p1[0xF4 - 0x53];
    s32 fF4, fF8;
} O;
extern char jtbl_004C006C[];
Vt *D_00480488;
void func_001997A0(O *, s32, s32, void *);
S4 func_001996C0(void *, s32, s32);
s32 func_00189C90(u8 ***);
s32 func_0018ADA8(s32, s32);

s32 func_00199B84(O *o) {
    char buf[16];
    S4 b;
    func_001997A0(o, o->fF4, o->fF8, buf);
    b = func_001996C0(o, o->fF4, o->fF8);
    if (D_00480488->f50(&b) <= 0) {
        D_00480488->fF4(jtbl_004C006C + 0xF37C);
        return 1;
    }
    if (buf[0] == 0) return 1;
    {
        s32 v30[4];
        u8 *p40[4];
        p40[0] = (u8 *)buf;
        while (*p40[0] != 0) {
            v30[0] = func_0018ADA8(func_00189C90((u8 ***)p40), 0);
        }
        D_00480488->f20(v30, o->f52 & 1, 0);
    }
    return 0;
}
