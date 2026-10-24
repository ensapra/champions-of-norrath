extern u8 D_004859B0[];
extern s32 func_00144368(s32, void *);
extern s32 func_00144558(s32);
extern s32 func_002E0478(s32, s32, s32, s32);
extern s32 func_00304CFC(u8 *);
extern u32 func_0024FB08(u8);

typedef struct {
    u8 pad0[9];
    u8 b9, bA, bB, bC, bD;
    u16 bE;
    u8 pad10[0x30];
} Ent;
extern Ent D_0042E400[];

s64 func_0024FA68(void) {
    s32 h = func_00144368(0x14, D_004859B0);
    func_002E0478(1, 0x8140, 0, h);
    func_002E0478(1, 0x8140, 1, h);
    return func_00144558(h);
}

void func_0024FC10(u8 *src, u16 *dst) {
    s32 i = 0;
    u16 *p = dst;
    s32 n = func_00304CFC(src);
    if (n > 0) {
        do {
            u32 v = func_0024FB08(src[i]);
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
    return !(((x->bB << 16) | (x->bA << 8) | x->b9) < ((y->bB << 16) | (y->bA << 8) | y->b9));
}
