typedef struct { char p0[0x204]; char a204[0x100]; char a304[0x100]; char a404[0x100]; char p504[0xFC]; s32 f500, f504, f508, f50C; } Rec;
typedef struct { s32 f0, f4, f8, fC; } Q;
typedef struct { char pad[8]; void *cb; char pad2[0x14]; } Loc;
extern s32 D_001BB904[];
extern char D_001BB908[];
extern Rec D_001BD258[];
extern s32 D_001C6804[];
extern s32 D_001C4D34[];
extern char D_004CA220[];
extern char D_004CA1D8[];
void func_001A42B8(char *, char *);
void func_0013B5F8(char *, char *);
void func_0011DA20(s32, s32);
void func_00118140(Loc *, s32, void *, void *, void *);
void func_00118160(Loc *);
void func_0013E700(s32, void *);
void func_0013E710(void);
void func_0013E738(void);
void func_0013E830(void);
void func_00128880(void);

void func_00128A48(void) {
    Loc l;
    Rec *d = D_001BD258;
    Q *p = (Q *)&D_001BB908[D_001BB904[0] * 0x510 + 0x500];
    d->f504 = p->f4;
    d->f508 = p->f8;
    d->f50C = p->fC;
    func_001A42B8(d->a304, D_001BB908 + 0x304 + D_001BB904[0] * 0x510);
    func_001A42B8(d->a404, D_001BB908 + 0x404 + D_001BB904[0] * 0x510);
    func_001A42B8(d->a204, D_001BB908 + 0x204 + D_001BB904[0] * 0x510);
    switch (D_001C6804[0]) {
    case 2:
        func_0013B5F8(D_004CA220, D_004CA1D8);
        func_0011DA20(5, 4);
        break;
    case 1:
    case 3:
        func_00118140(&l, 1, func_0013E710, func_0013E738, func_0013E830);
        l.cb = func_00128880;
        func_0013E700(D_001C4D34[0], 0);
        func_00118160(&l);
        break;
    }
}
