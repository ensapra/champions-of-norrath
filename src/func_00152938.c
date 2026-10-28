typedef struct { f32 x, y, z; } V3;
typedef struct { u8 p[0x44]; u32 seed; } Obj;
extern char D_00600E50[];
extern void func_00180DA0(void *, V3 *, V3 *, f32);
#define R(s) ((f32)(s32)((s) >> 16) * 0.0000152587890625f - 0.5f)
void func_00152938(Obj *o, V3 *p) {
    V3 d, v;
    f32 zero = 0.0f;
    u32 a, b, c, e;
    v = *p;
    d.z = zero;
    a = o->seed * 0x19660D + 0x3C6EF35F;
    b = a * 0x19660D + 0x3C6EF35F;
    c = b * 0x19660D + 0x3C6EF35F;
    e = c * 0x19660D + 0x3C6EF35F;
    d.x = R(a) * 5.0f;
    d.y = R(b) * 5.0f;
    v.x += R(c) * 36.0f;
    v.y += R(e) * 36.0f;
    o->seed = e;
    func_00180DA0(D_00600E50, &v, &d, zero);
}
