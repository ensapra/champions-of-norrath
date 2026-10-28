typedef struct W W;
struct W {
    char p0[0x9C]; s32 f9C; s32 fA0; char p1[0x448]; s32 f4EC; char p2[0x108]; s32 f5F8;
    char p3[0x284]; char b880[0x20]; s32 f8A0; char p4[0x1C]; char b8C0[0x10]; char b8D0[0x10];
};
typedef struct { char pad[0x174]; void (*f)(W *); } Tbl;
extern Tbl func_001C7330;
void func_00156CAC(W *);
void func_0016FB0C(void *);
s32 func_0016FB28(void *);
void func_0016FBE8(void *, void *, void *, void *);
void func_00171AE0(void *);

void func_0015679C(W *w) {
    void *a, *b;
    void *pv;
    if (w->fA0 != w->f9C) {
        func_0016FB0C(w->b880);
        w->f8A0 = 1;
    }
    pv = &func_001C7330;
    pv = ((Tbl *)pv)->f;
    ((void (*)(W *))pv)(w);
    pv = (void *)w->f8A0;
    if (pv != 0) {
        void *p = w->b8C0;
        void *t = w->b880;
        void *q = w->b8D0;
        void *u = (char *)w + 0x8B0;
        if (w->f5F8 != 0 && w->f9C != 0) {
            a = p;
            b = q;
        } else {
            a = q;
            b = p;
        }
        func_0016FBE8(t, u, a, b);
        func_00156CAC(w);
        if (w->f8A0 != 0) {
            if (func_0016FB28(t) != 0) w->f8A0 = 0;
            if (w->f8A0 != 0) goto tail;
        }
    }
    if (w->f5F8 == 0) return;
    if (w->f9C == 0) return;
tail:
    func_00171AE0((char *)w + (w->f4EC ^ 1) * 0x130 + 0x620);
}
