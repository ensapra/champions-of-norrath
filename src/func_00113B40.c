typedef struct { f32 x, y, z; } PV3;
s32 func_00113B40(void *a, PV3 *out, f32 speed) {
    PV3 p;
    f32 dx, dy, d;
    void *o = *(void **)((char *)a + 0x240);
    void *e;
    f32 *q;
    if (!o) return 0;
    e = *(void **)((char *)o + 0xC);
    p = *(PV3 *)((char *)e + 0x10);
    q = (f32 *)((char *)a + 0x10);
    dx = p.x - q[0];
    dy = p.y - q[1];
    d = sqrtf(dx * dx + dy * dy) / speed;
    p.x += *(f32 *)((char *)e + 0x330) * d;
    p.y += *(f32 *)((char *)e + 0x334) * d;
    p.z += *(f32 *)((char *)e + 0x20) * 0.5f;
    if (out) *out = p;
    return 1;
}
