void func_0015ACB0(u8 *d, u8 *s, int count, s32 width)
{
  s32 c;
  if (((d == s) || (width == 0)) || (count == 0))
  {
    return;
  }
  count *= width;
  if (d < s)
  {
    for (c = count; c != 0; c--)
    {
      *(d++) = *(s++);
    }

  }
  else
  {
    s += count;
    d += count;
    for (c = count; c != 0; c--)
    {
      *(--d) = *(--s);
    }

  }
}
