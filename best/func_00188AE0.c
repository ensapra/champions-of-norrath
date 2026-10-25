typedef struct 
{
  char pad[0x13];
  u8 type;
} Hdr;
u8 *func_001885D0(Hdr *, s32);
void func_00188400(Hdr *, s32, s32 *, s32 *);
u32 func_00188AE0(Hdr *h, s32 n, s32 x, s32 y)
{
  int new_var;
  u8 *d;
  s32 w;
  s32 ht;
  s32 i;
  d = func_001885D0(h, n);
  if (d == 0)
  {
    return 0;
  }
  func_00188400(h, n, &w, &ht);
  if ((w < x) || (ht < y))
  {
    return 0;
  }
  i = (y * w) + x;
  switch (h->type)
  {
    case 1:
      return (d[(i * 2) + 1] << 8) | d[i * 2];

    case 2:
      return ((d[(i * 3) + 2] << 16) | (d[(i * 3) + 1] << 8)) | d[i * 3];

    case 3:
      new_var = (d[(i * 4) + 3] << 24) | d[i * 4];
      return new_var | ((d[(i * 4) + 1] << 8) | (d[(i * 4) + 2] << 16));

    case 4:
      if (x & 1)
    {
      return d[i / 2] >> 4;
    }
      return d[i / 2] & 0xF;

    case 5:
      return d[i];

  }

  return 0;
}
