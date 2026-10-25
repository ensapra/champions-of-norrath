void func_0016CDF8(void *p, s32 i, s32 a, s32 b, s32 c, s32 d, void *e);

void func_0016CBBC(u8 *p) {
    u8 *q = p + 0x910;
    s32 v[5];
    s32 w, h, l, t, bo, sw, sh, w2, h2, bt, ar;
    v[3] = *(s32 *)(q + 0x55A4);
    l = *(s32 *)(q + 0x55A0);
    w = *(s32 *)(p + 0x5AC);
    sw = (l + v[3]) * 2;
    v[0] = *(s32 *)(p + 0x5A0) + *(s32 *)(p + 0x5D4);
    v[1] = *(s32 *)(p + 0x5A4) + *(s32 *)(p + 0x5D4);
    v[2] = *(s32 *)(q + 0x55C0);
    h = *(s32 *)(p + 0x5B0);
    t = *(s32 *)(q + 0x55A8);
    bo = *(s32 *)(q + 0x55AC);
    if (w < sw) {
        l = l * w / sw;
        v[3] = v[3] * w / sw;
    }
    sh = (t + bo) * 2;
    if (h < sh) {
        t = t * h / sh;
        bo = bo * h / sh;
    }
    w2 = w - l * 2 - v[3] * 2;
    bt = v[1] + h;
    ar = v[0] + w;
    v[4] = ar;
    func_0016CDF8(p, 0, ar - v[3] * 2, v[1] + t, w2, v[2], q + *(s32 *)(p + 0x4EC) * 0x140 + 0x4BB0);
    func_0016CDF8(p, 1, v[0] + l * 2, bt - bo, w2, v[2], q + *(s32 *)(p + 0x4EC) * 0x140 + 0x4E30);
    h2 = h - t * 2 - bo * 2;
    func_0016CDF8(p, 2, v[0] + l, v[1] + t * 2, h2, v[2], q + *(s32 *)(p + 0x4EC) * 0x140 + 0x50B0);
    func_0016CDF8(p, 3, v[4] - v[3], bt - bo * 2, h2, v[2], q + *(s32 *)(p + 0x4EC) * 0x140 + 0x5330);
}
