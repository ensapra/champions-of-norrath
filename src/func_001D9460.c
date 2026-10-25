typedef struct O {
    char p0[0x10];
    f32 x, y, z;
    char p1[0x78 - 0x1C];
    s32 sx, sy;
    char p2[4];
    s32 f84, f88, f8c, f90;
    s16 alpha;
} O;
f32 func_00159920(f32 *, void *, f32 *);
void func_00172BC8(s32, s32, s32, s32);
void func_00172F88(void);
void func_00174420(s32, s32, void *, s32);
void func_00174548(s32, s32, void *, s32);
extern char D_0037EF30[];
s32 D_00484340;
s32 D_004844B0;

void func_001D9460(O *o) {
    f32 w[3];
    f32 v[3];
    f32 *p;
    f32 inv;
    if (D_00484340 == 0) return;
    w[0] = o->x;
    w[1] = o->y;
    w[2] = o->z + 72.0f;
    if (o->f8c == 1) {
        func_00172BC8(D_004844B0, 5, (o->alpha << 24) | 0x602060, -1);
        o->sx = 5;
        w[2] += 60.0f;
    } else {
        if (o->f88 == 1) return;
        if (o->f84) {
            func_00172BC8(D_004844B0, 5, (o->alpha << 24) | 0x8080, -1);
        } else {
            func_00172BC8(D_004844B0, 5, (o->alpha << 24) | 0x323C3C, -1);
        }
    }
    p = v;
    inv = 1.0f / func_00159920(p, D_0037EF30, w);
    p[0] *= inv;
    v[1] *= inv;
    v[2] *= inv;
    if (o->f90) {
        func_00174548(o->sx + (s32)(v[0] * 0.5f) + 0x140, o->sy + (s32)v[1] + 0xE0, (char *)o + 0x56, 1000000);
    } else {
        func_00174420(o->sx + (s32)(v[0] * 0.5f) + 0x140, o->sy + (s32)v[1] + 0xE0, (char *)o + 0x4C, 10000);
    }
    func_00172F88();
}
