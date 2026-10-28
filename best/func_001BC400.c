s32 D_00483F2C;

s32 func_001BC400(f32 *p) {
    f32 x = (f32)*(s32 *)p;
    s32 a = (s32)p[18];
    s32 d = (s32)(p[17] - x);
    s32 base = 0x10;
    s32 r = -1;
    if (D_00483F2C) base = 0x5B;
    if (a < 0x62) {
        r = (d - base) / 47;
        if (r < 0) r = 0;
        if (D_00483F2C) {
            if (r > 2) r = 2;
        } else {
            if (r > 5) r = 5;
        }
    }
    return r;
}
