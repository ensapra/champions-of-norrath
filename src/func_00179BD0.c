typedef struct { u32 cls; s32 sign; s32 exp; s32 pad; u64 frac; } FP;
s32 func_00179BD0(FP *a, FP *b) {
    u32 ta = a->cls, tb;
    if (ta <= 1 || (tb = b->cls) <= 1) return 1;
    if ((ta ^ 4) == 0 && (tb ^ 4) == 0) return b->sign - a->sign;
    else if ((ta ^ 4) == 0) return a->sign ? -1 : 1;
    else if ((tb ^ 4) == 0) return b->sign ? 1 : -1;
    else if ((ta ^ 2) == 0) {
        if ((tb ^ 2) == 0) return 0;
        return b->sign == 0 ? -1 : 1;
    }
    else if ((tb ^ 2) == 0) return a->sign ? -1 : 1;
    if (a->sign != b->sign) return a->sign ? -1 : 1;
    if (a->exp > b->exp) return a->sign ? -1 : 1;
    if (a->exp < b->exp) return a->sign ? 1 : -1;
    if (a->frac > b->frac) return a->sign ? -1 : 1;
    if (a->frac < b->frac) return a->sign ? 1 : -1;
    return 0;
}
