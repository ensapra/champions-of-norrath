typedef struct { s32 chcr; s32 madr; s32 pad8; s32 padc; u32 qwc; } DmaChanX;
extern char D_0047B370[];
extern s32 func_002D70D0(char *, ...);
extern void func_002D32E8(volatile DmaChanX *);
void func_002D2BC0(volatile DmaChanX *d, u32 n, s32 timeout) {
    s32 i = timeout ? timeout : 0x1000000;
    while (d->qwc < n) {
        if (--i < 0) {
            func_002D70D0(D_0047B370);
            func_002D32E8(d);
        }
    }
}

typedef struct { s32 v[5]; } S20;
extern S20 D_008DD830;
S20 *func_002D2F88(S20 *p) {
    *p = D_008DD830;
    return p;
}
