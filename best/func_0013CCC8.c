typedef struct { f32 x, y, z; } Vec3_13CCC8;
typedef struct {
    Vec3_13CCC8 dir;
    char pad0C[0x18];
    u8 c0[8];
    u8 c1[8];
    s32 e;
} Light_13CCC8;
#define gLight (*(Light_13CCC8 *)D_004F4060)
#define gLightPrev (*(Light_13CCC8 *)D_004F4098)
void func_0013C918(Vec3_13CCC8 *);
void func_0013CB88(void);

void func_0013CCC8(Vec3_13CCC8 v, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i) {
    Vec3_13CCC8 n;
    f32 s;

    if (D_00483AAC > 0) return;
    D_00483AAC++;
    n = v;
    gLightPrev = gLight;
    s = 1.0f / __builtin_sqrtf(n.x * n.x + n.y * n.y + n.z * n.z);
    n.x *= s;
    n.y *= s;
    n.z *= s;
    gLight.dir = n;
    gLight.c0[0] = a;
    gLight.c0[1] = b;
    gLight.c0[2] = c;
    gLight.c0[3] = d;
    gLight.c0[4] = e;
    gLight.c1[7] = h;
    gLight.c1[0] = a;
    gLight.c1[1] = b;
    gLight.c1[2] = c;
    gLight.c1[3] = d;
    gLight.c1[4] = e;
    gLight.c1[5] = f;
    gLight.c1[6] = g;
    gLight.c0[5] = f;
    gLight.e = i;
    gLight.c0[7] = h;
    gLight.c0[6] = g;
    func_0013C918(&n);
    func_0013CB88();
}
