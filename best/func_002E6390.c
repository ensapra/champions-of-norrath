u32 func_002E6390(u32 x)
{
  u32 out = (long long) (x << 8);
  u32 t;
  do { out &= 0xff00; } while (0);
  t = x >> 8;
  t &= 0xff;
  return out | t;
}
