static inline s32 clampi(f32 f, s32 lo, s32 hi) {
    s32 v = f;
    if (v >= hi) v = hi;
    if (v <= lo) v = lo;
    return v;
}

u32 func_00158F10(u32 col, f32 s) {
    s32 r, g, b, a;

    r = clampi((f32)(col & 0xFF) * s, 0, 0xFF);
    g = clampi((f32)((col >> 8) & 0xFF) * s, 0, 0xFF);
    b = clampi((f32)((col >> 16) & 0xFF) * s, 0, 0xFF);
    a = clampi((f32)((col >> 24) & 0xFF) * s, 0, 0xFF);
    return r | (a << 24) | ((b << 16) | (g << 8));
}
