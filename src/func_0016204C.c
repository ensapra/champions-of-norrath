extern u8 func_001C8098[];
void func_0015175C(void *, s32, s32, s32);
void func_0016FB0C(void *);

void func_0016264C(void)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
}

typedef struct __attribute__((packed)) { u64 a; u64 b; } P16;
typedef struct GuiSubBB4 { char pad[0xE0]; void (*fn)(void *); } GuiSubBB4;
typedef struct GuiNodeBB4 {
    char pad0[0x4C]; GuiSubBB4 *sub;
    char pad1[0xB8 - 0x50]; P16 v;
    char pad2[0x910 - 0xC8]; struct GuiNodeBB4 *cur;
} GuiNodeBB4;

void func_00162BB4(GuiNodeBB4 *p)
{
    if (p->cur->sub->fn) {
        p->cur->sub->fn(p->cur);
        p->v = p->cur->v;
    }
}

s32 func_00162C18(u8 *p, u16 *e)
{
    s32 r = ((s32 (*)(void))*(void **)(func_001C8098 + 0xDAC))();
    s32 t = *e;
    if (t >= 5) {
        if (t < 8) {
            *(s32 *)(p + 0x920) = 1;
            *(s32 *)(p + 0x91C) = 1;
            func_0016FB0C(p + 0x928);
        } else if (t < 11) {
            *(s32 *)(p + 0x91C) = 0;
            *(s32 *)(p + 0x920) = 1;
            func_0016FB0C(p + 0x928);
        }
    }
    return r;
}

void func_0016204C(u8 *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)(p + 0x918, 1);
}
