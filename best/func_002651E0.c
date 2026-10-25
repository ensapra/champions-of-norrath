s32 func_002651E0(void *arg0, s32 arg1)
{
  u8 *b = *((u8 **) (((u8 *) arg0) + 4));
  s32 off = (arg1 * 5) + 0x50;
  u8 *e = b + off;
  u8 *p;
  s32 flag;
  u8 t2;
  u8 mode;
 do { if (e[0x12] != 0) { p = e; if (((p[0x11] == 2) || (p[0x11] == 0)) && ((*(((u8 *) arg0) + 8)) == 2)) { goto one; } t2 = b[(arg1 * 5) + 0x61]; if (((t2 == 1) || (t2 == 3)) && ((*(((u8 *) arg0) + 8)) == 3)) { one: flag = 1; } else { flag = 0; } } else { flag = 0; } } while (0);
  mode = *(((u8 *) arg0) + 8);
  switch (mode)
  {
    case 0:
      return ((s8 *) b)[(arg1 * 5) + 0x5F] - flag;

    case 1:
      return ((s8 *) b)[(arg1 * 5) + 0x5E] - flag;

    case 2:
      return ((b[0x57] - ((s8 *) b)[(arg1 * 5) + 0x5F]) - flag) - 1;

    case 3:
      return ((b[0x56] - ((s8 *) b)[(arg1 * 5) + 0x5E]) - flag) - 1;

  }

  return 0;
}
