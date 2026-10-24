f32 D_0047FF0C;
f32 D_0047FF10;
f32 D_0047FF14;
f32 D_0047FF18;

f32 func_0015A100(s32 arg0) {
    s32 v = arg0 - 0x4000;
    f32 sign = 1.0f;
    f32 a, b, c, e;
    v = (s16)v;
    if (((v ^ (v << 1)) & 0x8000) != 0) {
        sign = -1.0f;
        v = (s32)(v << 17) >> 17;
    }
    a = (f32)v * D_0047FF0C;
    b = a * a;
    c = a * b;
    e = a - c * D_0047FF10;
    c = c * b;
    e = e + c * D_0047FF14;
    c = c * b;
    e = e - c * D_0047FF18;
    return sign * (1.0f - (e + e) * e);
}
