typedef struct { s32 a; u32 flags; u8 pad[0x1C]; } E;
typedef struct { u8 pad[0xB80]; E *tbl; } G;
s32 func_0015AD38(G *g, s32 i) {
    E *e = &g->tbl[i];
    return (e->flags & 1) != 0 ? 1 : 0;
}

void func_0015ACB0(u8 *d, u8 *s, s32 a, s32 b) {
    s32 n, c;
    if (d == s || b == 0 || a == 0) return;
    n = a * b;
    c = n;
    if (d < s) {
        while (c != 0) { *d++ = *s++; c--; }
    } else {
        s += n; d += n;
        while (c != 0) { s--; d--; *d = *s; c--; }
    }
}
