typedef struct {u8 pad[0x870]; void **items; s32 x874; s32 count; s32 x87c; s32 x880; s32 current; s32 target; s32 active; s32 dirty; s32 x894; s32 origin;} Gui;
void func_0011B9E0(void *);
void func_0014A32C(Gui *p, u32 index) {
    s32 i;
    if (p->count > 0 && index < p->count) {
        func_0011B9E0(p->items[index]);
        for (i = index; i < p->count - 1; i++) {
            p->items[i] = p->items[i + 1];
        }
        p->active = 1;
        p->items[i] = 0;
        p->count--;
        p->dirty = 1;
    }
}
