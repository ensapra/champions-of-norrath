/* identical to func_0011A478 (matched), with its names changed by decompdecomp */
typedef struct {
    s32 *data;
    s32 cap;
    s32 unk8;
    s32 len;
    s32 grow;
} PtrArr;

void *func_0011B940(void *, s32);
void *func_0011B8D0(s32);
void func_0011A430(PtrArr *, s32, s32);

void func_001428E8(PtrArr *p) {
    s32 n = p->cap + p->grow;
    void *old = p->data;
    p->cap = n;
    if (old)
        p->data = func_0011B940(old, n * 4);
    else
        p->data = func_0011B8D0(n * 4);
}

void func_0011A548(PtrArr *p, s32 *src) {
    if (p->len >= p->cap)
        func_001428E8(p);
    p->data[p->len] = *src;
    p->len++;
}

void func_0011A5B0(PtrArr *p, s32 index, s32 *value) {
    s32 i;
    s32 *q;
    if (p->len >= p->cap)
        func_001428E8(p);
    for (i = p->len - 1; i >= index; i--) {
        p->data[i + 1] = p->data[i];
    }
    p->data[index] = *value;
    p->len++;
}

PtrArr func_0011A790(PtrArr *src, s32 start, s32 end) {
    PtrArr tmp;
    func_0011A430(&tmp, end - start + 1, src->grow);
    for (; start <= end; start++)
        func_0011A548(&tmp, &src->data[start]);
    return tmp;
}
