extern s32 func_001B6328(s32);
extern s32 func_001065D0(void *);
extern s32 func_00106538(void *, s32);
extern s32 func_00106630(void *);
extern u8 D_010C1E80[];
extern s32 D_010C1EA8[];

typedef struct {
    u8 *items;
    s32 b, c;
    s32 count;
    s32 e;
} Q;

void func_001001C8(void) {
    func_001B6328(0);
}

void func_00106DF8(s32 n) {
    func_001065D0(D_010C1E80 + n * 0x14);
    D_010C1EA8[0] = 0;
}

void func_00106E30(s32 n, s32 v) {
    Q *q = (Q *)(D_010C1E80 + n * 0x14);
    s32 i;
    s32 off = 0;
    for (i = 0; i < q->count; i++) {
        if (*(s32 *)(q->items + off) == v) {
            func_00106538(q, i);
            i--;
            off -= 0x1C;
        }
        off += 0x1C;
    }
    if (v == D_010C1EA8[0])
        D_010C1EA8[0] = 0;
}

void func_00106EE8(void) {
    u8 *p = D_010C1E80;
    func_00106630(p);
    func_00106630(p + 0x14);
}
