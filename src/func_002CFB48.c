extern char D_0047ADE0[];
extern char D_0047ADF0[];
extern char D_0047AE00[];
extern char D_00486770[];
extern char D_004447C8[];
extern struct { u8 pad0[0xc]; s32 f0; u8 pad1[0x54]; s32 f64; } D_0034BEB8;
s32 D_004844B0;
s8 D_004844B4;
s32 func_00165DC0(void *, void *);
void func_00172708(s32, s32, s32, s32, u32);
s32 func_00192F38(void *, s32, s32);
void func_001934A8(s32, s32, void *, u32, u32, s32, s32, s32);
s32 func_002CFB48(void)
{
  u32 n;
  func_00172708(func_00165DC0(D_0047ADE0, D_0047ADF0), 0, 0, 0, 0x80808080);
  func_001934A8(0x140, 0x162, D_004447C8, 0x80464646, 0x80408080, D_004844B0, func_00165DC0(D_00486770, D_0047AE00), 0);
  n = func_00192F38(D_004447C8, 0, 0);
  if ((D_0034BEB8.f0 | D_0034BEB8.f64) & 0x40)
  {
    switch (n)
    {
      case 0: D_004844B4 = 0; break;
      case 1: D_004844B4 = 3; break;
      case 2: D_004844B4 = 4; break;
      case 3: D_004844B4 = 1; break;
      case 4: D_004844B4 = 2; break;
    }
    return 1;
  }
  return 0;
}
