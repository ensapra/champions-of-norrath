typedef struct Pkt {
    struct Pkt *self;
    s32 x4;
    s32 x8;
    s32 xC;
    s32 x10;
    struct Pkt *next;
    s32 x18;
    struct Cli *cli;
    s32 rpc;
    s32 ssize;
    void *rbuf;
    s32 rsize;
    s32 flag;
    s32 x34;
} Pkt;
typedef struct Cli {
    Pkt *pkt;
    s32 x4;
    s32 sema;
    s32 xC, x10;
    s32 dest;
    s32 gp;
    void *endfunc;
    void *endpara;
    s32 x24;
    s32 waitsema;
} Cli;
typedef struct {
    s32 cur, max, init, wait, attr, opt;
} SemaParam;

extern char D_0047BDE8[], D_0047BE10[], D_0047BE48[], D_0047BE58[];
extern u8 D_008E8C00[];
extern s32 CreateSema_2(SemaParam *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
extern s32 func_002D70D0(char *, ...);
extern s32 func_002D7690(u32, void *, s32, void *, s32, s32);
extern s32 func_002D7858(void *, s32);
extern Pkt *func_002E4700(void *);

s32 func_002E47A8(Pkt *);

extern u32 __get_gp(void);

s32 func_002E4BE0(Cli *c, s32 rpc, s32 mode, void *sbuf, s32 ssize, void *rbuf, s32 rsize, void *endfunc, void *endpara) {
    Pkt *p;
    SemaParam sp;
    s32 semaid;
    
    if (mode != 0) {
        func_002D70D0(D_0047BDE8);
        return -1;
    }
    WaitSema_2(c->waitsema);
    if ((u32)sbuf & 0x3F) {
        func_002D70D0(D_0047BE10, D_0047BE48, sbuf);
        return -1;
    }
    if ((u32)rbuf & 0x3F) {
        func_002D70D0(D_0047BE58, D_0047BE48, rbuf);
        return -1;
    }
    p = func_002E4700(D_008E8C00);
    if (p == 0) return -1;
    c->endpara = endpara;
    c->x4 = p->x18;
    c->pkt = p;
    c->endfunc = endfunc;
    c->gp = __get_gp();
    p->rpc = rpc;
    p->self = p;
    p->ssize = ssize;
    p->rbuf = rbuf;
    p->rsize = rsize;
    p->cli = c;
    p->x34 = c->x24;
    if (sbuf == rbuf) {
        func_002D7858(sbuf, ssize < rsize ? rsize : ssize);
    } else {
        if (ssize > 0) func_002D7858(sbuf, ssize);
        if (rsize > 0) func_002D7858(rbuf, rsize);
    }
    if (mode & 1) {
        if (endfunc == 0) p->flag = 0;
        else p->flag = 1;
        c->sema = -1;
        if (func_002D7690(0x8000001A, p, 0x40, sbuf, c->dest, ssize) == 0) {
            func_002E47A8(p);
            return -2;
        }
        return 0;
    }
    sp.init = 0; sp.max = 1; sp.opt = 0; sp.wait = 0; sp.attr = 0;
    semaid = CreateSema_2(&sp);
    c->sema = semaid;
    if (semaid < 0) {
        func_002E47A8(p);
        return -3;
    }
    p->flag = 1;
    if (func_002D7690(0x8000001A, p, 0x40, sbuf, c->dest, ssize) == 0) {
        func_002E47A8(p);
        DeleteSema_2(semaid);
        return -2;
    }
    WaitSema_2(semaid);
    DeleteSema_2(semaid);
    return 0;
}
