typedef struct {f32 x,y,z;} Vec3;
typedef struct {u8 p0[0x10];f32 x;f32 y;u8 p1[0x20];u16 angle;u8 p2[0x6e];f32 scale;u8 p3[0x70];s16 value;u8 p4[0x202];s8 state;} SObj;
extern s32 func_0015A198(f32,f32);
extern f32 D_0047FB90, D_0047FB94, D_0047FB98, D_0047FB9C;
void func_0010A2A8(SObj *o, s32 toggle, Vec3 *vp) {
    Vec3 v = *vp;
    s32 amount = (s32)(o->scale * D_0047FB90);
    s32 r = func_0015A198(v.y - o->y, v.x - o->x);
    s32 sum, next;
    if (!(toggle ^ 1)) r += 0x8000;
    sum = (s16)(o->value + (s32)((f32)(s16)(r - o->angle) * D_0047FB94));
    next = (s16)(sum - (s32)((f32)sum * D_0047FB98));
    if (next > amount) next = amount;
    else if (next < -amount) next = -amount;
    o->value = next;
    if ((u8)(o->state - 1) < 0x3C)
        o->angle += (s32)((f32)o->value * ((f32)(0x3C - o->state) * D_0047FB9C));
    else
        o->angle += o->value;
}
