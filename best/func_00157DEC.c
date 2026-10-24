typedef struct __attribute__((packed)) { u64 a; u64 b; } P16DEC;
typedef struct GuiNodeDEC {
    char pad0[0x4C]; void *sub;
    char pad1[0xB8 - 0x50]; P16DEC v;
    char pad2[0x890 - 0xC8]; struct GuiNodeDEC *cur;
} GuiNodeDEC;

void func_00157DEC(GuiNodeDEC *p)
{
    GuiNodeDEC *q;
    void *f;
    q = p->cur;
    f = q->sub;
    f = *(void **)((u8 *)f + 0xE0);
    ((s32 (*)(void *))f)(q);
    p->v = p->cur->v;
}
