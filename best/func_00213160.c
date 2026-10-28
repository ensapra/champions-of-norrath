typedef struct { char pad[0x4C]; s16 a; s16 pad2; s16 b; s16 c; s32 t; } Obj;
extern void func_00143878(void*); extern f32 func_00159330(f32,f32,f32,f32,f32); extern s32 func_00165DC0(char*,char*); extern s32 func_001757D8(s32,s16,f32*,s32); extern void func_0017D348(s32,s16,s32); extern s32 func_0024D308(s32,void*,f32); extern char D_00470628[],D_00485380[]; extern const f32 D_0048156C; extern s32 D_004844A0,D_004844A4;
void func_00213160(Obj *o){
  s32 t = D_004844A4 - o->t;
  f32 v[3];
  if (t < 20) o->b++;
  if (t == 120) func_0024D308(func_00165DC0(D_00485380, D_00470628), o, 1.0f);
  if (t >= 121) {
    f32 x = (f32)(t - 120) * D_0048156C;
    if (1.0f < x) x = 1.0f;
    o->c = (s16)(func_00159330(x, 0.0f, 1.0f, 0.0f, 1.5f) * 400.0f);
  }
  if (t >= 181) func_0017D348(D_004844A0, o->a, 0);
  if (t >= 301) func_00143878(o);
  v[1] = (f32)o->c * 0.25f;
  v[0] = (f32)(-o->b) * 0.25f;
  v[2] = 0;
  func_001757D8(D_004844A0, o->a, v, 0);
}
