typedef struct __attribute__((packed, aligned(4))) { s32 v[7]; } E28;
typedef struct { E28 *data; s32 cap; s32 x; s32 count; } Arr;
void func_00106288(Arr *);

void func_00106988(Arr *dst, Arr *src)
{
    s32 n = src->count;
    s32 i;
    while (dst->cap < dst->count + n) {
        func_00106288(dst);
    }
    for (i = 0; i < n; i++) {
        dst->data[dst->count + i] = src->data[i];
    }
    dst->count += n;
}
