typedef struct { u8 p[8]; f32 a, b; u8 q[4]; f32 c, d; } O;
extern s32 func_00316478(f32 *, f32 *);
s64 func_0026BDA0(O *o) {
    if (o->a > o->c) func_00316478(&o->a, &o->c);
    if (o->b > o->d) return func_00316478(&o->b, &o->d);
}
