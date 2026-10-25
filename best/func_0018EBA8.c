typedef int u128 __attribute__((mode(TI)));
typedef struct { s32 w0, w1, w2, w3; s64 q10; s64 q18; s64 q20; s64 q28; s64 q30; s64 q38; s64 q40; s64 q48; s64 q50; s64 q58; s64 q60; s64 q68; } Pkt;

s32 func_0018EBA8(Pkt *p, s16 a1, s32 a2, s16 a3, s16 a4, s32 a5, s16 a6, s16 a7) {
    *(u128 *)&p->q10 = 0;
    p->w1 = 0x06008000;
    p->q68 = 0x53;
    p->w2 = 0x13000000;
    p->w3 = 0x50000006;
    p->q10 = (((p->q10 & ~0x7FFFLL) | 5 | 0x8000) & (-1ULL >> 4)) | ((s64)0x8000 << 45);
    p->q18 = (p->q18 & ~0xFLL) | 0xE;
    p->q20 = (a2 << 16) | (s64)a1 | ((s64)a3 << 24);
    p->q28 = 0x50;
    p->q30 = (a5 << 16) | (s64)a4;
    p->q38 = 0x51;
    p->q40 = (s64)a6 | ((s64)a7 << 16);
    p->q48 = 0x52;
    p->q58 = 0x61;
    p->q60 = 1;
    p->w0 = 0;
    p->q50 = 0;
    return 7;
}
