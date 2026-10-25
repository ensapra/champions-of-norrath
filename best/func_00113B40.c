typedef struct { f32 x, y, z; } V3;
typedef struct __attribute__((packed, aligned(4))) { f32 x, y, z; } PV3;
extern float sqrtf(float);

s32 func_00113B40(void *arg0, PV3 *out, f32 speed) {
    PV3 p;
    f32 dx, dy, d;
    void *obj = *(void **)((char *)arg0 + 0x240);
    void *e;
    V3 *pos = (V3 *)((char *)arg0 + 0x10);
    if (obj == 0)
        return 0;
    e = *(void **)((char *)obj + 0xC);
    p = *(PV3 *)((char *)e + 0x10);
    dx = p.x - pos->x;
    dy = p.y - pos->y;
    d = sqrtf(dx * dx + dy * dy) / speed;
    p.x += *(f32 *)((char *)e + 0x330) * d;
    p.y += *(f32 *)((char *)e + 0x334) * d;
    p.z += *(f32 *)((char *)e + 0x20) * 0.5f;
    if (out)
        *out = p;
    return 1;
}
