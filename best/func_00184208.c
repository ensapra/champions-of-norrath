typedef struct G {
    u8 pad0[0x404];
    s32 f404;
    u8 pad1[0x470 - 0x408];
    u8 arr[0x5BD0 - 0x470];
    unsigned idx;
    u8 pad2[0x5C5C - 0x5BD4];
    s32 a;
    int b;
    s32 c;
    void (*cb)(s32, s32);
} G;
extern u8 func_001D1C80[];
extern u8 func_001E23F8[];
extern s32 D_00362700[];
extern u8 D_00362708[];
void func_00181BD8(void);
void func_001844A0(void);
void func_00186AE0(u64);
s32 func_0019706C(void);
void func_00197530(void *, u64);
void func_0019B100(void *);
#define g ((G *)(func_001D1C80 + 0x6C0))

void func_00184208(u64 arg) {
    s32 t, v = 0;
    u64 m1, m2;
    if (g->a != 0 && g->b == 0) {
        if (*(volatile s32 *)(func_001D1C80 + 0x6A8) == -1) func_001844A0();
    } else if (g->b <= 0) {
        return;
    }
    t = D_00362700[0];
    if (t >= 0) v = (unsigned short)t;
    if (*(s32 *)(func_001E23F8 + 0x104) != 0) {
        m1 = (arg & 0x0020002000200020ULL) << 1;
        m2 = (arg & 0x0040004000400040ULL) >> 1;
        arg = (arg & 0xFF9FFF9FFF9FFF9FULL) | m1 | m2;
    }
    if (func_0019706C() == 0) {
        void (*cb)(s32, s32);
        func_00186AE0(arg);
        if (g->c == 0) {
            cb = g->cb;
            g->c = 1;
            if (cb) cb(1, 0);
            func_00181BD8();
        }
    } else {
        void (*cb2)(s32, s32);
        if (g->c != 0) {
            cb2 = g->cb;
            g->c = 0;
            if (cb2) cb2(2, 0);
        }
        func_00197530(g->arr + g->idx * 0xE90, arg);
    }
    if (g->f404 == 0 && v != 0) func_0019B100(D_00362708);
}
