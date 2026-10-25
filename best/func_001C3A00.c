typedef struct { u32 flags; char pad[0x54]; } Entry3BEC8;
extern Entry3BEC8 D_0034BEC8[];
void func_0016EC08(s32, s32, s32, s32, s32, u32);

s32 func_001C3A00(s32 x, s32 y, s32 w, s32 h, s32 z, u32 color, s32 *out, s32 idx, f32 t) {
    s32 p;
    s32 half;
    s32 cy;
    s32 m;
    s32 left;
    s32 x1;
    half = h / 2;
    m = 10;
    left = x + m;
    p = (s32)((w - 20) * t);
    cy = y + half;
    m = p + m;
    p = left + p;
    x1 = x + 4;
    x1 += m;
    func_0016EC08(p - 4, cy - 12, x1, cy + 12, z, 0x80606060);
    x1 = x + 1;
    x1 += m;
    x1 += 4;
    half += 12;
    half = y + half;
    func_0016EC08(p - 3, cy - 11, x1, half + 1, z, 0x40000000);
    func_0016EC08(left, cy - 1, x + w - 10, cy + 1, z, color >> 24 << 24);
    func_0016EC08(x, y, x + w, y + h, z, color);
    *out = 0;
    if (idx != -1) {
        if (D_0034BEC8[idx].flags & 0x408000) *out = -1;
        if (D_0034BEC8[idx].flags & 0x802000) *out = 1;
    }
    return *out;
}
