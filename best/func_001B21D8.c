typedef struct {
    s32 sema; s32 *p4; s32 f8; s32 fC; u32 f10; s32 f14; s32 f18;
    u8 data[0x2C - 0x1C];
    s32 f2c;
} Req;
typedef struct { s32 a; s32 b; } Ent;
extern Req D_01109800;
extern Ent D_0110AD00[];
extern u8 D_0110AF00[];
extern u8 D_0110A440[];
extern s32 D_004C3F18[];
extern s32 D_004C3F9C;
extern s32 D_004C3FAC;
typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; } SemaParam;
s32 CreateSema(void *);
void DeleteSema(s32);
void SignalSema(s32);
void WaitSema(s32);
void func_001AFE98(u32, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
Ent *func_001B10C0(void);
void func_001B1538(s32);
void func_001B1568(void);

s32 func_001B21D8(s32 unused, u32 addr, s32 len)
{
    s32 sp10[6];
    s32 sp30;
    Ent *ent;
    s32 flags, sema, n, i;
    u8 *buf;
    Req *rq = &D_01109800;
    ent = func_001B10C0();
    func_001B1538(3);
    if (D_004C3F9C == 0) {
        func_001B1568();
        return -1;
    }
    if (ent == 0 || (flags = ent->b) == 0) {
        func_001B1568();
        return -9;
    }
    rq->fC = ent->a;
    sp10[1] = 1;
    rq->f2c = ((u8 *)ent - (u8 *)D_0110AD00) >> 4;
    rq->f14 = len;
    rq->f10 = addr;
    sp10[2] = 0;
    sp10[5] = 0;
    sema = CreateSema(sp10);
    rq->f8 = 4;
    rq->p4 = &sp30;
    rq->sema = sema;
    if (flags & 0x8000) {
        WaitSema(D_004C3FAC);
        n = addr & 0xF;
        if (D_004C3F18[0] == -1) {
            buf = (u8 *)0x01110000;
            D_004C3F18[0] = rq->sema;
            rq->sema = -rq->sema;
        } else {
            buf = (u8 *)0x01110000;
            for (i = 1; i < 0x20; i++) {
                if (D_004C3F18[i] == -1) {
                    D_004C3F18[i] = rq->sema;
                    rq->sema = -rq->sema;
                    break;
                }
            }
        }
        SignalSema(D_004C3FAC);
    } else {
        n = addr & 0xF;
        buf = D_0110A440;
    }
    if (n == 0) n = 0;
    else n = ((addr >> 4) << 4) - (addr - 0x10);
    if (len < n) n = len;
    if (!(flags & 0x20000000)) func_001AFE98(addr, len);
    addr |= 0x20000000;
    rq->f18 = n;
    for (i = 0; i < n; i++) rq->data[i] = *(u8 *)(addr + i);
    if (func_001B08B0(D_0110AF00, 3, 0, rq, 0x30, buf, 4, 0, 0) < 0) {
        DeleteSema(sema);
        func_001B1568();
        return -0xB;
    }
    n = *(s32 *)((u32)buf | 0x20000000);
    func_001B1568();
    if (n == 0) {
        DeleteSema(sema);
        return -0xB;
    }
    if (flags & 0x8000) {
        DeleteSema(sema);
        return 0;
    }
    WaitSema(sema);
    DeleteSema(sema);
    return sp30;
}
