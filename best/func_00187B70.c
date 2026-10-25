typedef struct G {
    char pad0[0x90];
    s32 f90;
    char pad1[0xB4 - 0x94];
    s32 (*fB4)(s32, s32, void *);
    char pad2[0xE8 - 0xB8];
    s32 (*fE8)(s32);
    char pad3[0x120 - 0xEC];
    void (*f120)(s32, void *, s32, s32);
} G;
typedef struct A1 {
    char pad0[0x10];
    s32 f10;
    char pad1[4];
    s32 f18;
    char pad2[0x2A3 - 0x1C];
    volatile u8 f2A3;
    char pad3[0x2F4 - 0x2A4];
    volatile u32 f2F4;
} A1;
extern G *D_010F4530[];
#define GP (D_010F4530[0])

void func_00187B70(s32 arg0, A1 *arg1, s32 arg2, s32 arg3) {
    volatile s32 buf[4];
    s32 v, w, t;
    u32 c, col, a, rgb;
    G *g;
    v = arg1->f10 + GP->fE8(0x10);
    t = GP->fE8(0x20);
    w = v + (arg1->f18 - t);
    if (arg2 < v) arg2 = v;
    buf[2] = 0x20;
    if (w < arg2) arg2 = w;
    buf[3] = 0;
    buf[1] = arg3;
    buf[0] = arg2;
    g = GP;
    col = arg1->f2F4;
    a = col & 0xFF;
    rgb = col & 0xFFFFFF;
    c = (((s32)arg1->f2A3 * (s32)a) >> 7 << 24) | rgb;
    buf[3] = g->f90 << 4;
    if (g->fB4(rgb, a, g) == 0) {
        buf[2] += 0x10;
    }
    GP->f120(arg0, (void *)buf, c, 0);
}
