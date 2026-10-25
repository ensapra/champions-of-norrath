typedef struct 
{
  u64 w0;
  u64 w1;
  u64 w2;
} __attribute__((packed)) Packed24;
extern void func_00178B60(void *in, u64 *out);
s32 func_00178938(u8 *arg0, u8 **arg1, void *arg2)
{
  Packed24 tmp;
  u64 val;
  u64 *p;
  u32 i;
  s8 n;
  s32 same;
  tmp = *((Packed24 *) arg2);
  p = (u64 *) ((arg0 + (((s8) arg0[0x10]) * 16)) + 0x20);
  func_00178B60(&tmp, &val);
  ;
  for (i = 0; i < ((s8) arg0[0x11]); i++)
  {
    same = (val & 0x00FFFFFF00FFFF00ULL) == ((*p) & 0x00FFFFFF00FFFF00ULL);
    if (((s64) same) == 1)
    {
      *arg1 = (u8 *) p;
      return 0;
    }
    p += 2;
  }

  return 6;
}
