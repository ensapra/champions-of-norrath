typedef struct { f32 x, y, z; } V3;
typedef struct { s8 a, b, rot, h, w, c, d, x0, y0, pad; } Ent;
typedef struct { f32 m[12]; } Mat;
extern Ent D_00434068[];
f32 D_00482068;
extern void func_00159090(Mat *);
extern void func_00156610(Mat *, s32, s16);
extern void mat3x3_mul_vec3(V3 *, Mat *, V3 *);

V3 func_00265AC8(V3 in) {
    V3 s, c, d, t, o;
    Mat m;
    s32 i;
    s.x = in.x * D_00482068;
    s.y = in.y * D_00482068;
    s.z = in.z * D_00482068;
    for (i = 0; D_00434068[i].rot != -1 && i < 32; i++) {
        Ent *e = &D_00434068[i];
        if (e->x0 <= s.x && e->y0 <= s.y && s.x <= e->x0 + e->w && s.y <= e->y0 + e->h) {
            c.x = (e->x0 * 2 + e->w) * 360;
            c.y = (e->y0 * 2 + e->h) * 360;
            c.z = 0;
            d.x = in.x - c.x;
            d.y = in.y - c.y;
            d.z = in.z;
            t = d;
            func_00159090(&m);
            func_00156610(&m, 2, D_00434068[i].rot << 14);
            mat3x3_mul_vec3(&o, &m, &t);
            o.x += (D_00434068[i].a * 2 + D_00434068[i].d) * 360;
            o.y += (D_00434068[i].b * 2 + D_00434068[i].c) * 360;
            return o;
        }
    }
    return in;
}
