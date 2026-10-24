typedef struct VP { u32 *cur; u32 unk4; u32 unk8; u32 *last; } VP;
s32 func_00191268(VP *);

void func_00191338(VP *p, s32 a1, s32 a2, u32 a3)
{
    u32 *c;
    s32 r = func_00191268(p);
    c = p->cur;
    p->unk8 = r;
    c[0] = a3 | 0x70000000;
    c++;
    c[1] = a1;
    p->cur = c + 3;
    c[2] = a2;
    c[0] = 0;
}

void func_001912C0(VP *p, s32 a1, s32 a2, u32 a3)
{
    u32 *c;
    s32 r = func_00191268(p);
    c = p->cur;
    p->unk8 = r;
    c[0] = a3 | 0x10000000;
    c++;
    c[1] = a1;
    p->cur = c + 3;
    c[2] = a2;
    c[0] = 0;
}
