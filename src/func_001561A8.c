extern u8 func_001C8098[];
void func_0014CAE8(s32);
void func_001561A8(u8 *g)
{
  s32 i;
  s32 j = 0x990;
  void *p = func_001C8098;
  p = *((void **) (((u8 *) p) + 0xD68));
  i = 0x27;
  ((void (*)(void)) p)();
  for (; i >= 0; i--, j += 4)
  {
    s32 q = ((s32) g) + j;
    q = *((s32 *) (q + 0xC));
    if (q)
    {
      func_0014CAE8(q);
    }
  }
}
