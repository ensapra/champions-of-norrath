void func_0016EC08(s32, s32, s32, s32, s32, s32);

void func_001BC2D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 step;
    f32 v;
    f32 q;
    s32 dir;
    s32 t;
    dir = 1;
    if (arg3 < arg1) dir = -1;
    q = 128.0f / (f32)(arg3 - arg1);
    v = 0.0f;
    if (arg1 != arg3) {
        step = q * (f32)dir;
        for (v += step; ; v += step) {
            if (v > 128.0f) v = 128.0f;
            if (v < 0.0f) v = 0.0f;
            if (arg1 >= 0x5D) {
                func_0016EC08(arg0, arg1, arg2, arg1 + 1, 4, (s32)v << 24);
            }
            t = arg1 + dir;
            arg1 = ((arg1 ^ arg3) != 0) ? t : arg1;
            if (arg1 == arg3) break;
        }
    }
}
