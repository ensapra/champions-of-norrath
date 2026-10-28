extern f32 D_0047D3A8[2];
typedef union { f32 value; u32 word; } FS;
#define GET_FLOAT_WORD(i,d) do { FS gf_u; gf_u.value = (d); (i) = gf_u.word; } while (0)
#define SET_FLOAT_WORD(d,i) do { FS sf_u; sf_u.word = (i); (d) = sf_u.value; } while (0)

f32 func_002F4DB0(f32 x, f32 y)
{
    s32 n, hx, hy, hz, ix, iy, sx, i;
    GET_FLOAT_WORD(hx, x);
    GET_FLOAT_WORD(hy, y);
    sx = hx & 0x80000000;
    hx ^= sx;
    hy &= 0x7fffffff;
    if (hy <= 0x7fffff) {
        return (x * y) / (x * y);
    }
    if (hx < hy) return x;
    if (hx == hy) return D_0047D3A8[(u32)sx >> 31];
    ix = (hx >> 23) - 127;
    iy = (hy >> 23) - 127;
    if (ix >= -126) hx = 0x800000 | (hx & 0x7fffff);
    else hx = hx << (-126 - ix);
    if (iy >= -126) hy = 0x800000 | (hy & 0x7fffff);
    else hy = hy << (-126 - iy);
    n = ix - iy;
    while (n--) {
        hz = hx - hy;
        if (hz < 0) {
            hx = hx + hx;
        } else {
            if (hz == 0) return D_0047D3A8[(u32)sx >> 31];
            hx = hz + hz;
        }
    }
    hz = hx - hy;
    if (hz >= 0) hx = hz;
    if (hx == 0) return D_0047D3A8[(u32)sx >> 31];
    while (hx < 0x800000) {
        hx = hx + hx;
        iy -= 1;
    }
    if (iy >= -126) {
        hx = (hx - 0x800000) | ((iy + 127) << 23);
        SET_FLOAT_WORD(x, hx | sx);
    } else {
        n = -126 - iy;
        hx >>= n;
        SET_FLOAT_WORD(x, hx | sx);
    }
    return x;
}
