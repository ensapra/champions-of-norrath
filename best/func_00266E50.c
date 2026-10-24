extern s32 D_00485C80;
extern u16 *D_00485C84;
extern s32 D_00485C88;
extern s32 D_00485C94;
s32 func_002685A0(u16 *src, s32 n) {
    s32 i;
    if (n > 30000)
        goto err;
    if (D_00485C88 + n + 1 > 0x10000)
        goto err;
    D_00485C84[D_00485C88++] = n;
    for (i = 0; i < n; i++) {
        D_00485C84[D_00485C88++] = *src++;
        D_00485C94++;
    }
    return 0;
err:
    D_00485C80 = 1;
    return 1;
}

typedef struct { u8 pad[0x56]; u8 w, h; } S6E50b;
typedef struct { s32 pad0; S6E50b *p; u8 flags; } S6E50;
void func_00266E50(S6E50 *a) {
    s32 i, j, c;
    for (i = 0; i < ((u8)(a->flags & 1) ? a->p->w : a->p->h); i++) {
        j = 0;
        do {
            c = j < ((u8)(a->flags & 1) ? a->p->h : a->p->w);
            j++;
        } while (c);
    }
}
