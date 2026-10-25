typedef struct { u32 cls; u32 sign; s32 exp; u64 frac; } FP;
extern char jtbl_004C006C[];
extern void func_00171698(s64 *, FP *);
extern s64 func_001715C0(FP *);
s64 func_001712C8(s64 a, s64 b) {
    FP x, y;
    FP *r;
    u64 num, den, q, bit, nx;
    s64 lt;
    u32 yc, xc;
    func_00171698(&a, &x);
    func_00171698(&b, &y);
    r = &x;
    xc = x.cls;
    if (xc >= 2) {
        r = &y;
        yc = y.cls;
        if (yc >= 2) {
            x.sign ^= y.sign;
            if ((xc ^ 4) == 0 || (xc ^ 2) == 0) {
                if (xc != yc) r = &x;
                else r = (FP *)&jtbl_004C006C[0xBFA4];
            } else if ((yc ^ 4) != 0) {
                if ((yc ^ 2) != 0) {
                    x.exp -= y.exp;
                    num = x.frac;
                    den = y.frac;
                    lt = num < den;
                    if (lt) {
                        num <<= 1;
                        x.exp--;
                        lt = num < den;
                    }
                    q = 0;
                    bit = (u64)0x8000 << 45;
                    do {
                        nx = num << 1;
                        if (lt == 0) {
                            q |= bit;
                            nx = (num - den) << 1;
                        }
                        bit >>= 1;
                        lt = nx < den;
                        num = nx;
                    } while (bit);
                    x.frac = q;
                    r = &x;
                } else {
                    r = &x;
                    x.cls = 4;
                }
            } else {
                x.frac = 0;
                r = &x;
                x.exp = 0;
            }
        }
    }
    return func_001715C0(r);
}
