typedef struct {
    char pad00[0x50];
    void *f50;
    char pad54[0x480];
    s32 f4D4;
    s32 f4D8;
    s32 f4DC;
    s32 f4E0;
    char pad4E4[8];
    s32 f4EC;
    char pad4F0[0xB0];
    s32 f5A0;
    s32 f5A4;
    char pad5A8[4];
    s32 f5AC;
    char pad5B0[0x24];
    s32 f5D4;
} W;

void func_0014EE74(W *, s32, s32);
void func_0014D470(void *, void *);
void func_00152618(void *);

void func_0014E44C(W *w, s32 a, s32 b) {
    if (a != w->f5A0 || b != w->f5A4) {
        w->f5A0 = a;
        w->f4D4 = b;
        w->f5A4 = b;
        func_0014EE74(w, a, b);
        if (w->f50) func_0014D470(w->f50, w);
        func_00152618(w);
    }
}

void func_0014E39C(W *w) {
    u16 a = w->f5D4;
    u16 b = w->f4DC;
    u16 c = w->f5A0;
    u16 d = w->f4D4;
    u16 e = w->f4E0;
    s16 *p = (s16 *)((char *)w + (w->f4EC << 9) + 0x1F0);
    s32 x = a + (b + c);
    s32 y = e + a + ((u16)w->f4D8 + d);
    s32 z = b + a + ((u16)w->f5AC + c);
    s32 v = a + (e + d);
    p[0x61] = y;
    p[0x41] = v;
    p[0x50] = x;
    p[0x60] = z;
    p[0x30] = x;
    p[0x31] = v;
    p[0x40] = z;
    p[0x51] = y;
}
