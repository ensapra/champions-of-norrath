typedef struct { s32 cls; s32 sign; s32 normal_exp; u32 fraction; } FN;
typedef union { f32 value; u32 bits; struct { u32 fraction:23; u32 exp:8; u32 sign:1; } b; } FU;
f32 func_002FF808(FN *src) {
    FU flt;
    s32 exp = 0;
    u32 fraction = src->fraction;
    s32 sign = src->sign;
    if ((src->cls ^ 2) != 0) {
        if (fraction != 0) {
            s32 ne = src->normal_exp;
            if (ne < -126) {
                fraction = 0;
            } else {
                if (ne >= 129 || ((exp = ne + 127), ne == 128 && (s32)fraction < 0)) {
                    exp = 255;
                    fraction = 0;
                } else {
                    fraction >>= 7;
                }
            }
        }
    } else {
        fraction = 0;
    }
    flt.b.fraction = fraction;
    flt.b.exp = exp;
    flt.b.sign = sign;
    return flt.value;
}
