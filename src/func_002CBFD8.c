extern u8 D_0047A750[];
u8 func_002CBFD8(void *unused, void *p)
{
  u8 *t = D_0047A750;
  u8 r = 0;
  s32 i = 0;
  while (i < 0x4a)
  {
    if ((*((u16 *) (((u8 *) p) + 4))) == t[1])
    {
      u16 f = *((u16 *) (((u8 *) p) + 10));
      if (f & 0x22)
      {
        r = t[4];
      }
      else
        if (f & 0x40)
      {
        r = t[6];
      }
      else
      {
        r = t[2];
      }
      if ((((*((u16 *) (((u8 *) p) + 8))) & 2) && (r >= 0x61) && (r < 0x7b)))
      {
        r = (r + 0xe0) & 255;
      }
      break;
    }
    t += 10;
    i++;
  }

  return r;
}
