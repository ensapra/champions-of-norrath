typedef unsigned int u128 __attribute__((mode(TI)));
typedef struct VP { u32 *cur; u32 unk4; u32 unk8; u32 *last; } VP;
s32 func_00191268(VP *);

extern u8 jtbl_004C006C[];
u32 func_001B6790(void)
{
    if (*(s32 *)(jtbl_004C006C + 0x4EEC) < 0) {
        return 0x80008001;
    }
    return *(volatile u32 *)0x10001010 & 3;
}

void func_001913B0(VP *p, u128 v)
{
    p->last = p->cur;
    *(u128 *)p->cur = v;
    p->cur += 4;
}

void func_00191338(VP *p, s32 a1, s32 a2, u32 a3)
{
    u32 *c = p->cur;
    p->unk8 = func_00191268(p);
    c[0] = a3 | 0x70000000;
    c++;
    c[1] = a1;
    p->cur = c + 3;
    c[2] = a2;
    c[0] = 0;
}

void func_001912C0(VP *p, s32 a1, s32 a2, u32 a3)
{
    u32 *c = p->cur;
    p->unk8 = func_00191268(p);
    c[0] = a3 | 0x10000000;
    c++;
    c[1] = a1;
    p->cur = c + 3;
    c[2] = a2;
    c[0] = 0;
}
