typedef struct { u32 cur, prev, out, pad[3], cnt[5]; } PadSt;
extern PadSt func_001C3BC0[];
extern void (*D_010C4D00[])(u32 *);
#define P (*(PadSt *)((char *)func_001C3BC0 + 0x20))

void func_0011C4F8(void) {
    u32 v;
    P.prev = P.cur;
    if (D_010C4D00[0]) D_010C4D00[0](&P.cur);
    else P.cur = 0;
    if (P.cur & 0x1000) v = P.cnt[0] + 1; else v = 0;
    P.cnt[0] = v;
    if (P.cur & 0x4000) v = P.cnt[1] + 1; else v = 0;
    P.cnt[1] = v;
    if (P.cur & 0x8000) v = P.cnt[2] + 1; else v = 0;
    P.cnt[2] = v;
    if (P.cur & 0x2000) v = P.cnt[3] + 1; else v = 0;
    P.cnt[3] = v;
    if (P.cur & 0x20) v = P.cnt[4] + 1; else v = 0;
    P.cnt[4] = v;
    if (P.cnt[0] >= 0x14) P.out = 0x1000;
    else if (P.cnt[1] >= 0x14) P.out = 0x4000;
    else if (P.cnt[2] >= 0x14) P.out = 0x8000;
    else if (P.cnt[3] >= 0x14) P.out = 0x2000;
    else if (P.cnt[4] >= 0x14) P.out = 0x20;
    else P.out = 0;
}
