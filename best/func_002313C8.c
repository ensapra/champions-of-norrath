typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
extern char D_0044ADB0[];
extern char D_00472040[];
extern f32 D_004819C8;
s8 D_004857E0;
unsigned int ovl_ntgui2_func_00108E58(void *, Vec3, s16, s32, s32, f32);
s32 func_00304640(void *, s32);
s32 func_00165DC0(void *, void *);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
void func_001601F8(void *);
s64 func_0016C970(s32, s32);
void func_001438A0(void *);
s32 func_00143A80(void *, void *, s32);
void func_001091B0(void *);
void func_002313C8(u8 *o, Vec3 v, s16 a2, s32 a3, s32 a4, s32 a5, void *a6, s32 a7, f32 fp, s32 stack)
{
  u8 *p = o + 0x3c0;
  u8 *q = o + 0x3e0;
  u8 *r = o + 0x400;
  u8 *w;
  s32 x;
  ovl_ntgui2_func_00108E58(o, v, a2, 0, stack, 8.0f);
  *((f32 *) (o + 0xa8)) = D_004819C8;
  *((void **) (o + 0x48)) = D_0044ADB0;
  func_00304640(p, a3);
  func_00304640(q, a4);
  func_00304640(r, a5);
  *((s32 *) (o + 0x42a)) = a7;
  *((s32 *) (o + 0xc)) |= 0x01000008;
  for (x = 0; x < 5; x++)
  {
    if (a6)
    {
      *((f32 *) ((o + 0x68) - (x * 4))) = 1.0f;
    }
    else
    {
      *((f32 *) ((o + 0x68) - (x * 4))) = 1.0f;
    }
  }

  *((u8 *) (o + 0x28)) = 0x24;
  *((f32 *) (o + 0x1c)) = 20.0f;
  *((s32 *) (o + 0xec)) = 0;
  w = o + 0x120;
  *((s32 *) (o + 0x420)) = func_00165DC0(p, q);
  *((s32 *) (o + 0x424)) = func_00165DC0(p, r);
  *((s16 *) (o + 0x23c)) = 0;
  *((s32 *) (o + 0xc)) |= 0x100000;
  *((f32 *) (o + 0xa8)) = 0.5f;
  *((f32 *) (o + 0xb0)) = fp;
  *((s32 *) (o + 0x470)) = 0;
  func_001637A8(w);
  x = func_00165DC0(p, a6);
  if (x)
  {
    func_00163830(w, func_00165DC0(p, a6), 1);
    func_001601F8(w);
  }
  *((u64 *) (o + 0x228)) = func_0016C970(*((s32 *) (o + 0x420)), 0);
  func_001438A0(o);
  if (!func_00143A80(o, D_00472040, 0))
  {
    *((s32 *) (o + 0xc)) &= 0xffefffff;
  }
  D_004857E0 = 0;
  func_001091B0(o);
}
