typedef struct 
{
  u8 pad[0x914];
  s32 count;
} G;
extern u8 func_001C8098[];
void func_0014CAE8(s32);
void func_001561A8(G *g)
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
    s32 o = *((s32 *) (q + 0xC));
    if (o)
    {
      func_0014CAE8(o);
    }
  }

}
