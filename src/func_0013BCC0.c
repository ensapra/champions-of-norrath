typedef struct { void *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
extern void *func_0011B940(void *, s32);
extern void *func_0011B8D0(s32);
extern void (*D_010CE5F4)(void);
extern void (*D_010CE5F0)(void);

void func_0013BD40(PtrArr *p) {
    s32 n = p->cap + p->grow;
    void *old = p->data;
    s32 t, t2;
    p->cap = n;
    t = n * 5;
    t2 = t * 15;
    if (old)
        p->data = func_0011B940(old, t2 * 8);
    else
        p->data = func_0011B8D0(t2 * 8);
}

void func_0013BCC0(void) {
    if (D_010CE5F4 != 0) D_010CE5F4();
}

void func_0013BC98(void) {
    if (D_010CE5F0 != 0) D_010CE5F0();
}
