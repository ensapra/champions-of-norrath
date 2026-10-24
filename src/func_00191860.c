typedef unsigned int u128 __attribute__((mode(TI)));
typedef struct {
    u32 *cur;
    u32 unk4;
    u32 unk8;
    u32 *vifcode;
    u32 unk10;
    u64 *gtag;
} VifPk;

void func_00191920(VifPk *, s32, s32);

void func_001917D8(VifPk *p, s32 flag)
{
    func_00191920(p, 2, 3);
    p->vifcode = p->cur;
    *p->cur++ = flag ? 0xD0000000 : 0x50000000;
}

void ovl_ntgui2_func_00191830(VifPk *p)
{
    u32 *end = p->cur - 1;
    u32 *c = p->vifcode;
    p->vifcode = 0;
    *c += (u32)(end - c) >> 2;
}

void func_00191860(VifPk *p, u128 v)
{
    p->gtag = (u64 *)p->cur;
    *(u128 *)p->cur = v;
    p->cur += 4;
}

void func_00191878(VifPk *p)
{
    u64 *tag = p->gtag;
    u64 t = *tag;
    u32 n = ((u64 *)p->cur - tag) - 2;
    u64 flg = (t >> 58) & 3;
    u32 *cur;

    if (flg != 1) {
        n >>= 1;
    }
    if (flg != 2) {
        u32 nreg = t >> 60;
        if (nreg == 0) {
            nreg = 16;
        }
        n = (n + nreg - 1) / nreg;
    }
    cur = p->cur;
    p->gtag = 0;
    *tag = t + n;
    while ((u32)cur & 0xC) {
        *cur++ = 0;
    }
    p->cur = cur;
}
