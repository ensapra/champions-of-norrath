f32 func_002F16D0(f32, f32);
void func_0016EC08(s32, s32, s32, s32, s32, s32);
extern const f32 D_00480638;
extern const f32 D_0048063C;

void func_001C7BF8(s32 x0, s32 y0, s32 x1, s32 y1, s32 c, s32 d) {
    s32 h = y1 - y0;
    s32 i = 0;
    s32 half = h / 2;
    s32 w = x1 - x0;
    if (h > 0) {
        do {
            f32 t = (f32)(i - half) / (f32)half;
            s32 off, a, y;
            if (t < -1.0f) t = -1.0f;
            if (t > 1.0f) t = 1.0f;
            off = (s32)(func_002F16D0(__builtin_fabsf(t), D_0048063C) * D_00480638);
            y = y0 + i;
            a = x0 + off;
            func_0016EC08(a, y, a + (w - off * 2), y + 1, c, d);
            i++;
        } while (i < h);
    }
}
