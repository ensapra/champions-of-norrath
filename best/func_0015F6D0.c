typedef struct { u8 *cur; u64 *base; } Pk;
typedef struct { int a, b, c; int d, e, f; } Sm;
extern u64 D_00614240[];
extern int D_00483EF4, D_004868E0, D_004868E4, D_004868FC, D_00486900, D_00486904;
extern u32 *D_004868D4, *D_004868D8, *D_004868DC;
extern u32 *D_00614200[];
extern char D_00604200[];
extern u32 *func_002D2CA8(int);
extern void FlushCache_2(int);
extern void func_003021B0(void *, int, int);
extern int CreateSema_2(void *);
extern int AddDmacHandler_3(int, void *, int);
extern void AddIntcHandler_3(int, void *, int);
extern void func_002D5CF8(int);
extern void func_002D5C28(int);
extern void func_0015ED18(void);
extern void func_0015FAC8(void);

void func_0015F6D0(void) {
    Sm sm;
    Pk pk;
    u32 *w;
    u32 *p;
    u8 *cur;
    int i;
    pk.cur = (u8 *)D_00614240;
    pk.base = D_00614240;
    w = (u32 *)((u8 *)D_00614240 + 8);
    cur = (u8 *)w + 0x28;
    w[0] = 0x11000000;
    w[1] = 0x50000002;
    w[2] = 0x8001;
    w[3] = 0x10000000;
    w[4] = 0xE;
    w[7] = 2;
    w[8] = 0x61;
    w[5] = 0;
    w[6] = 0;
    w[9] = 0;
    pk.cur = cur;
    if ((u32)cur & 0xF) {
        do {
            *cur++ = 0;
        } while ((u32)cur & 0xF);
    }
    pk.cur = cur;
    *pk.base = (u64)((((cur - (u8 *)pk.base) >> 3) - 2) >> 1) | 0x10000000;
    D_004868D8 = p = func_002D2CA8(0);
    *p |= 0x40;
    FlushCache_2(0);
    D_004868DC = p = func_002D2CA8(1);
    *p |= 0x40;
    FlushCache_2(0);
    D_004868D4 = p = func_002D2CA8(2);
    *p &= ~0x40;
    FlushCache_2(0);
    D_00483EF4 = 1;
    D_004868E4 = 0;
    for (i = 0; i < 8; i++) {
        u32 *q = (u32 *)(D_00604200 + (i + 0x800) * 16);
        D_00614200[8 + i] = q;
        q[3] = 0;
    }
    D_004868E4 = i;
    func_003021B0(&sm, 0, 0x18);
    sm.a = 0x186A0;
    sm.b = 0;
    D_004868E0 = CreateSema_2(&sm);
    D_004868FC = AddDmacHandler_3(0, func_0015ED18, 0);
    func_002D5CF8(0);
    D_00486900 = AddDmacHandler_3(1, func_0015ED18, 0);
    func_002D5CF8(1);
    D_00486904 = AddDmacHandler_3(2, func_0015ED18, 0);
    func_002D5CF8(2);
    AddIntcHandler_3(0, func_0015FAC8, 0);
    func_002D5C28(0);
    *(volatile u64 *)0x12001010 = 0x7D00;
    *(volatile int *)0x10003010 = 4;
}
