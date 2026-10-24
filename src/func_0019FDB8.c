typedef union { f32 f; s32 i; } FU;
typedef union { f64 d; s64 l; struct { s32 lo, hi; } w; } DU;

#define GETF(dst, src) do { FU u_; u_.f = (src); (dst) = u_.i; } while (0)
#define SETF(dst, src) do { FU u_; u_.i = (src); (dst) = u_.f; } while (0)

f32 func_0019FC80(f32 x)
{
    s32 ix;
    GETF(ix, x);
    SETF(x, ix & 0x7FFFFFFF);
    return x;
}

f32 func_0019FDB8(f32 x, f32 y)
{
    s32 ix, iy;
    GETF(ix, x);
    GETF(iy, y);
    SETF(x, (ix & 0x7FFFFFFF) | (iy & 0x80000000));
    return x;
}

f64 func_0019FD70(f64 x, f64 y)
{
    s32 hx, hy;
    DU a, b;
    a.d = x;
    hx = a.w.hi;
    b.d = y;
    hy = b.w.hi;
    a.d = x;
    a.w.hi = (hx & 0x7FFFFFFF) | (hy & 0x80000000);
    return a.d;
}
