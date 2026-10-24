f32 D_0047FEFC;
f32 D_0047FF00;
f32 D_0047FF04;
f32 D_0047FF08;

f32 func_0015A070(s16 arg0) {
    f32 sign = 1.0f;
    s16 s = arg0;
    f32 a, b, c, d, e;
    if (((s ^ (s << 1)) & 0x8000) != 0) {
        sign = -1.0f;
        s = (s16)((s32)(s << 17) >> 17);
    }
    a = (f32)s * D_0047FEFC;
    b = a * a;
    c = a * b;
    e = a - c * D_0047FF00;
    c = c * b;
    e = e + c * D_0047FF04;
    c = c * b;
    e = e - c * D_0047FF08;
    return sign * (1.0f - (e + e) * e);
}
