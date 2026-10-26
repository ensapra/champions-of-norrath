typedef unsigned char u8;
typedef unsigned int u32;
typedef struct { int sema; int *res; int kind; int unkC; u32 addr; int len0; int len; u8 data[0x10]; int idx; } Cmd;
typedef struct { int a; u32 flags; int c; int d; } Slot;
typedef struct { int cur, max, init, wait, attr, opt; } SP2;
extern Cmd D_008E04C0;
extern Slot D_008E19C0[];
extern int D_004449F4[], D_00444A04[];
extern int D_00444970[];
extern char D_008E1100[];
extern char D_008E1BC0[];
extern int CreateSema_2(SP2 *);
extern int DeleteSema_2(int);
extern int SignalSema_2(int);
extern int WaitSema_2(int);
extern void func_002D7858(u32, int);
extern int func_002D8270(void *, int, int, void *, int, void *, int, int, int);
extern Slot *func_002D8A80(void);
extern void func_002D8EF8(int);
extern void func_002D8F28(void);

int func_002D9B98(int a0, u32 addr, int len) {
    Slot *sl;
    u32 fl;
    int sema, n, i, rv;
    SP2 sp;
    int res;
    sl = func_002D8A80();
    func_002D8EF8(3);
    if (D_004449F4[0] == 0) {
        func_002D8F28();
        return -1;
    }
    if (sl == 0 || (fl = sl->flags) == 0) {
        func_002D8F28();
        return -9;
    }
    D_008E04C0.unkC = sl->a;
    sp.max = 1;
    D_008E04C0.idx = sl - D_008E19C0;
    D_008E04C0.len0 = len;
    D_008E04C0.addr = addr;
    sp.init = 0;
    sp.opt = 0;
    sema = CreateSema_2(&sp);
    D_008E04C0.kind = 4;
    D_008E04C0.res = &res;
    D_008E04C0.sema = sema;
    if (fl & 0x8000) {
        WaitSema_2(D_00444A04[0]);
        n = addr & 0xF;
        if (D_00444970[0] == -1) {
            D_00444970[0] = D_008E04C0.sema;
            D_008E04C0.sema = -D_008E04C0.sema;
        } else {
            for (i = 1; i < 0x20; i++) {
                if (D_00444970[i] == -1) {
                    D_00444970[i] = D_008E04C0.sema;
                    D_008E04C0.sema = -D_008E04C0.sema;
                    break;
                }
            }
        }
        SignalSema_2(D_00444A04[0]);
    } else {
        n = addr & 0xF;
    }
    if (n == 0) n = 0;
    else n = ((addr >> 4) << 4) - (addr - 0x10);
    if (len < n) n = len;
    if (!(fl & 0x20000000)) func_002D7858(addr, len);
    addr |= 0x20000000;
    D_008E04C0.len = n;
    for (i = 0; i < n; i++) D_008E04C0.data[i] = ((u8 *)addr)[i];
    if (func_002D8270(D_008E1BC0, 3, 0, &D_008E04C0, 0x30, D_008E1100, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_002D8F28();
        return -0xB;
    }
    rv = *(int *)((u32)D_008E1100 | 0x20000000);
    func_002D8F28();
    if (rv == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }
    if (fl & 0x8000) {
        DeleteSema_2(sema);
        return 0;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return res;
}
