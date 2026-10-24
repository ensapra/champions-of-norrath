typedef struct { void *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
extern void *func_0011B940(void *, s32);
extern void *func_0011B8D0(s32);

void func_0013BD40(PtrArr *p) {
    void *old = p->data;
    s32 n = p->cap + p->grow;
    s32 size;
    p->cap = n;
    size = n * 5;
    size = size * 15;
    size = size * 8;
    if (old)
        p->data = func_0011B940(old, size);
    else
        p->data = func_0011B8D0(size);
}
