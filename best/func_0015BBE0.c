typedef struct Ent { s32 f0; s32 flags; u8 pad[0x14]; s32 f1C; s32 f20; } Ent;
#define I(p, o) (*(s32 *)((char *)(p) + (o)))
s32 func_0015BBE0(void *arg, s32 target) {
    void *self = arg;
    Ent *e, *ne;
    s32 min, best, i, ni, d, v, flag, n, b;
    n = I(self, 0xBF0);
    e = *(Ent **)((char *)self + 0xB80);
    if (n <= 0) return -1;
    target -= I(self, 0x5D4) + I(self, 0xCF0);
    min = 0;
    best = -1;
    for (i = 0; i < I(self, 0xBF0) + 1; i++, e++) {
        ne = e + 1;
        flag = e->flags;
        ni = i + 1;
        b = I(self, 0xBF4);
        if (i == I(self, 0xBF0)) v = I(self, 0xB98);
        else v = e->f1C;
        d = target - (b + v);
        if (d < 0) d = -d;
        if (best < 0 || d < min) {
            min = d;
            best = i;
        }
        if (!(flag & 1)) {
            e = ne;
            i = ni;
        }
    }
    I(self, 0xB8C) = best;
    I(self, 0x98) = 2;
    return best;
}
