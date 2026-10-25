typedef struct 
{
  u64 d[0x950 / 8];
} B;
extern void func_00170584(void *, ...);
s32 D_0048041C;
void func_001631D8(char *a)
{
  char *b1 = a + 0x970;
  char *b2 = a + 0x9D0;
  char *p = b2;
  u32 i = 0;
  func_00170584(b2, 0, 0x9B, 4, 0x9C, 1, 0x9D, 0, 0x9E, 0, 0x9F, *((s32 *) (a + 0x960)), 0xA0, 0, 0xA1, 1, 0xA2, D_0048041C, 0x67, 0, 0);
  do
  {
    char *q = p + 0x20;
    func_00170584(p + 0x10, 1, 0);
    func_00170584(q, 5, 0);
    i++;
    p = q;
  }
  while (i < 0x4A);
  *((B *) (b1 + 0x1300)) = *((B *) b2);
  p = b1 - -0x9B0;
  *((B *) p) = *((B *) (b1 + 0x1300));
}
