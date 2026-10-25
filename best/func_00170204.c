typedef struct {
    u64 NLOOP : 15;
    u64 EOP : 1;
    u64 pad16 : 16;
    u64 ID : 14;
    u64 PRE : 1;
    u64 PRIM : 11;
    u64 FLG : 2;
    u64 NREG : 4;
    u64 REGS;
    s32 data[1][4];
} GifTag;
extern char jtbl_004C006C[];
void func_001AF710(char *fmt, ...);
void func_00170204(GifTag *t) {
    s32 i;
    s32 *p = t->data[0];
    func_001AF710(jtbl_004C006C + 0xBC24, t->NLOOP, t->EOP, t->pad16, t->ID, t->PRE, t->PRIM, t->FLG, t->NREG, (s32)(t->REGS >> 32), (s32)(t->REGS & 0xFFFFFFFF));
    for (i = 0; i < t->NREG * t->NLOOP; i++) {
        func_001AF710(jtbl_004C006C + 0xBC84, i, p[3], p[2], p[1], p[0]);
        p += 4;
    }
}
