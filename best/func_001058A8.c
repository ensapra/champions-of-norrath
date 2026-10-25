typedef struct {
    s32 x, y, z, w;
} Q1058A8;

s32 func_001742F8(s32);
s32 ovl_ntgui2_func_00174328(s32);

static inline void SetQ1058A8(Q1058A8 *q, s32 x, s32 y, s32 z, s32 w) {
    q->x = x;
    q->y = y;
    q->z = z;
    q->w = w;
}

void func_001058A8(s32 img, s32 tex, Q1058A8 *p, s32 x, s32 y, s32 z, f32 scale) {
    s32 sw, sh;
    s32 off = z * 12;
    s32 x0, y0;

    x -= func_001742F8(tex) >> 1;
    y -= ovl_ntgui2_func_00174328(tex) >> 1;
    sw = func_001742F8(tex) * scale;
    x += 0x800;
    y += 0x800;
    x <<= 4;
    y <<= 4;
    y0 = y + off;
    x0 = x + off;
    sh = ovl_ntgui2_func_00174328(tex) * scale;
    SetQ1058A8(p, 0x60000007, 0, 0, 0x50000007);
    SetQ1058A8(p + 1, 0x8001, 0x60000000, 0x535310, 0);
    SetQ1058A8(p + 2, 0x116, 0, 0, 0);
    SetQ1058A8(p + 3, 0x80, 0x80, 0x80, 0x80);
    SetQ1058A8(p + 4, 8, 8, 0, 0);
    SetQ1058A8(p + 5, x0, y0, 0, 0);
    SetQ1058A8(p + 6, func_001742F8(img) * 16 - 8, ovl_ntgui2_func_00174328(img) * 16 - 8, 0, 0);
    SetQ1058A8(p + 7, x + (sw << 4) + off, y + (sh << 4) + off, 0, 0);
}
