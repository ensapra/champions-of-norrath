struct Vec2f { f32 x, y; Vec2f() {} Vec2f(f32 a, f32 b) { x = a; y = b; } };
typedef struct { s8 a0, a1, a2, a3, a4, a5, a6, a7, a8, a9; } Ent10;
extern "C" {
extern Ent10 D_00434068[];
extern f32 D_00482064;
}

Vec2f func_00265968(Vec2f *p) {
    Ent10 *e = D_00434068;
    s32 i;
    p->x = p->x * D_00482064;
    p->y = p->y * D_00482064;
    for (i = 0; e->a2 != -1; ) {
        if (e->a7 <= p->x && e->a8 <= p->y && p->x <= e->a7 + e->a4 && p->y <= e->a8 + e->a3) {
            Vec2f r;
            r.x = (e->a0 * 2 + e->a6) * 360;
            r.y = (e->a1 * 2 + e->a5) * 360;
            return r;
        }
        i++;
        e++;
        if (i >= 32) break;
    }
    return *p;
}
