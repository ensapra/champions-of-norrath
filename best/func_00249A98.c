typedef struct { char pad[0x3CC]; f32 pos[3]; s16 ang; s16 p; s32 on; } O249;
extern f32 D_00482008;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_00249A98(O249 *o) {
    f32 a[3];
    f32 b[3];
    f32 x, y, z;
    f32 *pp;
    if (o->on != 0) {
        x = func_0015A070(o->ang) * 400.0f;
        y = func_0015A100(o->ang) * 400.0f;
        z = func_0015A100(-0x2000) * 400.0f;
        a[0] = x;
        a[1] = y;
        a[2] = z;
        pp = o->pos;
        x *= D_00482008;
        y *= D_00482008;
        z *= D_00482008;
        b[0] = x;
        b[1] = y;
        b[2] = z;
        pp[0] += x;
        pp[1] += y;
        pp[2] += z;
        if (o->pos[2] < 0.0f) o->on = 0;
    }
}
