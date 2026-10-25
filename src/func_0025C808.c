s32 func_003044FC(s32, void *);
extern s32 D_00486CE0;
extern u8 D_0042E420[];
void func_0025C808(s32 a, s32 *b, s32 *c, s32 *d)
{
  for (s32 i = 0; i < D_00486CE0; i++)
  {
    if (func_003044FC(a, D_0042E420 + (i * 0x40)) == 0)
    {
      u8 *p = (D_0042E420 + (i * 0x40)) - 0x20;
      *b = *((u16 *) (p + 0xe));
      *c = p[0xd];
      *d = p[0xc];
    }
  }

}
