/* identical to func_002684F0 (matched), with its names changed by decompdecomp */
extern s32 D_00483F30;
typedef struct { s8 b0, b1, b2, b3, b4; s8 pad[7]; } S88B8;
extern volatile S88B8 D_008D88B8;
typedef struct { u8 a, b; s8 c; u8 pad[0x7B]; } E8938;
extern E8938 D_008D8938[8];
void *func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s32 i;
    if (D_00483F30 == 0) {
        func_003021B0(D_008D8938, 0, sizeof(D_008D8938));
        D_008D88B8.b4 = 0;
        D_008D88B8.b1 = 0;
        D_008D88B8.b0 = 1;
        D_008D88B8.b3 = 0x20;
        for (i = 0; i < 8; i++) {
            D_008D8938[7 - i].c = -2;
        }
    }
}

extern s32 D_00485C80;
extern u16 *D_00485C84;
extern s32 D_00485C88;
extern s32 D_00485C94;
s32 func_002685A0(u16 *src, s32 n) {
    s32 i;
    if (n <= 30000 && D_00485C88 + n + 1 <= 0x10000) {
        D_00485C84[D_00485C88++] = n;
        for (i = 0; i < n; i++) {
            D_00485C84[D_00485C88++] = *src++;
            D_00485C94++;
        }
        return 0;
    }
    D_00485C80 = 1;
    return 1;
}

extern f32 D_0048208C;
extern f32 D_00482090;
extern s32 func_002FB320(f32);
extern s32 func_002F0B98(s32);
extern void func_002FBB50(s32);
void func_00268548(f32 x) {
    s32 r;
    if (x > D_0048208C || x < D_00482090)
        D_00485C80 = 1;
    r = func_002FB320(x);
    r = func_002F0B98(r);
    func_002FBB50(r);
    r = 0;
}

typedef struct { u8 pad[0x56]; u8 w, h; } S6E50b;
typedef struct { s32 pad0; S6E50b *p; u8 f : 1; } S6E50;
void func_00266E50(S6E50 *a) {
    s32 i, j;
    for (i = 0; i < (a->f ? a->p->w : a->p->h); i++)
        for (j = 0; j < (a->f ? a->p->h : a->p->w); j++)
            ;
}
