extern u8 jtbl_004C006C[];
extern u8 func_01109848[];
void func_001A2660(void *, s32, s32);
s32 func_001B5C80(void);
void func_001B5CD8(void);
s32 func_001B6F48(s32);

typedef struct Ent { struct Ent *next; s32 val; s32 aux; s32 pad; } Ent;

void func_001B7C38(void)
{
    *(s32 *)(jtbl_004C006C + 0x4F04) = 0;
    *(s32 *)(jtbl_004C006C + 0x4F08) = 0;
    func_001A2660(func_01109848 + 0x4040, 0, 0x200);
}

s32 func_001B7C60(s32 a, s32 b)
{
    s32 old = *(s32 *)(jtbl_004C006C + 0x4F04);
    s32 r = func_001B5C80();
    *(s32 *)(jtbl_004C006C + 0x4F08) = b;
    *(s32 *)(jtbl_004C006C + 0x4F04) = a;
    func_001A2660((void *)a, 0, b * 16);
    if (r != 0)
        func_001B5CD8();
    return old;
}

s32 func_001B7BC0(u32 id)
{
    Ent *e = (Ent *)((id >> 8) * 16);
    s32 r;
    if ((s32)id < 0 || ((id ^ e->val) & 0xFF))
        return 0x80008002;
    r = func_001B6F48(e->val);
    if (r == 0) {
        Ent *head = *(Ent **)(func_01109848 + 0x4038);
        *(Ent **)(func_01109848 + 0x4038) = e;
        e->next = head;
        e->val = 0;
    }
    return r;
}

s32 func_001B7CE0(s32 idx, s32 a, s32 b)
{
    Ent *tab;
    u32 lim;
    Ent *e;
    if (idx < 0) {
        idx &= 0x7FFFFFFF;
        tab = (Ent *)(func_01109848 + 0x4040);
        lim = 0x20;
    } else {
        tab = *(Ent **)(jtbl_004C006C + 0x4F04);
        lim = *(u32 *)(jtbl_004C006C + 0x4F08);
    }
    if ((u32)idx >= lim)
        return 0x80000069;
    {
        s32 r = func_001B5C80();
        e = &tab[idx];
        e->next = (Ent *)a;
        e->val = b;
        e->aux = 0;
        if (r != 0)
            func_001B5CD8();
    }
    return 0;
}
