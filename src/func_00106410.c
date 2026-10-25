typedef struct __attribute__((packed,aligned(4))) { u64 a, b, c; s32 d; } Elem1C;
typedef struct { Elem1C *data; s32 cap; s32 unk8; s32 count; } Vec1C;
void func_00106288(Vec1C *);

void func_00106410(Vec1C *vec, s32 idx, Elem1C *e) {
    s32 i;
    if (vec->count >= vec->cap) {
        func_00106288(vec);
    }
    for (i = vec->count - 1; i >= idx; i--) {
        vec->data[i + 1] = vec->data[i];
    }
    vec->data[idx] = *e;
    vec->count++;
}
