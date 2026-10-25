typedef struct { long v[120]; } Hist;
typedef struct { u8 pad[0x9A8]; long lag; } State;
extern long D_00448090[];
long func_002F81C0(long, long);

void func_002EF4B8(State *st, long lag, long idx, long *in, long *out) {
    long coef;
    long *p;
    int i;
    if (lag < 40 || lag > 120) lag = st->lag;
    st->lag = lag;
    coef = D_00448090[(int)idx];
    p = out;
    i = 40;
    while (i--) {
        *p = *in++ + (func_002F81C0(coef, p[-(int)lag]) >> 15);
        p++;
    }
    *(Hist *)(out - 120) = *(Hist *)(out - 80);
}
