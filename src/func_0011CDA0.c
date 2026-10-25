typedef struct A { s32 p[3]; s32 c; s32 pad[3]; s32 f1C; s32 f20; s32 f24; s32 pad2[3]; s32 f34; s32 f38; } A;
extern s32 D_010C4D10[];
void func_0011CB50(s32, A *);
void func_0014CE60(s32, s32, s32);
void func_0014CECC(s32, s32 *, s32 *);
void func_0014D270(s32);

void func_0011CDA0(s32 arg0, A *a) {
    s32 xy[2];
    s32 total = 0;
    s32 i;
    s32 n = a->c;
    s32 y0 = a->f20;
    s32 y1 = a->f34;
    s32 k = a->f1C;
    for (i = 0; i < n; i++) {
        total += i + 1;
    }
    if (k == n) {
        xy[0] = y1;
        xy[1] = a->f38;
    } else {
        func_0014CECC(arg0, &xy[0], &xy[1]);
        if (y0 != y1) {
            xy[0] += ((n - k) * (y1 - y0)) / total;
        }
        y0 = a->f24;
        y1 = a->f38;
        if (y0 != y1) {
            xy[1] += ((n - k) * (y1 - y0)) / total;
        }
    }
    func_0014CE60(arg0, xy[0], xy[1]);
    func_0011CB50(arg0, a);
    if (k == 0 && D_010C4D10[0] != 0) {
        func_0014D270(D_010C4D10[0]);
    }
}
