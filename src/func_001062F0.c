extern void func_001B6328(s32);
void func_001001C8(void) { func_001B6328(0); }

void func_00106220(s32 *p, s32 a1, s32 a2, s32 a3, s32 a4) {
    p[0] = a4;
    p[3] = a1;
    p[2] = a2;
    p[1] = a3;
}

typedef struct { void *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
extern void *func_0011B940(void *, s32);
extern void *func_0011B8D0(s32);

void func_00106288(PtrArr *p) {
    s32 n = p->cap + p->grow;
    void *old = p->data;
    p->cap = n;
    if (old)
        p->data = func_0011B940(old, n * 0x1C);
    else
        p->data = func_0011B8D0(n * 0x1C);
}

void func_001062F0(PtrArr *p) {
    s32 g = p->grow;
    s32 c = p->cap;
    s32 n = c - g * 2;
    if (c - g * 3 >= p->len && n >= p->unk8) {
        p->cap = n;
        p->data = func_0011B940(p->data, n * 0x1C);
    }
}
