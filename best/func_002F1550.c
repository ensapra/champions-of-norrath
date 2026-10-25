s32 func_002F5760(f32 *, f32, f32);
void func_002F7700(s32, f32, f32);
void func_002F1550(f32 x) {
    f32 buf[2];
    union { f32 f; s32 i; } u;
    u.f = x;
    if ((u.i & 0x7FFFFFFF) <= 0x3F490FDA) {
        func_002F7700(1, x, 0.0f);
    } else {
        s32 r = func_002F5760(buf, x, 0.0f);
        func_002F7700(1 - ((r & 1) * 2), buf[0], buf[1]);
    }
}
