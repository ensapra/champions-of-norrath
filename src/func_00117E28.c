typedef struct __attribute__((packed, aligned(4))) { s32 v[8]; } E32;
typedef struct { E32 *data; s32 cap; s32 x; s32 count; } Arr;
void ovl_ntgui2_func_00117778(Arr *);

void func_00117E28(Arr *dst, Arr *src)
{
    s32 n = src->count;
    s32 i;
    while (dst->cap < dst->count + n) {
        ovl_ntgui2_func_00117778(dst);
    }
    for (i = 0; i < n; i++) {
        dst->data[dst->count + i] = src->data[i];
    }
    dst->count += n;
}
