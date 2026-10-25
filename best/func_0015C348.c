typedef union { u64 q; s32 w[2]; } U;
typedef struct { char p[0x4EC]; s32 idx; } G;
extern char func_001C8098[];
void func_00171AE0(void *);
s32 func_00172108(void);

void func_0015C348(G *g) {
    u64 v;
    U *p;
    s32 o;
    (*(void (**)(void))(func_001C8098 + 0xD68))();
    v = (u64)(3 * (func_00172108() & 1)) << 43;
    o = (g->idx ^ 1) * 0x210 + 0x930;
    p = (U *)((char *)g + o);
    p->q = (p->q & 0xFFFFC000FFFFFFFFULL) | v;
    o = (g->idx ^ 1) * 0x210 + 0x9B0;
    p = (U *)((char *)g + o);
    p->q = (p->q & 0xFFFFC000FFFFFFFFULL) | v;
    o = (g->idx ^ 1) * 0x210 + 0xA30;
    p = (U *)((char *)g + o);
    p->q = (p->q & 0xFFFFC000FFFFFFFFULL) | v;
    o = (g->idx ^ 1) * 0x210 + 0xAB0;
    p = (U *)((char *)g + o);
    p->q = (p->q & 0xFFFFC000FFFFFFFFULL) | v;
    o = (g->idx ^ 1) * 0x210 + 0x910;
    func_00171AE0((char *)g + o);
}
