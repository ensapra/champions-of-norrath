typedef struct {
    u32 DIR : 1;
    u32 p0 : 1;
    u32 MOD : 2;
    u32 ASP : 2;
    u32 TTE : 1;
    u32 TIE : 1;
    u32 STR : 1;
    u32 p1 : 7;
    u32 TAG : 16;
} DmaChcr0018F;

typedef struct {
    DmaChcr0018F chcr;
    u32 p0[3];
    u32 madr;
    u32 p1[3];
    u32 qwc;
    u32 p2[3];
    u32 tadr;
} DmaChan0018F;

typedef struct {
    u32 chcr;
} DmaChanRaw0018F;

void func_0018F5F0(DmaChan0018F *, u32, s32);
u32 func_0018F678(u32);
void func_0018F580(DmaChan0018F *);
s32 func_001B5C80(void);
void func_001B5CD8(void);

s32 func_0018FCE0(DmaChan0018F *d, u32 addr, s32 mode, s32 arg3)
{
    if (mode == 1) {
        return d->madr < addr;
    }
    func_0018F5F0(d, addr, arg3);
    return 0;
}

u32 func_0018FD18(volatile DmaChanRaw0018F *d)
{
    s32 intr = func_001B5C80();
    u32 enabler = *(volatile u32 *)0x1000F520;
    u32 ctrl;
    u32 old;

    if (!(enabler & 0x10000)) {
        *(volatile u32 *)0x1000F590 = enabler | 0x10000;
    }
    ctrl = *(volatile u32 *)0x1000E000;
    old = d->chcr;
    d->chcr = old & ~0x100;
    *(volatile u32 *)0x1000F590 = enabler;
    if (intr) {
        func_001B5CD8();
    }
    return old;
}

void func_0018FC28(DmaChan0018F *d, u32 addr, u32 qwc)
{
    u32 a = func_0018F678(addr);
    func_0018F580(d);
    if (d->madr != 0xFFFFFFFF) {
        d->madr = a;
    }
    d->qwc = qwc;
    d->chcr.MOD = 2;
    d->chcr.DIR = 0;
    d->chcr.STR = 1;
}

void func_0018FBA8(DmaChan0018F *d, u32 addr, u32 qwc)
{
    u32 a = func_0018F678(addr);
    func_0018F580(d);
    if (d->madr != 0xFFFFFFFF) {
        d->madr = a;
    }
    d->qwc = qwc;
    d->chcr.MOD = 0;
    d->chcr.DIR = 0;
    d->chcr.STR = 1;
}
