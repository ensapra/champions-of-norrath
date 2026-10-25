typedef struct { s32 w[6]; } K24;
typedef struct { u64 key; u8 *p; } Ent;
typedef struct {
    u8 pad[0x10];
    s8 idx;
    u8 cnt;
    u8 pad2[0xE];
    Ent e[1];
} Tbl;

s32 func_00178B60(K24 *, u64 *);

#define MASK (((((u64)0xFFFFFF << 16) | 0xFF) << 16) | 0xFF00)

s32 func_00178A30(Tbl *t, u64 **out, K24 k) {
    u64 sp20;
    Ent *e;
    u32 i;
    u64 *q;
    s32 r;
    s32 r2;

    e = (Ent *)((u8 *)t + t->idx * 0x10 + 0x20);
    func_00178B60(&k, &sp20);
    i = 0;
    goto test;
    for (;;) {
        i++;
    test:
        if (!(i < (u32)(s8)t->cnt)) break;
        r2 = (((e->key ^ sp20) & MASK) == 0);
        if (r2) break;
        e++;
    }
    if (i == (s8)t->cnt) return 6;
    q = (u64 *)e->p;
    r = (((e->key ^ *q) & MASK) == 0);
    if (!r) return 6;
    *out = q;
    return 0;
}
