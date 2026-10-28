typedef struct { char p0[0x11C]; s16 in; char p1[0x170-0x11E]; f32 a; char p2[0x190-0x174]; f32 b; char p3[0x3D0-0x194]; s32 out; f32 pos; f32 vel; } O;
extern const f32 D_00480CB4; extern const f32 D_00480CB8; extern const f32 D_00480CBC; extern const f32 D_00480CC0;
void func_001EEE68(O *o) {
    f32 x = (f32)o->in * 0.001953125f;
    f32 v, q, y;
    if (x > 1.0f) x = 1.0f;
    if (x < -1.0f) x = -1.0f;
    v = o->vel + (x - o->pos) * D_00480CB4;
    q = o->pos + v;
    o->pos = q;
    o->vel = v - v * D_00480CB8;
    y = q * D_00480CBC;
    o->out = (s32)(y * D_00480CC0);
    if (y > 0.0f) { o->a = y; o->b = 0.0f; }
    else { o->b = -y; o->a = 0.0f; }
}
