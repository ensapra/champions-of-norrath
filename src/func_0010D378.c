typedef struct 
{
  u8 pad[0xAC];
  void *fnAC;
  void *fnB0;
  u8 padB4[0xC];
} Win10D378;
extern void func_001050A8(Win10D378 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern unsigned long func_00105190(Win10D378 *);
extern void func_0010D238(void);
extern void func_0010D330(void);
extern s32 D_010C21D8[];
extern s32 D_010C21F0[];
extern s32 D_010C2200[];
extern s32 D_010C2208[];
extern s32 D_001BD8C0[];
extern s32 D_001BD8C4[];
extern s32 D_001C3990[];
void func_0010D378(void *arg0, s32 *arg1)
{
  s32 sum = 0;
  Win10D378 w;
  s32 i;
  if (((u32) (D_010C21D8[0] - 2)) < 2)
  {
    return;
  }
  for (i = 0; i < (D_001BD8C0[0] + 1); i++)
  {
    sum += D_010C2200[i];
  }

  if (arg1[7] != (D_001BD8C4[0] + 1))
  {
    return;
  }
  D_001BD8C4[0] = 0x14;
  func_001050A8(&w, D_010C21F0[0], 1, 0xF0, 0x14, 0xA, -sum, (D_001C3990[0] == 1) ? (0x16E) : (0x150), 0, 0);
  w.fnAC = func_0010D238;
  w.fnB0 = func_0010D330;
  func_00105190(&w);
  D_010C2208[0] = 3;
}
