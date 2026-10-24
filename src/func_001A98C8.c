void *func_001A1CF0(void *, s32);
void *func_001A2660(void *, s32, s32);

typedef struct {
    s32 unk0;
    s32 count;
    void *data;
    u8 items[1];
} Arr;

Arr *func_001A98C8(void *pool, s32 n)
{
    s32 size = n * 0x58;
    Arr *p = (Arr *)func_001A1CF0(pool, size + 0xC);

    if (p == NULL) {
        return p;
    }
    p->count = n;
    p->unk0 = 0;
    p->data = p->items;
    func_001A2660(p->items, 0, size);
    return p;
}
