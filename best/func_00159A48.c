s32 D_0048041C;
void func_0016FEAC(void *, s32);
void func_00170584(void *, s32, ...);
void func_00159A48(u8 *a)
{
  u8 *p = a + 0x930;
  u32 i = 0;
  func_0016FEAC(p, 12);
  func_00170584(p + 0x10, 0xc7, 0xae, 1, 0xaf, 6, 0xb0, 0, 0xb1, 0, 0xb2, 0, 0xb4, 0, 0xb5, 0, 0);
  func_00170584(p + 0x20, 0xc2, 0x63, 0, 0x64, 1, 0x65, 0, 0x66, 1, 0x67, 128, 0);
  if (1)
  {
    func_00170584(p + 0x30, 0x49, 0x9a, 0, 0);
    func_00170584(p + 0x40, 0, 0x9b, 4, 0x9c, 1, 0x9d, 0, 0x9e, 0, 0x9f, *((s32 *) (a + 0x5dc)), 0xa0, 0, 0xa1, 1, 0xa2, D_0048041C, 0x67, 0, 0);
    loop:
    func_00170584(p + 0x50, 1, 0);

    i++;
  }
  func_00170584(p + 0x60, 5, 0);
  p += 0x20;
  if (i < 4)
  {
    goto loop;
  }
}
