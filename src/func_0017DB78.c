typedef struct { f32 x, y, z; } V3;
typedef struct { f32 x, y, z, w; } V4;
typedef struct { void *hit; s32 pad[3]; V4 mn; V4 mx; } L;
s32 func_0017A610(s32, V3 *, V3 *, void **, s32);
s32 func_0017DB78(s32 a0, V3 *src, f32 *out, f32 r) {
    V3 p;
    L l;
    V3 *a = (V3 *)&l.mn, *b = (V3 *)&l.mx;
    p = *src;
    {
        f32 x = p.x - r - 1.0f, y = p.y - r - 1.0f, z = p.z - 1.0f;
        a->x = x; a->y = y; a->z = z;
    }
    {
        f32 x = p.x + r + 1.0f, y = p.y + r + 1.0f, z = p.z + 60.0f;
        b->x = x; b->y = y; b->z = z;
    }
    func_0017A610(a0, a, b, &l.hit, 2);
    if (out && l.hit) *out = *(f32 *)((u8 *)l.hit + 0x10);
    return l.hit != 0;
}
