u32 func_002E63A8(u32 x)
{
  u32 out = (long long) (x << 24);
  u32 t = x & 0xff00;
 do { t <<= 8; out |= t; } while (0);
  t = x >> 8;
  t &= 0xff00;
  out |= t;
  t = x >> 24;
  return out | t;
}
