u64 *func_002D1878(s32, s32, s32);
s32 func_002D1DD8(s32 a0, s32 a1, s32 a2) {
  s16 x = a0, w = a1, h = a2;
  u64 *p = func_002D1878(a0, a1, a2 << 16);
  s32 bw = (w + 63) / 64;
  s32 bh;
  if (x & 2) bh = (h + 63) / 64;
  else bh = (h + 31) / 32;
  if ((*p & (((u64)0xFFFF << 32) | 0xFFFF)) == 1) return (bw * bh << 16) >> 16;
  return (bw * bh << 17) >> 16;
}
