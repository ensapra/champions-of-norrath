typedef struct { void *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
extern void *func_0011B8D0(s32);
extern void func_0011B968(void *);
extern s32 func_001A24AC(void *, void *, s32);
extern void *func_0011B940(void *, s32);

s32 func_0013CAC8(PtrArr *p) {
    s32 n = p->cap;
    if (n > 0) {
        s32 t = n * 5;
        s32 t2 = t * 15;
        void *q = func_0011B8D0(t2 * 8);
        void *old = p->data;
        if ((s32)q < (s32)old) {
            s32 u = p->len * 5;
            s32 u2 = u * 15;
            func_001A24AC(q, old, u2 * 8);
            if (p->data != 0) func_0011B968(p->data);
            p->data = q;
            return 1;
        }
        func_0011B968(q);
    }
    return 0;
}

void func_0013BDB0(PtrArr *p) {
    s32 g = p->grow;
    s32 c = p->cap;
    s32 n = c - g * 2;
    if (c - g * 3 >= p->len && n >= p->unk8) {
        s32 t = n * 5;
        s32 t2 = t * 15;
        p->cap = n;
        p->data = func_0011B940(p->data, t2 * 8);
    }
}
