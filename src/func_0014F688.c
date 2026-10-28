typedef struct P {
    char p0[0xA4]; s32 f_a4;
    char p1[0x4EC - 0xA8]; s32 idx;
    char p2[0x5A0 - 0x4F0]; s32 f5a0; s32 f5a4;
    char p3[0x5D4 - 0x5A8]; s32 f5d4;
    char p4[0x8E0 - 0x5D8]; char b8e0[0x30]; u64 q910[1];
    char p5[0x980 - 0x918]; s32 f980; char p6[4]; u64 f988; s32 f990; s32 f994; s32 f998; s32 f99c;
    char p7[0x9B0 - 0x9A0]; s32 f9b0;
} P;
typedef struct A { s32 k, x, y; } A;
extern void (*D_001C78FC[])(P *);
extern void func_0014F86C(void); extern void func_0014F920(P *);
extern void func_001517DC(s32, P *, A *); extern void func_00171AE0(void *);
void func_0014F688(P *p) {
    A a;
    func_0014F86C();
    func_0014F920(p);
    if (p->f_a4) {
        s32 n = p->f994;
        if (n) {
            p->f994 = n - 1;
            if (p->f990) {
                p->q910[p->idx * 10] = p->f988;
            }
        } else {
            p->f990 = 0;
        }
        if (p->f980) func_00171AE0(p->b8e0 + p->idx * 0x50);
        D_001C78FC[0](p);
    }
    if (p->f9b0) {
        a.x = p->f5a0 + p->f5d4 + p->f998;
        a.y = p->f5a4 + p->f5d4 + p->f99c;
        a.k = 4;
        func_001517DC(p->f9b0, p, &a);
    }
}
