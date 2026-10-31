extern char func_001C8098[];
void func_0014D394(s32);
void func_0016DA14(u8 *p)
{
  s32 i = 0;
  ((void (*)(u8 *)) (*((void **) (0x1090 + func_001C8098))))(p);
  if (i >= (*((s32 *) (p + 0x9c4))))
  {
    return;
  }
  loop:
  func_0014D394(((s32 **) (p + 0x980))[0][i]);

  i++;
  if (i < (*((s32 *) (p + 0x9c4))))
  {
    goto loop;
  }
}
