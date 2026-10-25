extern void func_0014C030(s32, s32, void *, s32, s32, s32, void *);
extern f32 func_0014C97C(s32);
extern f32 func_0014CA18(s32);

#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))

void func_0016A628(u8 *a, s32 mode, s32 cx, s32 cy, s32 r, s32 h, u8 *out) {
    s32 sx, sy, n, hh, i, ang, d;
    s32 flag = 0;
    s32 f;

    switch (mode) {
    case 1:
        f = I(a, 0x5ED4); sx = 1; sy = -1;
        if (f == 0) flag = 1;
        break;
    case 2:
        f = I(a, 0x5ED8); sx = -1; sy = 1;
        if (f == 0) flag = 1;
        break;
    case 3:
        f = I(a, 0x5ED8); sx = 1; sy = 1;
        if (f == 0) flag = 1;
        break;
    default:
        sx = -1; sy = -1;
        flag = I(a, 0x5ED4) == 0;
        break;
    }
    n = 0;
    if (flag) n = I(a, 0x5ED0) / 4;
    hh = h + n;
    func_0014C030(I(a, 0x5AC), I(a, 0x5B0), a + 0x5C0, I(a, 0x618), sx * r + cx, sy * hh + cy, out);
    out += 0x20;
    func_0014C030(I(a, 0x5AC), I(a, 0x5B0), a + 0x5C0, I(a, 0x618), cx, sy * hh + cy, out);
    out += 0x20;
    func_0014C030(I(a, 0x5AC), I(a, 0x5B0), a + 0x5C0, I(a, 0x618), cx, cy, out);
    out += 0x20;
    cx += sx * (r * 2);
    for (i = 0; i < 8; ) {
        ang = (i << 14) / 7;
        i++;
        d = (s32)(r * func_0014CA18(ang));
        d = sx * d;
        func_0014C030(I(a, 0x5AC), I(a, 0x5B0), a + 0x5C0, I(a, 0x618), cx - d,
                      sy * (s32)(h * func_0014C97C(ang)) + cy, out);
        out += 0x20;
    }
    func_0014C030(I(a, 0x5AC), I(a, 0x5B0), a + 0x5C0, I(a, 0x618), cx, sy * hh + cy, out);
}
