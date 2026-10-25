void func_001743C8(s32, s32, char *, s32);
void func_00303EB8(char *, char *, s32);
extern char D_004865D8[];
void func_002CABA0(void)
{
  char a[16];
  char b[16];
  char c[2];
  s32 i;
  s32 j;
  s32 x;
  s32 ch;
  s32 y = 0x50;
  for (i = 0; i < 0x11; i++, y += 0x14)
  {
    j = 0;
    ch = i - 0x11;
    x = 0x50;
    for (; j < 0x11; j++, ch += 0x10, x += 0x14)
    {
      if (i == 0)
      {
        if (j == 0)
        {
          continue;
        }
        func_00303EB8(a, D_004865D8, j - 1);
        func_001743C8(y, x, a, 100000);
      }
      else
        if (j == 0)
      {
        func_00303EB8(b, D_004865D8, i - 1);
        func_001743C8(y, x, b, 100000);
      }
      else
      {
        c[0] = ch;
        c[1] = 0;
        j = x;
        func_001743C8(y, j, c, 100000);
      }
    }

  }

}
