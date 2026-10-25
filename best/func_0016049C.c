s32 D_0048041C;
void func_0016FEAC(void *, s32);
void func_00170584(void *, ...);
typedef struct 
{
  u64 q[36];
} B120;
void func_0016049C(u8 *a)
{
  u8 *c = a + 0x910;
  u8 *b = a + 0x920;
  u8 *p = b;
  u32 i = 0;
  i = 0x9D;
  func_0016FEAC(a + 0xDC0, 0x11);
  func_00170584(a + 0xDD0, 0, 0x9B, 4, 0x9C, 1, i, 0, 0x9E, 0, 0x9F, *((s32 *) (c + 0x33C0)), 0xA0, 0, 0xA1, 0, 0xA2, D_0048041C, 0x67, 0, 0);
  loop:
  func_00170584(p + 0x4C0, 1, 0);

  i++;
  func_00170584(p + 0x4D0, 5, 0);
  p += 0x20;
  if (i < 8)
  {
    goto loop;
  }
  *((B120 *) (b + 0x5C0)) = *((B120 *) (b + 0x4A0));
}
