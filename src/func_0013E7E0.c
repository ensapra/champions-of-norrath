typedef struct Block {
    struct Block *next;
    s32 f4;
    volatile s32 id;
    s32 flags;
} Block;
typedef struct {
    s32 f0, f4, state, seq, nused;
    Block *free;
    s32 f18, cur;
} Pool;
extern Pool D_004C4F50[];
void func_001B6AE8(Block *);

s32 func_001B6F48(u32 id)
{
    Block *b = (Block *)((id >> 10) << 6);
    Pool *p;
    if ((s32)id < 0 || (id & 0x3FF) != b->id)
        return 0x80008002;
    p = D_004C4F50;
    if (p->cur == id)
        return 0x80000010;
    if (b->flags & 2)
        func_001B6AE8(b);
    b->id = 0;
    b->flags = 0;
    b->next = p->free;
    p->free = b;
    p->nused--;
    return 0;
}

extern s32 D_010D10E8[];
extern s32 D_010D10F8[];
extern s32 D_010D10EC[];
extern s32 D_010D10F0[];
extern s32 D_001C6820[];
s32 func_001404D0(void);
s32 func_001404F0(void);
void func_00140500(void *);
s32 func_00140020(void);
void func_001403B8(void);
void func_00140B78(s32);
void func_0013FFF8(void);

s32 func_0013E7E0(void)
{
    s32 r;
    if (func_001404D0() != 0)
        return 0;
    r = func_001404F0();
    D_010D10E8[0] = r;
    if (r >= 0)
        func_00140500(D_010D10F8);
    return 1;
}

s32 func_0013E738(u8 *o)
{
    if (func_00140020() != 0)
        return 0;
    if (func_001404D0() != 0)
        return 0;
    if (D_010D10EC[0] > 0) {
        D_010D10EC[0]--;
        return 0;
    }
    func_001403B8();
    func_00140B78(*(s32 *)(D_001C6820[0] + D_010D10F0[0] * 0x21C));
    *(void **)(o + 0x18) = func_0013E7E0;
    return 0;
}

void func_0013E710(void)
{
    func_0013FFF8();
    D_010D10EC[0] = 3;
}
