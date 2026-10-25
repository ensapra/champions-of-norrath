struct Vec { f32 x, y, z; Vec(f32 ax, f32 ay, f32 az) { x = ax; y = ay; z = az; } };
struct Obj { char pad0[0xC]; u32 flags; char pad10[0x3C]; s16 id; s16 pad4e; u16 h50; s16 pad52; f32 f54; volatile u8 b58; };
extern "C" {
extern s32 D_004844A0;
void func_0017D348(s32, s32, s32);
s32 func_001757D8(s32, s32, Vec *, s16);
s32 func_00143830(void *);
s32 func_00212D08(Obj *o, char *s) {
    char *p = s;
    s16 a, b;
    s += 2;
    a = *(s16 *)(s - 2);
    s += 2;
    o->h50 = a;
    b = *(s16 *)(s - 2);
    s += 4;
    o->b58 = b;
    o->f54 = *(f32 *)(s - 4);
    if (a != 0) {
        o->flags &= 0xFFEFFFFF;
        func_0017D348(D_004844A0, o->id, 0);
        o->flags |= 1;
        func_00143830(o);
    }
    Vec v(0.0f, 0.0f, 0.0f);
    func_001757D8(D_004844A0, o->id, &v, o->h50 * (s8)o->b58);
    return s - p;
}
}
