typedef struct { f32 x, y, z; } V3;
typedef struct { f32 f[12]; } M3;
typedef struct { f32 f[16]; } M4;
extern V3 D_0037EE80;
extern M3 D_0037EF00;
extern M4 D_0037EF30[], D_0037EF70[], D_0037EFB0[];
f32 D_00480074;
f32 D_00480078;
f32 D_0048007C;
f32 D_0048419C;
void func_00156348(void *, void *, void *);
void func_001594B0(void *, f32, f32, f32, f32, f32, f32, f32);
void mat3x3_scale(void *, f32);
void func_00177A48(void *);

void func_0017B4E8(V3 *pos, M3 *m) {
    M3 a;
    M4 b;
    f32 x = D_00480074;
    f32 y, z, w;
    D_0037EE80 = *pos;
    y = D_00480078;
    a = *m;
    z = D_0048007C;
    func_00159550(&a, -pos->x, -pos->y, -pos->z);
    w = D_0048419C;
    D_0037EF00 = a;
    func_00159390(&b, x, y, w, 1.0f, z, 18.0f, 1800.0f);
    func_00156348(D_0037EF30, &a, &b);
    func_00159410(&b, x, y, w, 1.0f, z, 18.0f, 1800.0f);
    func_00156348(D_0037EFB0, &a, &b);
    func_001594B0(&b, x, y, w, 1.0f, z, 18.0f, 1800.0f);
    mat3x3_scale(&a, 4.0f);
    func_00156348(D_0037EF70, &a, &b);
    func_00177A48(&D_0037EF00);
}
