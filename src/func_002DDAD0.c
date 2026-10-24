/* identical to func_001B6110 (matched), with its names changed by decompdecomp */
s32 func_002DDAD0(u8 *dst, u8 *src, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) *dst++ = *src++;
    return 0;
}

typedef struct { u32 *cur; s32 x4; s32 x8; s32 xC; } Pkt;
s32 func_00191678(Pkt *);

void func_00191728(Pkt *k, u32 v) {
    k->x8 = func_00191678(k);
    *k->cur++ = v | 0x60000000;
    k->xC = 0;
    *k->cur++ = 0;
}

void func_001916D0(Pkt *k, u32 v) {
    k->x8 = func_00191678(k);
    *k->cur++ = v | 0x10000000;
    k->xC = 0;
    *k->cur++ = 0;
}
