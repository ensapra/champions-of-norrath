typedef struct 
{
  u8 pad[0x80];
  s32 f80;
  u8 pad84[0x28];
  void *fnAC;
  void *fnB0;
  u8 padB4[0xC];
} Win10D478;
extern void func_001050A8(Win10D478 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern unsigned long func_00105190(Win10D478 *);
extern void func_0010D238(void);
extern void func_0010D378(void);
extern s32 D_010C21D8[];
extern s32 D_010C21F0[];
extern s32 D_010C2200[];
extern s32 D_010C2208[];
extern s32 D_001BD8C0[];
extern s32 D_001BD8C4[];
extern s32 D_001C3990[];
void func_0010D478(void *arg0, s32 *arg1)
{
  s32 sum = 0;
  Win10D478 w;
  s32 i;
  s32 h;
  if (((u32) (D_010C21D8[0] - 2)) < 2)
  {
    return;
  }
  for (i = 0; i < (D_001BD8C0[0] + 1); i++)
  {
    sum += D_010C2200[i];
  }
  if (sum < 0x241)
  {
    return;
  }
  if (arg1[7] != (D_001BD8C4[0] + 1))
  {
    return;
  }
  h = 0x150;
  if (D_001C3990[0] == 1)
  {
    h = 0x16E;
  }
  D_001BD8C4[0] = sum - 0x230;
  func_001050A8(&w, D_010C21F0[0], 1, 0x5A, sum - 0x230, 0xA, 0x260 - sum, h, 0, 0);
  w.fnAC = func_0010D238;
  w.fnB0 = func_0010D378;
  w.f80 = 0;
  func_00105190(&w);
  D_010C2208[0] = 2;
}
