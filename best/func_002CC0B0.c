typedef struct { s32 a; s32 b; s8 *buf; s32 n; } Q;
s32 func_002CC0B0(Q *p, s8 *out) {
    s32 i = 0;
    s8 *d;
    s32 x, y;
    if (p->n != 0) {
        d = p->buf;
        x = d[0];
        y = d[1];
        out[0] = x;
        out[1] = y;
        p->n = p->n - 1;
        if (p->n > 0) {
            do {
                d = p->buf + i * 2;
                i++;
                x = d[2];
                y = d[3];
                d[0] = x;
                d[1] = y;
            } while (i < p->n);
        }
        return 1;
    }
    return 0;
}
