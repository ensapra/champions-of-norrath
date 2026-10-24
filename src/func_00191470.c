s32 func_001B6110(u8 *dst, u8 *src, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) *dst++ = *src++;
    return 0;
}

typedef struct { s32 *cur; s32 x4; s32 x8; s32 xC; } Pkt;
s32 func_00191678(void);

void func_00191728(Pkt *k, s32 v) {
    s32 *p = k->cur;
    k->x8 = func_00191678();
    *p = v | 0x60000000;
    p++;
    k->xC = 0;
    k->cur = p + 1;
    *p = 0;
}

void func_001916D0(Pkt *k, s32 v) {
    s32 *p = k->cur;
    k->x8 = func_00191678();
    *p = v | 0x10000000;
    p++;
    k->xC = 0;
    k->cur = p + 1;
    *p = 0;
}

void func_00191470(u64 **pp, u32 a, u64 b) {
    u64 *p = *pp;
    *p = b;
    p++;
    *p = a;
    p++;
    *pp = p;
}
