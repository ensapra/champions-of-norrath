typedef struct { u32 *cur; s32 x4; void *x8; s32 xC; } Pkt;
void *func_00191678(Pkt *);

void func_00191728(Pkt *k, u32 v) {
    k->x8 = func_00191678(k);
    *k->cur++ = v | 0x60000000;
    k->xC = 0;
    *k->cur++ = 0;
}

void func_001916D0(Pkt *k, u32 v) {
    u32 *p;
    k->x8 = func_00191678(k);
    p = k->cur;
    *p++ = v | 0x10000000;
    k->xC = 0;
    k->cur = p + 1;
    *p = 0;
}
