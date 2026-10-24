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
    ((void (*)(void *))f)(q);
    q = p->cur;
    p->v = q->v;
}

extern u8 func_001C8098[];
void func_0014D328(s32, s32);
typedef struct { u8 pad[0x890]; s32 x890, x894; } S157E44;

void func_00157E44(S157E44 *arg0, s32 arg1) {
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0x5F8);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D328(arg0->x890, arg1);
    func_0014D328(arg0->x894, arg1);
}
