f32 D_0047FC94;
void func_00138758(s32, s32, s32 *);
void func_00138900(void *, s32);
void func_00140678(void *, void *, s32);
void func_00160128(void *, s32, s32, f32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
void func_00163BA0(void *);
void func_001640D0(void *);
s32 func_00165DC0(void *, void *);
s32 func_001390C8(s32 arg0, s32 *arg1)
{
  char a[0xA0];
  char b[0xA0];
  char c[0xA0];
  struct 
  {
    s32 id;
    s32 pad[3];
    u8 *list[512];
  } st;
  u8 **base;
  u8 **q;
  u8 *e;
  s32 i;
  func_00138758(arg0, arg1[1], &st.id);
  func_00138900(b, st.id);
  func_00138758(arg0, arg1[2], &st.id);
  func_00138900(c, st.id);
  func_00138758(arg0, arg1[3], &st.id);
  func_00138900(a, st.id);
  q = st.list;
  func_00140678(b, q, 0x200);
  base = q;
  if ((*q) != 0)
  {
    i = 0;
    do
    {
      q = (u8 **) (*((u8 **) (((u8 *) base) + i)));
      e = (u8 *) q;
 do { i += 4; } while (0);
      if ((*((s32 *) (e + 0xC))) & 0x20)
      {
        if (arg1[4] == (-1))
        {
          func_001637A8(e + 0x120);
          func_00163830(e + 0x120, func_00165DC0(c, a), 6);
          func_00163BA0(e + 0x120);
          func_001640D0(e + 0x120);
        }
        else
        {
          func_00160128(e + 0x120, func_00165DC0(c, a), arg1[4], D_0047FC94);
        }
      }
      q = base;
    }
    while ((*((s32 *) (((u8 *) q) + i))) != 0);
  }
  return 0;
}
