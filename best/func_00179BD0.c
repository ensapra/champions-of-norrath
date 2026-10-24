typedef struct { u32 t; s32 v; s32 w; s32 pad; u64 q; } CmpV;
s32 func_00179BD0(CmpV *a, CmpV *b) {
    u32 ta = a->t, tb;
    if (ta >= 2 && (tb = b->t) >= 2) {
        if ((ta ^ 4) == 0) {
            if ((tb ^ 4) == 0) return b->v - a->v;
            return (a->v != 0) ? -1 : 1;
        }
        if ((tb ^ 4) == 0) return (b->v != 0) ? 1 : -1;
        if ((ta ^ 2) == 0) {
            if ((tb ^ 2) != 0) return (b->v != 0) ? 1 : -1;
            return 0;
        }
        if ((tb ^ 2) == 0) return (a->v != 0) ? -1 : 1;
        {
            s32 x = a->v;
            if (x == b->v) {
                s32 p = a->w, q = b->w;
                if (q >= p) {
                    if (p >= q) {
                        u64 m = a->q, n = b->q;
                        if (n >= m) {
                            if (m >= n) return 0;
                            return (x != 0) ? 1 : -1;
                        }
                        return (x != 0) ? -1 : 1;
                    }
                    return (x != 0) ? 1 : -1;
                }
                return (x != 0) ? -1 : 1;
            }
            return (x != 0) ? -1 : 1;
        }
    }
    return 1;
}
