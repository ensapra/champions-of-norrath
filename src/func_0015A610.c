s16 func_0015A610(s16 arg0, s16 arg1, f32 a2, f32 a3, f32 a4) {
    volatile s32 keep;
    s16 d = arg0 - arg1;
    s32 ad = __builtin_abs((s32)(s16)d);
    s32 sign;
    f32 v;

    sign = d > 0 ? -1 : 1;
    keep = ad;
    v = (f32)ad * a2;
    if (a3 != -1.0f && v < a3) {
        v = a3;
    }
    if (a4 != -1.0f && v > a4) {
        v = a4;
    }
    return (s16)((s32)v * sign + (s32)arg0);
}
