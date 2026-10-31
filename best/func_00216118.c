typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} V3;
typedef struct 
{
  s32 p0;
  s32 p1;
  s32 id;
  s32 value;
} Entry;
extern Entry D_0031F540[];
s32 func_00108498(void *);
void func_00108308(void *, f32);
void func_00156CB0(void *, s32, s32);
void func_00157668(void *, V3 *, s16, V3 *);
void func_00159550(void *, f32, f32, f32);
s32 func_0016AE78(s32, s32, s32, V3 *, void *, s32, s32, s32, s32);
void func_00216118(u8 *a)
{
  u8 mat[0x50];
  V3 r;
  V3 off;
  V3 c;
  f32 zero = 0.0f;
  void *t = a + 0x50;
  V3 *pos = (V3 *) (a + 0x10);
  s32 m = D_0031F540[func_00108498(t)].id;
  s32 n = (*(&D_0031F540[func_00108498(t)])).value;
  {
    V3 *o = &off;
    o->x = zero;
    o->y = zero;
    o->z = 14.0f;
    r.x = pos->x - o->x;
    r.y = pos->y;
    r.z = pos->z - o->z;
  }
  func_00157668(mat, &r, (*((u16 *) (a + 0x38))) + 0xBB8, &r);
  func_00108308(t, 5.0f);
  if ((*((u8 *) ((*((u8 **) t)) + 0x1E))) < 2)
  {
    func_00159550(mat, zero, zero, 28.0f);
    func_00156CB0(mat, 0, -0x4000);
  }
  else
  {
    func_00156CB0(mat, 0, 0x4000);
  }
  c = *pos;
  func_0016AE78(m, n, 3, &c, mat, 0, -1, 0, 0);
}
