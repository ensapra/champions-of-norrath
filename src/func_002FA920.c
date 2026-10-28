typedef struct { u32 lo, hi; s32 val; } E;
s32 func_002FA920(u32 x, E *t) {
    s32 best = -1;
    s32 i;
    if (t != 0) {
        for (i = 0; t[i].lo != 0xffffffff; i++) {
            if (x >= t[i].lo && x < t[i].hi) {
                if (best == -1 || (t[best].hi >= t[i].hi && t[best].lo <= t[i].lo)) best = i;
            } else if (best >= 0 && x < t[i].lo) break;
        }
        if (best != -1) return t[best].val;
    }
    return 0;
}
