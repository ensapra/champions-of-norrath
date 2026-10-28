typedef struct { s32 *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
void *func_0011B940(void *, s32);
void *func_0011B8D0(s32);
void ovl_ntgui2_func_00117778(PtrArr *p) {
    s32 n = p->cap + p->grow;
    void *old = p->data;
    p->cap = n;
    if (old)
        p->data = func_0011B940(old, n << 5);
    else
        p->data = func_0011B8D0(n << 5);
}
