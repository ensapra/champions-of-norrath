typedef struct __attribute__((packed,aligned(4))) { u64 a, b, c; s32 d, e; } Elem20;
typedef struct { Elem20 *data; s32 cap; s32 unk8; s32 count; } Vec20;
void ovl_ntgui2_func_00117778(Vec20 *);

void func_001178E8(Vec20 *vec, s32 idx, Elem20 *e) {
    s32 i;
    if (vec->count >= vec->cap) {
        ovl_ntgui2_func_00117778(vec);
    }
    for (i = vec->count - 1; i >= idx; i--) {
        vec->data[i + 1] = vec->data[i];
    }
    vec->data[idx] = *e;
    vec->count++;
}
