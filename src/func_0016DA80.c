/* identical to func_0016DA14 (matched), with its names changed by decompdecomp */
extern char D_001C809C[];
void func_0014D3B8(s32);
void func_0016DA80(u8 *p)
{
  s32 i = 0;
  ((void (*)(u8 *)) (*((void **) (0x1090 + D_001C809C))))(p);
  if (i >= (*((s32 *) (p + 0x9c4))))
  {
    return;
  }
  loop:
  func_0014D3B8(((s32 **) (p + 0x980))[0][i]);

  i++;
  if (i < (*((s32 *) (p + 0x9c4))))
  {
    goto loop;
  }
}
