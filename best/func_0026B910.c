typedef struct {
    char p0[0x24]; u32 f24; s32 x; s32 y;
    char p1[4]; u32 f34;
} Obj;
#define A(o) (*(s16 *)((char *)(o) + 0x36))
#define B(o) (*(s16 *)((char *)(o) + 0x38))
f32 D_004820A4;
s32 func_002FB320(f32);
s32 func_002F0B98(s32);
s32 func_002FBB50(s32);

void func_0026B910(Obj *o) {
    if (o->f24 & 2) return;
    if (o->f24 & 1) {
        u32 f = o->f34;
        if (f & 0x40000) {
            s32 y = o->y;
            s32 x = o->x;
            o->x = y;
            o->y = x;
        }
        if (f & 0x10000) o->x = -o->x;
        if (f & 0x20000) o->y = -o->y;
    } else {
        f32 y = (f32)o->y;
        f32 f1 = (f32)A(o) * D_004820A4;
        f32 f0 = (f32)B(o) * D_004820A4;
        s32 x = o->x;
        f32 nx = (f32)x * f1 + y * f0;
        f32 ny = (f32)-x * f0 + y * f1;
        o->x = func_002FBB50(func_002F0B98(func_002FB320(nx + 0.5f)));
        o->y = func_002FBB50(func_002F0B98(func_002FB320(ny + 0.5f)));
    }
}
