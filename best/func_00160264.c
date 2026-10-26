s32 D_0048041C;
void func_0016FEAC(void *, s32);
void func_00170584(void *, ...);
typedef struct 
{
  u64 x;
  u64 y;
} Pair;
typedef struct 
{
  u64 q[100];
} Block320;
void func_00160264(u8 *a)
{
  u8 *b = a + 0x920;
  u8 *p;
  s32 new_var;
  u32 i = 0;
  u8 *s = a + 0x910;
  s32 id;
  s32 g;
  new_var = D_0048041C;
  func_0016FEAC(a + 0x1000, 0x31);
  {
    u64 x = *((u64 *) (b + 0x6E0));
    u64 y = *((u64 *) (b + 0x6E8));
    id = *((volatile s32 *) (s + 0x33C0));
    g = new_var;
    *((volatile u64 *) (b + 0xD20)) = x;
    *((volatile u64 *) (b + 0xD28)) = y;
    *((volatile u64 *) (b + 0xA00)) = x;
    *((volatile u64 *) (b + 0xA08)) = y;
  }
  func_00170584(a + 0x1010, 0, 0x9B, 4, 0x9C, 1, 0x9D, 0, 0x9E, 0, 0x9F, id, 0xA0, 0, 0xA1, 1, 0xA2, g, 0x67, 0, 0);
  {
    u64 x = *((u64 *) (b + 0x6F0));
    u64 y = *((u64 *) (b + 0x6F8));
    *((volatile u64 *) (b + 0xD30)) = x;
    *((volatile u64 *) (b + 0xD38)) = y;
    *((volatile u64 *) (b + 0xA10)) = x;
    *((volatile u64 *) (b + 0xA18)) = y;
  }
  p = b;
  do
  {
    func_00170584(p + 0x700, 1, 0);
    i++;
    func_00170584(p + 0x710, 5, 0);
    func_00170584(p + 0xA20, 1, 0);
    func_00170584(p + 0xA30, 5, 0);
    func_00170584(p + 0xD40, 1, 0);
    func_00170584(p + 0xD50, 5, 0);
    p += 0x20;
  }
  while (i < 24);
  *((Block320 *) (b + 0x1040)) = *((Block320 *) (b + 0x6E0));
  *((Block320 *) (b + 0x1360)) = *((Block320 *) (b + 0xA00));
  *((Block320 *) (b + 0x1680)) = *((Block320 *) (b + 0xD20));
}
