struct Vec2f { f32 x, y; Vec2f() {} Vec2f(f32 a, f32 b) { x = a; y = b; } };
typedef struct { s8 a0, a1, a2, a3, a4, a5, a6, a7, a8, a9; } Ent10;
extern "C" {
extern Ent10 D_00434068[];
extern f32 D_00482060;
}

Vec2f func_00265810(Vec2f *p) {
    s32 i;
    p->x = p->x * D_00482060;
    p->y = p->y * D_00482060;
    for (i = 0; D_00434068[i].a2 != -1; ) {
        if (D_00434068[i].a7 <= p->x && D_00434068[i].a8 <= p->y && p->x <= D_00434068[i].a7 + D_00434068[i].a4 && p->y <= D_00434068[i].a8 + D_00434068[i].a3) {
            Vec2f r;
            r.x = (D_00434068[i].a7 * 2 + D_00434068[i].a4) * 360;
            r.y = (D_00434068[i].a8 * 2 + D_00434068[i].a3) * 360;
            return r;
        }
        i++;
        if (i >= 32) break;
    }
    return *p;
}
