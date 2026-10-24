typedef struct __attribute__((packed)) { u64 a; u64 b; } P16;
typedef struct GuiSubBB4 { char pad[0xE0]; void (*fn)(void *); } GuiSubBB4;
typedef struct GuiNodeBB4 {
    char pad0[0x4C]; GuiSubBB4 *sub;
    char pad1[0xB8 - 0x50]; P16 v;
    char pad2[0x910 - 0xC8]; struct GuiNodeBB4 *cur;
} GuiNodeBB4;

void func_00162BB4(GuiNodeBB4 *p)
{
    GuiNodeBB4 *q;
    void (*fn)(void *);
    q = p->cur;
    fn = q->sub->fn;
    if (fn != 0) {
        fn(q);
        q = p->cur;
        p->v = q->v;
    }
}
