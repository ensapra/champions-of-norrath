typedef struct { u32 base; u32 cur; u32 qwc; u32 pad; } Pkt;
u32 func_00179280(s32, s32);

s32 func_00178C50(Pkt *pk, s32 n, u32 flag) {
    u32 p = func_00179280(0x40, (n * 16 + 0x3F) / 0x40 * 0x40);
    u32 *q = (u32 *)(flag | p);
    pk->base = p;
    if (p == 0) return 1;
    pk->qwc = n;
    pk->cur = (u32)q;
    pk->base = (u32)q;
    q[0] = 0x70000000;
    q[2] = 0;
    q[1] = 0;
    q[3] = 0;
    return 0;
}
