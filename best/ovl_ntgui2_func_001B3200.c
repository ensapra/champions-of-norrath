typedef struct { s32 sema; void *buf; s32 n; s32 id; } Req;
typedef struct { s32 id; s32 busy; } Hd;
typedef struct { s32 a, cnt, init, d, e, f, g, h; } SemaParam;
extern char D_01109800[];
extern char D_0110A440[], D_0110AF00[];
extern s32 D_004C3F9C;
s32 CreateSema(void *);
void DeleteSema(s32);
void WaitSema(s32);
s32 func_001B08B0();
Hd *func_001B10C0(void);
void func_001B1538(s32);
void func_001B1568(void);

s32 ovl_ntgui2_func_001B3200(void) {
    Req *q = (Req *)D_01109800;
    SemaParam sp;
    s32 out[4];
    Hd *h;
    s32 sema, r, id;
    h = func_001B10C0();
    func_001B1538(10);
    if (D_004C3F9C == 0) {
        func_001B1568();
        return -1;
    }
    if (h == 0 || h->busy == 0) {
        func_001B1568();
        return -9;
    }
    id = h->id;
    sp.cnt = 1;
    q->id = id;
    sp.init = 0;
    sp.f = 0;
    sema = CreateSema(&sp);
    q->sema = sema;
    q->buf = out;
    q->n = 4;
    if (func_001B08B0(D_0110AF00, 10, 0, q, 0x14, D_0110A440, 4, 0, 0) < 0) {
        DeleteSema(sema);
        func_001B1568();
        return -11;
    }
    h->busy = 0;
    r = *(volatile s32 *)((u32)D_0110A440 | 0x20000000);
    func_001B1568();
    if (r == 0) {
        DeleteSema(sema);
        return -11;
    }
    WaitSema(sema);
    DeleteSema(sema);
    r = out[0];
    if (r > -1) r = 0;
    return r;
}
