s64 func_002FB5C0(s64, s64);
s64 func_002FB618(s64, s64);
s64 func_002FB680(s64, s64);
s32 func_002FBB50(s64, s32);
extern s64 D_0047D910, D_0047D918, D_0047D920, D_0047D928, D_0047D930, D_0047D938, D_0047D940;

s64 func_002F6A08(s64 x, s64 y, s32 iy) {
    s32 ix;
    s64 z, v, r, t;
    ix = (x >> 0x20) & 0x7FFFFFFF;
    if (ix <= 0x3E3FFFFF && func_002FBB50(x, ix) == 0) {
        return x;
    }
    z = func_002FB680(x, x);
    v = func_002FB680(z, x);
    r = func_002FB680(z, D_0047D910);
    r = func_002FB5C0(r, D_0047D918);
    r = func_002FB680(z, r);
    r = func_002FB5C0(r, D_0047D920);
    r = func_002FB680(z, r);
    r = func_002FB5C0(r, D_0047D928);
    r = func_002FB680(z, r);
    r = func_002FB5C0(r, D_0047D930);
    if (iy == 0) {
        t = func_002FB680(z, r);
        t = func_002FB5C0(t, D_0047D938);
        t = func_002FB680(v, t);
        return func_002FB5C0(x, t);
    }
    t = func_002FB680(y, (s64)0xFF80 << 0x2E);
    t = func_002FB618(t, func_002FB680(v, r));
    t = func_002FB680(z, t);
    t = func_002FB618(t, y);
    t = func_002FB618(t, func_002FB680(v, D_0047D940));
    return func_002FB618(x, t);
}
