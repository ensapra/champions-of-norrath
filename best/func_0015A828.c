void func_0015ACB0(s32, s32, s32, s32);
s32 func_0015A928(void *, s32, s32, s32, s32);
void func_0011B9E0(s32);
s32 func_0015A828(u8 *p, s32 idx, s32 b, s32 cnt, s32 e)
{
  s32 n = (*((s32 *) (p + 0xBF0))) - idx;
  s32 off;
  s32 c;
  u8 *r;
  s32 *new_var;
  s32 new_var2;
  new_var2 = cnt;
  if (n > 0)
  {
    s32 t = *((s32 *) (p + 0xB80));
    s32 s = t + (idx * 0x24);
    s32 d = t + ((idx + new_var2) * 0x24);
 do { } while (0);
    func_0015ACB0(d, s, 0x24, n);
  }
  if (cnt > 0)
  {
    s32 base = *((s32 *) (p + 0xB80));
    c = cnt;
    off = idx * 0x24;
    do
    {
      r = (u8 *) (off + base);
      off += 0x24;
      c -= 1;
      *((s32 *) (r + 4)) = (*((s32 *) (r + 4))) & 0xAF;
    }
    while (c != 0);
  }
  *((s32 *) (p + 0xBF0)) = (*((s32 *) (p + 0xBF0))) + func_0015A928(p, idx, b, cnt, e);
  if ((*((s32 *) (p + 0xC84))) != 0)
  {
    *((s32 *) (p + 0xC84)) = 0;
    new_var = &b;
    func_0011B9E0(*new_var);
  }
  return 1;
}
