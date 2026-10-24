typedef void (*Fn)(void);
extern u8 D_004C55C8[];
extern void **D_004C3780[];
extern s32 D_004C3784[];
extern void func_001A0800(void *);
void func_0019FE38(void) {
    while (*D_004C3780[0]) {
        void **q = D_004C3780[0];
        D_004C3780[0] = q + 1;
        ((Fn)*q)();
    }
    if (D_004C3784[0] == 0) {
        D_004C3784[0] = 1;
        func_001A0800(D_004C55C8);
    }
}

s32 func_0019FDF8(u8 *a, u8 *b, s32 n) {
    u8 c1, c2;
    s32 r;
    goto test;
loop:
    c1 = *a++;
    c2 = *b++;
    if (c1 != c2)
        return c1 - c2;
    if (c1 == 0)
        return 0;
test:
    r = n;
    n--;
    if (r != 0)
        goto loop;
    return 0;
}
