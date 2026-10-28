/* identical to func_00142D88 (matched), with its names changed by decompdecomp */
typedef struct Vec { void **data; s32 size; s32 unk8; s32 count; } Vec;
void func_00144010(Vec *v);
void func_001444B0(Vec *v, s32 idx, Vec *src) {
    s32 n = src->count;
    s32 i;
    while (v->size < v->count + n)
        func_00144010(v);
    for (i = v->count + n - 1; i >= idx + n; i--)
        v->data[i + 1] = v->data[i];
    for (i = 0; i < n; i++)
        v->data[idx + i] = src->data[i];
    v->count += n;
}
