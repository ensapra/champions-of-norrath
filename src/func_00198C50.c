extern char D_004CF358[];
extern char D_004CF368[];
void func_001A1568(char *, s32, char *);
void func_00198D10();
void func_00198EA8();
void func_00199C88();
void func_00199814();
void func_0019A4D0();
void func_0019A80C();
void func_0019A990();
void func_0019A4C8();
void func_0019AAC8();
void func_0019AC24();
void func_0019ACE4();

typedef struct {
    void *unk0;
    void (*f4)();
    void *unk8;
    void (*fC)();
    void (*f10)();
    void (*f14)();
    void (*f18)();
    void (*f1C)();
    void (*f20)();
    void (*f24)();
    void (*f28)();
    void (*f2C)();
    void *unk30;
    void *unk34;
    void (*f38)();
} S198C50;

void func_00198C50(S198C50 *p)
{
    if (p == 0) {
        func_001A1568(D_004CF358, 0x83, D_004CF368);
    }
    p->f4 = func_00198D10;
    p->fC = func_00198EA8;
    p->f10 = func_00199C88;
    p->f14 = func_00199814;
    p->f20 = func_0019A4D0;
    p->f24 = func_0019A80C;
    p->f28 = func_0019A990;
    p->f38 = func_0019A4C8;
    p->f2C = func_0019AAC8;
    p->f18 = func_0019AC24;
    p->f1C = func_0019ACE4;
}

typedef struct SDisp {
    u8 pad0[0xF4];
    s32 (*fnF4)(void *);
} SDisp;
extern SDisp *D_00480488;
extern u8 D_004CF218[];

void func_00197AB4(u8 *arg0, u32 arg1)
{
    switch (arg1) {
    case 0:
        *(s32 *)(arg0 + 0x48) = 0x15;
        break;
    case 1:
        *(s32 *)(arg0 + 0x48) = 0xC;
        break;
    case 2:
        *(s32 *)(arg0 + 0x48) = 0;
        break;
    case 3:
        *(s32 *)(arg0 + 0x48) = 0x7;
        break;
    case 4:
        *(s32 *)(arg0 + 0x48) = 0x1E;
    case 5:
        *(s32 *)(arg0 + 0x48) = 0x1E;
        break;
    case 6:
        *(s32 *)(arg0 + 0x48) = 0x10;
        break;
    case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
        *(s32 *)(arg0 + 0x48) = 0x1D;
        break;
    default:
        D_00480488->fnF4(D_004CF218);
        break;
    }
}
