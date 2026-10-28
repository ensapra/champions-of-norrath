typedef struct { volatile s32 n0; volatile s32 n1; u8 *volatile p0; u8 *volatile p1; volatile u8 d0[0x40]; volatile u8 d1[0x40]; } Buf;
extern s32 D_00446078[];
extern void iSignalSema_2(s32);
void func_002E1278(u32 a0) {
    Buf *b = (Buf *)(a0 | 0x20000000);
    u8 *out;
    s32 i, n;
    n = b->n0;
    if (n) {
        out = b->p0;
        for (i = 0; i < n; i++, out++) {
            *out = b->d0[i];
            n = b->n0;
        }
    }
    n = b->n1;
    if (n) {
        out = b->p1;
        for (i = 0; i < n; i++, out++) {
            *out = b->d1[i];
            n = b->n1;
        }
    }
    iSignalSema_2(D_00446078[0]);
}
