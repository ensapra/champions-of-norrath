extern s32 D_010C78C8[], D_010C78CC[], D_010C78D8[], D_010C78DC[], D_010C78E0[], D_010C78E4[];
extern void *jtbl_004C006C[];
void func_0014D240(s32);
typedef struct { s32 a, b, c, d; s32 x10; } T;

s32 func_001242D8(T *t) {
    s32 v;
    u32 k = t->x10 - 1;
    static void *l[] = {&&c1, &&c2, &&c3, &&c4, &&c5, &&c6};
    if (k < 6) {
        goto *jtbl_004C006C[k + 0x9FE4 / 4];
    c1: v = D_010C78C8[0]; goto call;
    c2: v = D_010C78CC[0]; goto call;
    c3: v = D_010C78D8[0]; goto call;
    c4: v = D_010C78DC[0]; goto call;
    c5: v = D_010C78E0[0];
    call:
        if (v != 0)
            func_0014D240(v);
        return 0;
    c6: v = D_010C78E4[0];
        if (v != 0)
            func_0014D240(v);
        return 1;
    }
    return 0;
}
