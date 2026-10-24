extern void func_001AF0E0(const char *, char *);
void func_001AF6D8(const char *fmt, ...) {
    char *ap = (char *)__builtin_next_arg(fmt) - (8 - __builtin_args_info(0)) * 8;
    func_001AF0E0(fmt, ap);
}

extern s32 D_010CE5F8[], D_010CE5FC[], D_010CE600[];
void func_0013CB70(void) {
    D_010CE5F8[0] = 0;
    D_010CE5FC[0] = 10;
    D_010CE600[0] = 0;
}

typedef struct { void *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
extern void *func_0011B8D0(s32);
extern void func_0011B968(void *);
extern s32 func_001A24AC(void *, void *, s32);
extern void *func_0011B940(void *, s32);

s32 func_0013CAC8(PtrArr *p) {
    s32 n = p->cap;
    if (n > 0) {
        void *q = func_0011B8D0(n * 600);
        void *old = p->data;
        if ((s32)q < (s32)old) {
            func_001A24AC(q, old, p->len * 600);
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
        p->cap = n;
        p->data = func_0011B940(p->data, n * 600);
    }
}
