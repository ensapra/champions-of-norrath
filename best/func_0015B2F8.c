typedef struct { char p0[0x1C]; s32 f1C; char p1[0x24 - 0x20]; } It;
typedef struct {
    char p0[0x5AC];
    s32 f5AC;
    char p1[0x8D4 - 0x5B0];
    s32 f8D4;
    char p2[0xB80 - 0x8D8];
    It *items;
    s32 pos;
    char p3[4];
    s32 idx;
    char p4[0xB98 - 0xB90];
    s32 dflt;
    char p5[0xBF0 - 0xB9C];
    s32 n;
    s32 off;
    char p6[0xCF0 - 0xBF8];
    s32 fCF0;
    char p7[0xD14 - 0xCF4];
    s32 fD14;
    s32 fD18;
} O;
void func_0015B2F8(O *o) {
    s32 n, idx, base, p, off, hi, lo, t, x, e;
    n = o->n;
    if (n == 0) {
        o->off = 0;
        o->pos = 0;
    }
    idx = o->idx;
    base = o->f5AC - (o->f8D4 + o->fCF0) * 2;
    if (idx < n)
        o->pos = o->items[idx].f1C;
    else
        o->pos = o->dflt;
    off = o->off;
    hi = o->fD14;
    p = o->pos + off;
    o->pos = p;
    if (p < hi) {
        t = off - (p - hi);
        o->off = t;
        if (t > 0) {
            o->off = 0;
            o->pos = hi - t;
            return;
        }
        o->pos = hi;
        return;
    }
    e = o->fD18;
    lo = base - e;
    if (lo < p) {
        t = off + o->dflt;
        if (t - e < p) {
            x = base - t;
            if (x > 0) x = 0;
            o->off = off + x;
            o->pos = p + x;
            return;
        }
        if (base < t) {
            o->pos = lo;
            o->off = off - (p - lo);
        }
    }
}
