typedef struct { s32 v[5]; } Elem14;
typedef struct { Elem14 *data; s32 cap; s32 unk8; s32 count; } Vec14;
void func_0013A3F8(Vec14 *);

void func_0013A570(Vec14 *vec, s32 idx, Elem14 *e) {
    s32 i;
    if (vec->count >= vec->cap) {
        func_0013A3F8(vec);
    }
    for (i = vec->count - 1; i >= idx; i--) {
        vec->data[i + 1] = vec->data[i];
    }
    vec->data[idx] = *e;
    vec->count++;
}
