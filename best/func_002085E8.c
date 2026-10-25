struct Vec3f { f32 x, y, z; };
class Base2085 {
public:
    char pad0[0x10];
    Vec3f pos;
    f32 radius;
    char pad20[0x28];
    virtual ~Base2085();
    virtual void Hit(Base2085 *src, s32 kind, f32 power);
};
struct Target2085 {
    char pad0[0xC];
    Base2085 *obj;
};
class Actor2085 : public Base2085 {
public:
    char pad4C[0x328 - 0x4C];
    s32 timer;
    char pad32C[0x3C4 - 0x32C];
    s32 limit;
    Target2085 *target;
};
extern "C" {
void func_0010EBF8(void *, s32);
void func_00110BC8(void *, void *, f32, f32, f32);

static inline f32 DistSq(Vec3f *a, Vec3f *b) {
    f32 dx = a->x - b->x;
    f32 dy = a->y - b->y;
    f32 dz = a->z - b->z;
    return dx * dx + dy * dy + dz * dz;
}

void func_002085E8(Actor2085 *o) {
    func_0010EBF8(o, 0);
    if (o->target) {
        func_00110BC8(o, o->target->obj, 500.0f, 1.0f, 0.0f);
        if (o->timer % 60 == 0) {
            Base2085 *t = o->target->obj;
            if (DistSq(&t->pos, &o->pos) < o->radius * o->radius) {
                t->Hit(o, 0x100, 1.0f);
            }
        }
        if (o->limit < o->timer) {
            delete o;
        }
    } else {
        delete o;
    }
}
}
