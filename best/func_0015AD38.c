typedef struct { s32 a; u32 flags; u8 pad[0x1C]; } E15AD;
typedef struct { u8 pad[0xB80]; E15AD *tbl; } G15AD;

s32 func_0015AD38(G15AD *g, s32 i)
{
    E15AD *e = &g->tbl[i];
    if (e->flags & 1)
        return 1;
    return 0;
}

s32 func_0015AD5C(G15AD *g, s32 i)
{
    E15AD *e = &g->tbl[i];
    if (e->flags & 2)
        return 1;
    return 0;
}

s32 func_0015AD80(G15AD *g, s32 i)
{
    E15AD *e = &g->tbl[i];
    if (e->flags & 4)
        return 1;
    return 0;
}

void func_0015ACB0(u8 *d, u8 *s, s32 a, s32 b)
{
    s32 n;
    if (d == s || b == 0 || a == 0) return;
    n = a * b;
    if (d < s) {
        if (n == 0) return;
        do { *d++ = *s++; } while (--n);
    } else {
        s += n; d += n;
        if (n == 0) return;
        do { --s; --d; *d = *s; } while (--n);
    }
}
