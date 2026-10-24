/* identical to func_001A98C8 (matched), with its names changed by decompdecomp */
void *func_00301840(void *, s32);
void *func_003021B0(void *, s32, s32);

typedef struct {
    s32 unk0;
    s32 count;
    void *data;
    u8 items[1];
} Arr;

Arr *func_002FFFF8(void *pool, s32 n)
{
    s32 size = n * 0x58;
    Arr *p = (Arr *)func_00301840(pool, size + 0xC);

    if (p == NULL) {
        return p;
    }
    p->count = n;
    p->unk0 = 0;
    p->data = p->items;
    func_003021B0(p->items, 0, size);
    return p;
}
