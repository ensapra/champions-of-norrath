typedef unsigned long long u64;
typedef struct { unsigned int cls; unsigned int sign; int exp; u64 frac; } FP;
extern FP D_0047DF08;
extern u64 func_002F81C0(u64, u64);
extern void func_002FF538(FP *);
extern void func_002FF610(long *, FP *);
#define isnan(x) ((x)->cls < 2)
#define isinf(x) (((x)->cls ^ 4) == 0)
#define iszero(x) (((x)->cls ^ 2) == 0)

void func_002FB680(long arg0, long arg1) {
    FP a, b, t;
    FP *r;
    long x0 = arg0, x1 = arg1;
    func_002FF610(&x0, &a);
    func_002FF610(&x1, &b);
    if (isnan(&a)) {
        a.sign = a.sign != b.sign;
        r = &a;
    } else if (isnan(&b)) {
        b.sign = a.sign != b.sign;
        r = &b;
    } else if (isinf(&a)) {
        if (iszero(&b)) r = &D_0047DF08;
        else { a.sign = a.sign != b.sign; r = &a; }
    } else if (isinf(&b)) {
        if (iszero(&a)) r = &D_0047DF08;
        else { b.sign = a.sign != b.sign; r = &b; }
    } else if (iszero(&a)) {
        a.sign = a.sign != b.sign;
        r = &a;
    } else if (iszero(&b)) {
        b.sign = a.sign != b.sign;
        r = &b;
    } else {
        u64 x = a.frac, y = b.frac;
        u64 mask = 0xFFFFFFFFULL;
        u64 nl = x & mask, nh = x >> 32, ml = y & mask, mh = y >> 32;
        u64 pp_ll = func_002F81C0(ml, nl);
        u64 pp_hl = func_002F81C0(mh, nl);
        u64 pp_lh = func_002F81C0(ml, nh);
        u64 pp_hh = func_002F81C0(mh, nh);
        u64 tmp = pp_hl + pp_lh;
        u64 c1 = tmp < pp_hl;
        u64 low = pp_ll + (tmp << 32);
        u64 c2 = low < pp_ll;
        u64 hi = ((tmp >> 32) & mask) + pp_hh;
        u64 high = ((c1 << 32) + c2) + hi;
        t.exp = a.exp + b.exp + 4;
        t.sign = a.sign != b.sign;
        if (high > (u64)(-1ULL >> 3)) {
            u64 lb = high & 1;
            do {
                high >>= 1;
                t.exp++;
                if ((int)lb) low = (low >> 1) | 0x8000000000000000ULL;
                lb = high & 1;
            } while (high > (-1ULL >> 3));
        }
        if (high <= (-1ULL >> 4)) {
            do {
                t.exp--;
                high <<= 1;
                if (low & 0x8000000000000000ULL) high |= 1;
                low <<= 1;
            } while (high <= (-1ULL >> 4));
        }
        t.frac = high;
        t.cls = 3;
        r = &t;
    }
    func_002FF538(r);
}
