extern f32 D_00481710;
extern s8 D_00483829;
extern void func_00143830();
extern float sqrtf(float);
typedef struct { u8 pad[0xC]; s32 flags; u8 pad2[0x114]; s32 f124; f32 vx, vy; } A;
typedef struct { u8 pad[0xC]; s32 flags; u8 pad2[0x461]; u8 f471; u8 pad3[0x38]; f32 dx, dy; } B;
typedef struct { f32 x, y, z; } V3;
void func_00221940(A *a, B *b) {
    V3 d;
    if (D_00483829 == 0 && b != 0 && (b->flags & 0x40) && !(a->f124 & 8) && b->f471 == 0) {
        f32 inv = 1.0f / sqrtf(b->dx * b->dx + b->dy * b->dy);
        d.x = b->dx * inv;
        d.y = b->dy * inv;
        d.z = 0.0f;
        if (a->vx * d.x + a->vy * d.y < 52.0f) {
            a->vx = a->vx + b->dx * D_00481710;
            a->vy = a->vy + b->dy * D_00481710;
        }
        func_00143830();
    }
}
