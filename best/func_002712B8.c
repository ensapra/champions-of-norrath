typedef struct 
{
  f32 m[9];
} Mat3;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
void mat3x3_transposed_mul_vec3(f32 *out, Mat3 *m, V3 *v);
void func_00156610(Mat3 *m, s32 axis, s16 ang);
extern f32 D_0048218C;
extern f32 D_00482190;
typedef struct 
{
  char pad0[0x10];
  f32 pos[3];
  char pad1[0x45C - 0x1C];
  Mat3 mat;
  char pad2[0x78C - 0x480];
  V3 vecs[8];
  char pad3[(0x828 - 0x78C) - 96];
  char *objs[8];
} Obj;
inline f32 inline_fn(f32 *arg0)
{
  return arg0[2];
}

void func_002712B8(Obj *arg0, s32 idx, f32 *out)
{
  f32 res[3];
  f32 off[3];
  f32 *new_var;
  Mat3 m;
  if (arg0->objs[idx] != NULL)
  {
    f32 *op = off;
    f32 b;
    f32 a;
    m = arg0->mat;
    mat3x3_transposed_mul_vec3(op, &m, &arg0->vecs[idx]);
    a = D_0048218C;
    b = D_00482190;
    func_00156610(&m, 2, (s16) (((*((f32 *) (arg0->objs[idx] + 0x118))) * a) * b));
    func_00156610(&m, 0, (s16) (((*((f32 *) (arg0->objs[idx] + 0x11C))) * a) * b));
    mat3x3_transposed_mul_vec3(res, &m, (V3 *) (arg0->objs[idx] + 0x120));
    res[0] += op[0];
    res[1] += op[1];
    res[2] += op[2];
  }
  else
  {
    mat3x3_transposed_mul_vec3(res, &arg0->mat, &arg0->vecs[idx]);
  }
  new_var = arg0->pos;
  out[0] = new_var[0] + res[0];
  out[1] = new_var[1] + res[1];
  out[2] = inline_fn(arg0->pos) + inline_fn(res);
}
