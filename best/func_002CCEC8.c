extern s32 D_00483F30;
extern u8 D_008D88B8[12];
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);

void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8*)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8[4] = 0;
        D_008D88B8[1] = 0;
        D_008D88B8[3] = 0x20;
        D_008D88B8[0] = 1;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}

typedef struct {
    s8 x0;
    s32 x4;
    s32 x8;
    s32 xC;
    u32 x10;
    void *x14;
    s32 x18;
    s32 x1C;
} S_002CA2C8;

extern u8 D_0044E670[];
extern u8 D_00453750[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
s32 func_00180260(void);

void func_002CA2C8(S_002CA2C8 *p, s8 a, s32 b, s32 c) {
    p->x0 = a;
    p->x14 = D_0044E670;
    p->xC = b;
    p->x8 = c;
    p->x4 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    p->x14 = D_00453750;
    p->x0 = a;
    p->xC = b;
    p->x8 = c;
    p->x10 = D_00483E5C >> 16;
    p->x1C = func_00180260();
    p->x18 = D_004844A4 + 0x258;
}

extern s32 D_0048661C;
extern s8 D_00483B11;
extern char D_00486620[];
extern s32 D_0048664C;
void func_002E9098(s32, s32);
void func_002EAF50(void);
s32 *func_002EB280(s32);
s32 func_003044FC(s32, char *);
void func_002EB0F8(s32, s32 *);

void func_002CCEC8(void) {
    s32 last;
    s32 i;
    s32 *p;
    D_00483B11 = 1;
    if (D_0048661C == 0) {
        func_002E9098(0, 0);
        D_0048661C = 1;
    }
    func_002EAF50();
    last = -1;
    i = 0;
    while ((p = func_002EB280(i++)) != 0) {
        if (func_003044FC(p[1], D_00486620) == 0) {
            last = p[0];
        }
    }
    func_002EB0F8(last, &D_0048664C);
    D_00483B11 = 0;
}
