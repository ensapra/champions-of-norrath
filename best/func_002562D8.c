extern s32 func_00304CFC(u8 *);
extern u16 func_0024FB08(u8);

typedef struct {
    u8 pad0[9];
    u8 b9, bA, bB, bC, bD;
    u16 bE;
    u8 pad10[0x30];
} Ent;
extern Ent D_0042E400[];

void func_0024FC10(u8 *src, u16 *dst) {
    s32 i = 0;
    u16 *p = dst;
    s32 n = func_00304CFC(src);
    if (n > 0) {
        do {
            u16 v = func_0024FB08(src[i]);
            i++;
            *p = ((v >> 8) & 0xFF) | ((v & 0xFF) << 8);
            p++;
        } while (i < n);
    }
    dst[i] = 0;
}

s32 func_002562D8(s32 a, s32 b) {
    Ent *x = &D_0042E400[a];
    Ent *y = &D_0042E400[b];
    if (x->bE < y->bE) return 0;
    if (y->bE < x->bE) return 1;
    if (x->bD < y->bD) return 0;
    if (y->bD < x->bD) return 1;
    if (x->bC < y->bC) return 0;
    if (y->bC < x->bC) return 1;
    return !((u32)((x->bB << 16) | (x->bA << 8) | x->b9) < (u32)((y->bB << 16) | (y->bA << 8) | y->b9));
}
