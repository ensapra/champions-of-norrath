typedef struct { u32 w[4]; } Q16;
extern Q16 *volatile D_010EB5F8[];
extern Q16 D_010EB600[];
extern s32 D_010EB620[];
void FlushCache(s32);
void func_00178D00(Q16 *);

s32 func_00178F28(void) {
    Q16 *p;
    FlushCache(0);
    *(vu32 *)0x10009020 = 0;
    p = D_010EB5F8[0];
    *(vu32 *)0x10009030 = p->w[0] & 0x0FFFFFFF;
    *(vu32 *)0x1000E010 = 2;
    *(vu32 *)0x10009000 = 0x145;
    func_00178D00(p);
    D_010EB620[0] = ~D_010EB620[0] & 1;
    D_010EB5F8[0] = &D_010EB600[D_010EB620[0]];
    return 0;
}
