typedef struct { f32 x, y, z; } V3;
typedef struct { u8 pad[0x10]; V3 pos; } Obj;
typedef struct { u8 pad[0xC]; s32 flags; V3 pos; u8 pad1C[0x330 - 0x1C]; f32 vx; f32 vy; } Tgt;
u32 func_00153FA8(Obj *);
s32 func_0015A198(f32, f32);
float sqrtf(float);

static inline f32 Dist2D(V3 *a, V3 *b)
{
    f32 dx = a->x - b->x;
    f32 dy = a->y - b->y;
    return sqrtf(dx * dx + dy * dy);
}

s16 func_00113A30(Obj *self, Tgt *t, f32 speed)
{
    V3 p;
    f32 d;
    s16 a;
    if (t == NULL)
        return 0;
    p = t->pos;
    if (t->flags & 0x40) {
        d = Dist2D(&t->pos, &self->pos) / speed;
        p.x += t->vx * d;
        p.y += t->vy * d;
    }
    a = 0x4000 - func_0015A198(p.x - self->pos.x, p.y - self->pos.y);
    a += (s32)(func_00153FA8(self) % 1800) - 900;
    return a;
}
