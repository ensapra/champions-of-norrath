extern f32 D_010D4550[];
f32 func_0014C97C(s32 a) {
    s32 neg = (u32)a >> 31;
    s32 v;
    f32 f;
    if (neg) {
        v = (-a) % 0x10000;
    } else {
        v = a % 0x10000;
    }
    if (v > 0x7FFF) {
        v -= 0x8000;
        neg = !neg;
    }
    if (v >= 0x4000) {
        v = 0x8000 - v;
    }
    f = D_010D4550[v];
    if (neg) f = -f;
    return f;
}
