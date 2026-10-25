typedef struct { u64 *cur; u64 *tag; u64 *gif; } Pkt;
extern s32 D_00484468;
extern s8 D_004844AC;
extern u64 *D_004844C4;
extern u64 *D_004844C8;
void func_0015EB80(u64 *, s32, s32, s32, s32);

static inline void PktClose(Pkt *pk) {
    u64 *n = pk->cur;
    s64 t = (((n - pk->tag) - 2) >> 1) | 0x10000000;
    *pk->gif |= ((n - pk->gif) - 2) >> 1;
    *pk->tag = t;
    if (((t >> 28) & 7) == 1) {
        *pk->tag = (t & (s32)0x8FFFFFFF) | 0x60000000;
    } else {
        n[0] = 0x60000000;
        n[1] = 0;
        pk->cur = n + 2;
        pk->tag = 0;
    }
}

void func_0016EC08(s32 x0, s32 y0, s32 x1, s32 y1, s32 a4, s32 a5) {
    Pkt pk;
    u64 *b = D_004844C8;
    u64 *g, *p1, *p2, *p3, *p4;
    u64 *c, *d;
    if (D_00484468 - (b - D_004844C4) < 3000) return;
    g = b + 2;
    p1 = b + 4;
    p2 = b + 6;
    p3 = b + 8;
    p4 = b + 10;
    ((u32 *)b)[3] = 0x50000007;
    ((u32 *)b)[2] = 0x11000000;
    p1[1] = 1;
    g[0] = 0x1000000000008000;
    g[1] = 0xE;
    p2[0] = 0x44;
    p2[1] = 0x42;
    ((u32 *)p1)[0] = a5;
    ((u32 *)p1)[1] = 0;
    p3[0] = 0x46;
    p3[1] = 0;
    p4[0] = 0x31001;
    p4[1] = 0x47;
    pk.gif = g;
    pk.cur = b + 12;
    pk.tag = b;
    if (D_004844AC) {
        x0 <<= 5; y0 <<= 4; x1 <<= 5; y1 <<= 4;
        x0 += 0x5800; y0 += 0x7200; x1 += 0x5800; y1 += 0x7200;
    } else {
        x0 <<= 4; y0 <<= 4; x1 <<= 4; y1 <<= 4;
        x0 += 0x6C00; y0 += 0x7200; x1 += 0x6C00; y1 += 0x7200;
    }
    c = pk.cur;
    d = c + 2;
    c[0] = x0 | ((u64)y0 << 16) | ((u64)0xA000 << 20);
    c[1] = 5;
    d[0] = x1 | ((u64)y1 << 16) | ((u64)0xA000 << 20);
    d[1] = 5;
    pk.cur = c + 4;
    PktClose(&pk);
    func_0015EB80(D_004844C8, a4, 0, 0, 0);
    D_004844C8 = pk.cur;
}
