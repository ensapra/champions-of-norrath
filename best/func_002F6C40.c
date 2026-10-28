extern const f32 K1, K2, K3, K4, K5, K6;
f32 func_002F6C40(f32 x, f32 y) {
    f32 a, hz, z, r, qx;
    volatile f32 vx = x;
    s32 ix, ex;
    ix = *(volatile s32 *)&vx & 0x7FFFFFFF;
    ex = (s32)x;
    if (ix < 0x32000000) {
        if (ex == 0) return 1.0f;
    }
    z = x * x;
    r = z * (z * (z * (z * (z * (z * K1 + K2) + K3) + K4) + K5) + K6);
    if (ix < 0x3e99999a) {
        return 1.0f - (0.5f * z - (z * r - x * y));
    } else {
        if (ix > 0x3f480000) {
            qx = 0.28125f;
        } else {
            s32 t = ix - 0x01000000;
            qx = *(f32 *)&t;
        }
        hz = 0.5f * z - qx;
        a = 1.0f - qx;
        return a - (hz - (z * r - x * y));
    }
}
