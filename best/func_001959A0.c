typedef signed char s8;
typedef struct S { int f0; int f4; short h08; short h0A; char name[0x40]; int f4C; int f50; s8 b54; s8 b55; s8 b56; } S;
extern s8 D_004845BE;
extern int D_004844A8, D_004845C4, D_00486A78;
extern S *D_004845C0;
extern char D_004845C8[], D_007CC530[], D_00464CA8[], D_00464CB8[], D_00464CC8[];
extern int func_003044FC(void *, void *);
extern void func_00303EB8(void *, void *, void *);
extern S *func_001951D0(void *, int);
extern int func_00166D20(void);
extern void func_001729C8(int);
extern void func_00166BF8(void *, int, void *, int);
extern void func_0016D160(int);
extern void func_0016C550(int);
extern void func_00304640(void *, void *);

void func_001959A0(void *ctx, S *s, int *o1, int *o2) {
    S *g;
    char buf[0x40];
    int *q1 = o1, *q2 = o2;
    if (s->h0A && !func_003044FC(ctx, s->name)) {
        *q2 = s->f0;
        *q1 = *q2 + s->f4C;
        return;
    }
    *q1 = 0;
    *q2 = 0;
    g = D_004845C0;
    if (g == 0) {
        if (s->f50) {
            s->f50--;
            return;
        }
        func_00303EB8(buf, D_004845C8, ctx);
        if (func_001951D0(buf, s->b54) != 0) {
            D_00486A78 = s->h0A;
            D_004845C4 = D_004844A8;
            D_004845C0 = s;
            func_00304640(D_007CC530, ctx);
            s->h0A = 0;
            s->h08 = 0;
        } else {
            s->f50 = 600;
        }
        return;
    }
    if (D_004844A8 - D_004845C4 < 4) return;
    if (g->h08 == 0) {
        S *r;
        int a, d, e;
        if (func_00166D20()) return;
        if (D_00486A78) func_001729C8(g->f0);
        g->h08 = 1;
        r = func_001951D0(D_007CC530, g->b54);
        a = r->f4 << 11;
        e = ((int *)r)[3] << 11;
        d = r->h0A << 11;
        e = e - a;
        if (g->b54) {
            func_00166BF8(D_00464CA8, g->f0, &D_004845BE, e + d);
        } else {
            func_00166BF8(g->b56 ? D_00464CB8 : D_00464CC8, g->f0, &D_004845BE, e + d);
        }
        g->f4C = e;
    } else if (D_004845BE) {
        func_0016D160(g->f0);
        func_0016C550(g->f0 + g->f4C);
        func_00304640(g->name, D_007CC530);
        g->h0A = 1;
        D_004845C0 = 0;
    }
}
