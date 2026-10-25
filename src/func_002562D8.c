typedef struct {
    u8 pad0[9];
    u8 b9, bA, bB, bC, bD;
    u16 bE;
    u8 pad10[0x30];
} Ent;
extern Ent D_0042E400[];

s32 func_002562D8(s32 a, s32 b) {
    Ent *x = &D_0042E400[a];
    Ent *y = &D_0042E400[b];
    u32 ka, kb;
    if (x->bE < y->bE) return 0;
    if (y->bE < x->bE) return 1;
    if (x->bD < y->bD) return 0;
    if (y->bD < x->bD) return 1;
    if (x->bC < y->bC) return 0;
    if (y->bC < x->bC) return 1;
    ka = (x->bB << 16) | (x->bA << 8) | x->b9;
    kb = (y->bB << 16) | (y->bA << 8) | y->b9;
    if (ka < kb) return 0;
    return 1;
}
