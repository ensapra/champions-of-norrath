typedef struct {
    s32 a;
    s32 b;
    u64 regs;
} GifTag;

s32 D_0048041C;
s32 func_00170480(GifTag *);
void func_0017048C(GifTag *, s32);

GifTag *func_001704BC(GifTag *t, u32 reg)
{
    s32 n = func_00170480(t);
    if (reg & 0x80) {
        reg = (reg & ~0x80) + D_0048041C;
    }
    t->regs |= (u64)reg << (n * 4);
    func_0017048C(t, n + 1);
    return t;
}

void func_001704AC(GifTag *t)
{
    t->b = 0;
    t->a = 0;
    t->regs = 0;
}

void func_0016FE10(u64 *tag, s32 nloop, s32 eop, s32 pre, s32 prim, s32 flg, s32 nreg, ...)
{
    u32 *ap;
    s32 i;

    ap = (u32 *)((char *)__builtin_next_arg(nreg) - 8);
    tag[0] = (nloop | (eop << 15)) | (((u64)flg << 58) | ((u64)prim << 47)) | (((u64)pre << 46) | ((u64)nreg << 60));
    tag[1] = 0;
    for (i = 0; i < nreg; i++) {
        u32 *p = ap;
        ap += 2;
        tag[1] |= (u64)*p << (i * 4);
    }
}
