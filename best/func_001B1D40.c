typedef unsigned char u8;
typedef unsigned int u32;
typedef struct { int sema; int *res; int kind; int unkC; u32 addr; int len0; int idx; } Cmd;
typedef struct { int a; u32 flags; int c; int d; } Slot;
typedef struct { int cur, max, init, wait, attr, opt; } SP2;
extern Cmd D_01109800;
extern Slot D_0110A440[];
extern int D_004C3F9C[], D_004C3FAC[];
extern int D_004C3F18[];
extern char D_0110AD00[];
extern char D_0110AF00[];
extern int CreateSema(SP2 *);
extern int DeleteSema(int);
extern int SignalSema(int);
extern int WaitSema(int);
extern int func_001B08B0(void *, int, int, void *, int, void *, int, int, int);
extern Slot *func_001B10C0(void);
extern void func_001B1538(int);
extern void func_001B1568(void);

int func_001B1D40(int a0, int a1, int a2) {
    Slot *sl;
    u32 fl;
    int sema, i, rv;
    SP2 sp;
    int res;
    sl = func_001B10C0();
    func_001B1538(4);
    if (D_004C3F9C[0] == 0) {
        func_001B1568();
        return -1;
    }
    if (sl == 0 || (fl = sl->flags) == 0) {
        func_001B1568();
        return -9;
    }
    D_01109800.addr = a1;
    D_01109800.unkC = sl->a;
    D_01109800.len0 = a2;
    D_01109800.idx = sl - D_0110A440;
    sp.max = 1;
    sp.init = 0;
    sp.opt = 0;
    sema = CreateSema(&sp);
    D_01109800.kind = 4;
    D_01109800.res = &res;
    D_01109800.sema = sema;
    if (fl & 0x8000) {
        WaitSema(D_004C3FAC[0]);
        if (D_004C3F18[0] == -1) {
            D_004C3F18[0] = D_01109800.sema;
            D_01109800.sema = -D_01109800.sema;
        } else {
            for (i = 1; i < 0x20; i++) {
                if (D_004C3F18[i] == -1) {
                    D_004C3F18[i] = D_01109800.sema;
                    D_01109800.sema = -D_01109800.sema;
                    break;
                }
            }
        }
        SignalSema(D_004C3FAC[0]);
    }
    if (func_001B08B0(D_0110AD00, 4, 0, &D_01109800, 0x1C, D_0110AF00, 4, 0, 0) < 0) {
        DeleteSema(sema);
        func_001B1568();
        return -0xB;
    }
    rv = *(int *)((u32)D_0110AF00 | 0x20000000);
    func_001B1568();
    if (rv == 0) {
        DeleteSema(sema);
        return -0xB;
    }
    if (fl & 0x8000) {
        DeleteSema(sema);
        return 0;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return res;
}
