typedef struct { u32 cls; u32 sign; s32 exp; u64 frac; u64 pad; } FP;
extern void func_00171698(u64 *, FP *);
extern u64 func_001715C0(FP *);
extern u64 func_001708F0(u64, u64);
extern FP D_004CC010;

static inline int isnan_(FP *p) { return p->cls < 2; }
static inline int isinf_(FP *p) { return p->cls == 4; }
static inline int iszero_(FP *p) { return p->cls == 2; }

u64 func_00171040(u64 a, u64 b) {
    FP au, bu, tmp;
    FP *r;
    u64 x, y, alo, ahi, blo, bhi, ll, hl, lh, hh, mid, low, high;
    u32 c1, c2;

    func_00171698(&a, &au);
    func_00171698(&b, &bu);

    if (isnan_(&au)) {
        au.sign = au.sign != bu.sign;
        r = &au;
    } else if (isnan_(&bu)) {
        bu.sign = au.sign != bu.sign;
        r = &bu;
    } else if (isinf_(&au)) {
        if (iszero_(&bu)) {
            r = &D_004CC010;
        } else {
            au.sign = au.sign != bu.sign;
            r = &au;
        }
    } else if (isinf_(&bu)) {
        if (iszero_(&au)) {
            r = &D_004CC010;
        } else {
            bu.sign = au.sign != bu.sign;
            r = &bu;
        }
    } else if (iszero_(&au)) {
        au.sign = au.sign != bu.sign;
        r = &au;
    } else if (iszero_(&bu)) {
        bu.sign = au.sign != bu.sign;
        r = &bu;
    } else {
        x = au.frac;
        y = bu.frac;
        alo = x & 0xFFFFFFFF;
        ahi = x >> 32;
        blo = y & 0xFFFFFFFF;
        bhi = y >> 32;
        ll = func_001708F0(blo, alo);
        hl = func_001708F0(bhi, alo);
        lh = func_001708F0(blo, ahi);
        hh = func_001708F0(bhi, ahi);
        mid = hl + lh;
        c1 = mid < hl;
        low = ll + (mid << 32);
        c2 = low < ll;
        tmp.exp = au.exp + bu.exp + 4;
        tmp.sign = au.sign != bu.sign;
        high = ((u64)c1 << 32) + c2 + (((mid >> 32) & 0xFFFFFFFF) + hh);
        while (high >= ((u64)1 << 61)) {
            tmp.exp++;
            if (high & 1) {
                low >>= 1;
                low |= (u64)1 << 63;
            }
            high >>= 1;
        }
        while (high < ((u64)1 << 60)) {
            tmp.exp--;
            high <<= 1;
            if (low & ((u64)1 << 63))
                high |= 1;
            low <<= 1;
        }
        tmp.frac = high;
        tmp.cls = 3;
        r = &tmp;
    }
    return func_001715C0(r);
}
