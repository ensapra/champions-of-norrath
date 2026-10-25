f32 func_002F0F28(f32);
f32 func_002F1368(f32);
#define PI 3.1415925f
#define PIO2 1.5707963f
#define PILO 0.00000015099579f
typedef union { f32 f; s32 i; } FI;

f32 func_002F4978(f32 y, f32 x) {
    f32 z;
    FI t;
    s32 k, m, hx, hy, ix, iy;
    hx = *(s32 *)&x;
    ix = hx & 0x7fffffff;
    hy = *(s32 *)&y;
    iy = hy & 0x7fffffff;
    if (hx == 0x3f800000) return func_002F0F28(y);
    m = ((hy >> 31) & 1) | ((hx >> 30) & 2);
    if (iy <= 0x7fffff) {
        switch (m) {
        case 0:
        case 1: return y;
        case 2: return PI;
        case 3: return -PI;
        }
    }
    if (ix <= 0x7fffff) return (hy < 0) ? -PIO2 : PIO2;
    k = (iy - ix) >> 23;
    if (k > 60) z = PIO2;
    else if (hx < 0 && k < -60) z = 0.0f;
    else z = func_002F0F28(func_002F1368(y / x));
    switch (m) {
    case 0: return z;
    case 1: t.f = z; t.i ^= 0x80000000; return t.f;
    case 2: return PI - (z - PILO);
    default: return (z - PILO) - PI;
    }
}
