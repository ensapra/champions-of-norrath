extern s32 D_010C6EC8[], D_010C6ECC[], D_010C6EF0[], D_010C6EF4[], D_010C6EF8[], D_010C6EE0[], D_010C6EE4[], D_010C6EE8[];
extern void *jtbl_004C006C[];
void func_0014D240(s32);
typedef struct { s32 a, b, c, d; s32 x10; } T;

s32 func_00121FF0(T *t) {
    s32 v;
    u32 k = t->x10 - 1;
    static void *l[] = {&&c1, &&c2, &&c3, &&c4, &&c5, &&c6, &&c7, &&c8};
    if (k < 8) {
        goto *jtbl_004C006C[k + 0x92C4 / 4];
    c1: v = D_010C6EC8[0]; goto call;
    c2: v = D_010C6ECC[0]; goto call;
    c3: v = D_010C6EF0[0]; goto call;
    c4: v = D_010C6EF4[0]; goto call;
    c5: v = D_010C6EF8[0]; goto call;
    c6: v = D_010C6EE0[0]; goto call;
    c7: v = D_010C6EE4[0];
    call:
        if (v != 0)
            func_0014D240(v);
        return 0;
    c8: v = D_010C6EE8[0];
        if (v != 0)
            func_0014D240(v);
        return 1;
    }
    return 0;
}
