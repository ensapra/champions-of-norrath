typedef struct Vec { void **data; s32 size; s32 unk8; s32 count; } Vec;
void func_00143858(Vec *v);
void func_00143CF4(Vec *v, s32 idx, Vec *src) {
    s32 n = src->count;
    s32 i;
    while (v->size < v->count + n)
        func_00143858(v);
    for (i = v->count + n - 1; i >= idx + n; i--)
        v->data[i + 1] = v->data[i];
    for (i = 0; i < n; i++)
        v->data[idx + i] = src->data[i];
    v->count += n;
}
