/* identical to func_0019FD70 (matched), with its names changed by decompdecomp */
typedef union { f64 d; s64 l; struct { u32 lo, hi; } w; } DU;

#define GETH(dst, src) do { DU u_; u_.d = (src); (dst) = u_.w.hi; } while (0)
#define SETH(dst, src) do { DU u_; u_.d = (dst); u_.w.hi = (src); (dst) = u_.d; } while (0)

f64 func_002F8138(f64 x, f64 y)
{
    s32 hx, hy;
    GETH(hx, x);
    GETH(hy, y);
    SETH(x, (hx & 0x7FFFFFFF) | (hy & 0x80000000));
    return x;
}
