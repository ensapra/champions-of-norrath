/* identical to func_001A9868 (matched), with its names changed by decompdecomp */
void func_00303FF8();
void func_00304060();
void func_003040E0();
void func_00304148();

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

void func_002FFF98(S1A9868 *p, s16 a, s16 b, s32 c)
{
    p->s54 = c;
    p->sC = a;
    p->sE = b;
    p->fn20 = func_00303FF8;
    p->fn24 = func_00304060;
    p->fn28 = func_003040E0;
    p->fn2C = func_00304148;
    p->s4 = 0;
    p->s8 = 0;
    p->s10 = 0;
    p->s14 = 0;
    p->s18 = 0;
    p->p1C = p;
    p->s0 = 0;
}
