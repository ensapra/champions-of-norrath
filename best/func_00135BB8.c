extern s32 func_003044FC(void *, s32);
extern void func_00304640(void *, void *, void *);
typedef struct { s16 pad[16]; s16 count; s16 pad2; s32 off; } Hdr;
s32 func_00135BB8(Hdr **arg0, s32 arg1, s32 *arg2) {
    volatile s32 hi;
    s32 lo = 0;
    s32 mid, r, sum;
    char buf[0x20];
    hi = (*arg0)->count - 1;
    if (hi >= 0) {
        sum = lo + hi;
        do {
            Hdr *h = *arg0;
            mid = sum / 2;
            if (mid < h->count)
                func_00304640(buf, (char *)h + h->off + mid * 0x18 + 4, h);
            r = func_003044FC(buf, arg1);
            if (r > 0) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
                if (r >= 0) { *arg2 = mid; return 0; }
            }
            sum = lo + hi;
        } while (hi >= lo);
    }
    *arg2 = 0x7FFFFFFF;
    return 0x13;
}
