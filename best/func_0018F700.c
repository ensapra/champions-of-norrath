typedef struct { s32 f0; char p0[0xC]; s32 f10; char p1[0x1C]; s32 f30; char p2[0xC]; s32 f40; char p3[0xC]; s32 f50; char p4[0x2C]; s32 f80; } R;
extern R *D_00362D80[];
extern s32 jtbl_004C006C[];
void func_0018F6A0(void *, s32);
void func_0018F7E0(void *);

s32 func_0018F700(s32 a0) {
    char buf[0x20];
    s32 i;
    s32 old = *(volatile s32 *)0x1000E000 & 1;
    s32 *flags = jtbl_004C006C + 0xEA4C / 4;
    R **pp = D_00362D80;
    for (i = 9; i >= 0; i--) {
        if (*flags) {
            R *r = *pp;
            r->f0 = 0;
            r->f30 = 0;
            r->f10 = 0;
            r->f50 = 0;
            r->f40 = 0;
            r->f80 = 0;
        }
        pp++;
        flags++;
    }
    *(volatile s32 *)0x1000E010 = 0xFF1F;
    *(s32 *)0x1000E010 = *(volatile s32 *)0x1000E010 & 0xFF1F0000;
    func_0018F6A0(buf, 0x14);
    func_0018F7E0(buf);
    if (a0 == 1) *(volatile s32 *)0x1000E000 |= 1;
    return old;
}
