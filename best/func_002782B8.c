#define F(o,n) (*(f32*)((u8*)(o)+(n)))
extern f32 D_00482288;
extern f32 D_0048228C;
void func_00276B58(void *);
void func_002782B8(void *o)
{
  void *vt = *((void **) (((u8 *) o) + 0x48));
  u8 *ent = ((u8 *) vt) + 0xe0;
  s16 off = *((s16 *) ent);
  void (*fn)(void *) = *((void (**)(void *)) (ent + 4));
  fn(((u8 *) o) + off);
  f32 y = F(o, 0x37c);
  f32 k = D_00482288;
  f32 x = F(o, 0x378);
  f32 z = F(o, 0x380);
  f32 one = 1.0f;
  x = x * k;
  y = y * k;
  f32 m = F(o, 0x374);
  z = z * k;
  F(o, 0x29c) = m;
  x = x * x;
  f32 k2 = D_0048228C;
  y = y * y;
  z = z * z;
  f32 inv = one / m;
  f32 c = y + z;
  f32 b = z + x;
  f32 a = y + x;
  b *= k2;
  c = m * c;
  b = m * b;
  k2 = m;
  a = k2 * a;
  F(o, 0x2a0) = inv;
  a *= k2;
  c *= k2;
  f32 r0 = one / a;
  F(o, 0x4c0) = a;
  F(o, 0x4c4) = b;
  F(o, 0x4bc) = c;
  F(o, 0x4cc) = r0;
  f32 r1 = one / b;
  F(o, 0x4d0) = r1;
  f32 r2 = one / c;
  F(o, 0x4c8) = r2;
  func_00276B58(o);
}
