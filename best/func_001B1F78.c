typedef struct { u32 w0; u32 flags; } Q;
typedef struct { s32 f0; s32 f1; s32 f2; s32 f3; s32 f4; s32 f5; s32 f6; s32 f7; } SemaP;
typedef struct { s32 sema; void *p4; s32 s8; u32 c; s32 a1; s32 a2; s32 p18; s32 n1c; } V;
extern V D_01109800;
extern u8 D_0110A440[];
extern u8 D_0110AF00[];
extern u8 D_01109848[];
extern s32 D_004C3F9C[];
extern s32 D_004C3FAC[];
extern s32 D_004C3F18[];
extern Q *func_001B10C0(void);
extern void func_001B1538(s32);
extern void func_001B1568(void);
extern s32 CreateSema(void *);
extern s32 DeleteSema(s32);
extern s32 WaitSema(s32);
extern s32 SignalSema(s32);
extern void func_001AFE98(void *, s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B1F78(s32 a0, void *a1, s32 a2) {
    Q *q;
    u32 fl;
    s32 sema, i, r;
    s32 stk[12];
    q = func_001B10C0();
    func_001B1538(2);
    if (D_004C3F9C[0] == 0) {
        func_001B1568();
        return -1;
    }
    if (q == NULL || (fl = q->flags) == 0) {
        func_001B1568();
        return -9;
    }
    D_01109800.c = q->w0;
    stk[1] = 1;
    D_01109800.n1c = ((u8 *)q - (u8 *)(D_01109848 + 0x14B8)) >> 4;
    D_01109800.a1 = (s32)a1;
    D_01109800.a2 = a2;
    stk[2] = 0;
    stk[5] = 0;
    sema = CreateSema(&stk[0]);
    D_01109800.s8 = 4;
    D_01109800.p4 = &stk[8];
    D_01109800.sema = sema;
    if (fl & 0x8000) {
        WaitSema(D_004C3FAC[0]);
        if (D_004C3F18[0] == -1) {
            D_004C3F18[0] = D_01109800.sema;
            D_01109800.sema = -D_01109800.sema;
        } else {
            for (i = 1; i < 32; i++) {
                if (D_004C3F18[i] == -1) {
                    D_004C3F18[i] = D_01109800.sema;
                    D_01109800.sema = -D_01109800.sema;
                    break;
                }
            }
        }
        SignalSema(D_004C3FAC[0]);
    }
    if (!(fl & 0x20000000)) func_001AFE98(a1, a2);
    func_001AFE98(&D_01109800, 0x20);
    r = func_001B08B0(D_0110AF00, 2, 0, &D_01109800, 0x20, D_0110A440, 4, 0, 0);
    if (r < 0) {
        DeleteSema(sema);
        func_001B1568();
        return -0xB;
    }
    func_001B1568();
    if (*(u32 *)(0x20000000 | (u32)D_0110A440) == 0) {
        DeleteSema(sema);
        return -0xB;
    }
    if (fl & 0x8000) {
        DeleteSema(sema);
        return 0;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return stk[8];
}
