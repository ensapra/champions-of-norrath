void *func_0011B9A8(u32 size);
void func_0011B9E0(void *p);
s32 func_0016FA70(s32 a);

typedef struct {
    u8 pad[0x870];
    s32 *arr;
    s32 cur;
    u32 count;
    u8 pad2[0x88C - 0x87C];
    s32 f88C;
    s32 f890;
} List;

void func_0014A058(List *obj, s32 val, u32 idx) {
    s32 *newarr;
    s32 *old;
    s32 i;
    s32 n;

    if (idx >= obj->count) {
        idx = obj->count;
    }
    newarr = func_0011B9A8(((obj->count * 4 + 0x13) >> 4) << 4);
    if (newarr == NULL) {
        return;
    }
    old = obj->arr;
    for (i = 0; i < idx; i++) {
        newarr[i] = old[i];
    }
    newarr[i] = func_0016FA70(val);
    n = obj->count;
    for (; i < n; i++) {
        newarr[i + 1] = old[i];
    }
    if (old != NULL) {
        func_0011B9E0(old);
    }
    n = obj->count;
    obj->f890 = 1;
    obj->arr = newarr;
    obj->count = n + 1;
    obj->cur = n;
    obj->f88C = 1;
}
