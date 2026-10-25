void *func_0011B9A8(u32);
void func_0011B9E0(void *);
void *func_0016FA70(s32);
typedef struct {
    u8 pad[0x870];
    void **arr;
    s32 cur;
    s32 count;
    u8 pad2[0x88C - 0x87C];
    s32 f88C;
    s32 f890;
} List;

void func_0014A058(List *obj, s32 val, u32 idx) {
    void **newarr;
    void **old;
    s32 i;
    s32 j;
    s32 n;
    if (idx >= obj->count) idx = obj->count;
    newarr = func_0011B9A8(((obj->count + 1) * sizeof(void *) + 15) / 16 * 16);
    if (newarr == NULL) return;
    old = obj->arr;
    for (i = 0; i < idx; i++) newarr[i] = old[i];
    newarr[i] = func_0016FA70(val);
    for (j = i + 1; i < obj->count; i++, j++) newarr[j] = old[i];
    if (old != NULL) func_0011B9E0(old);
    n = obj->count;
    obj->f88C = 1;
    obj->arr = newarr;
    obj->count = n + 1;
    obj->cur = n;
    obj->f890 = 1;
}
