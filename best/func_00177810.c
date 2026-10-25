typedef struct { f32 f[18]; } Pl;
typedef struct { f32 x, y, z; } V3;
extern f32 D_00480040, D_00480044, D_00480048, D_0048419C;
extern Pl D_006EB9B0, D_006EBA58;
f32 func_002F1550(f32);
void func_00177810(f32 a, f32 b, f32 c, f32 d) {
  f32 k = D_00480040;
  f32 t, e, g;
  V3 *p;
  s32 i;
  D_0048419C = D_00480044 / func_002F1550(a * k * 0.5f);
  t = func_002F1550((a + 1.0f) * k * 0.5f);
  e = t * d;
  g = t * b;
  D_006EB9B0.f[14] = -1.0f;
  D_006EB9B0.f[6] = 0;
  D_006EB9B0.f[11] = e;
  D_006EB9B0.f[5] = g;
  D_006EB9B0.f[7] = 1.0f;
  D_006EB9B0.f[8] = e;
  D_006EB9B0.f[9] = 0;
  D_006EB9B0.f[10] = -1.0f;
  D_006EB9B0.f[0] = 1.0f;
  D_006EB9B0.f[1] = 0;
  D_006EB9B0.f[2] = g;
  D_006EB9B0.f[3] = -1.0f;
  D_006EB9B0.f[4] = 0;
  D_006EB9B0.f[12] = 0;
  D_006EB9B0.f[13] = 0;
  D_006EB9B0.f[15] = 0;
  D_006EB9B0.f[16] = 0;
  D_006EB9B0.f[17] = 1.0f;
  p = (V3 *)&D_006EB9B0;
  for (i = 5; i >= 0; i--) {
    f32 x = p->x, y = p->y, z = p->z;
    f32 r = 1.0f / __builtin_sqrtf(x * x + y * y + z * z);
    p->z = z * r;
    p->x = x * r;
    p->y = y * r;
    p++;
  }
}
