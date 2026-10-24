void func_001ABAB8();
void func_001ABB20();
void func_001ABBA0();
void func_001ABC08();

typedef struct S1A9868 {
    s32 s0;
    s32 s4;
    s32 s8;
    s16 sC;
    s16 sE;
    s32 s10;
    s32 s14;
    s32 s18;
    struct S1A9868 *p1C;
    void (*fn20)();
    void (*fn24)();
    void (*fn28)();
    void (*fn2C)();
    u8 pad30[0x24];
    s32 s54;
} S1A9868;

void func_001A9868(S1A9868 *p, s16 a, s16 b, s32 c)
{
    p->s54 = c;
    p->sC = a;
    p->sE = b;
    p->fn20 = func_001ABAB8;
    p->fn24 = func_001ABB20;
    p->fn28 = func_001ABBA0;
    p->fn2C = func_001ABC08;
    p->s4 = 0;
    p->s8 = 0;
    p->s10 = 0;
    p->s14 = 0;
    p->s18 = 0;
    p->p1C = p;
    p->s0 = 0;
}
