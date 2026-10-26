extern s32 D_001D04D0[];
extern s32 D_001D04E0[];
extern s32 D_001D04E4[];
extern s32 D_001D04E8[];
extern s32 D_001D04EC[];
extern s32 D_001D04F8[];
extern s32 D_001D04FC[];
extern s32 D_001D0500[];
extern s32 D_001D0504[];
extern s32 D_001D0508[];
extern s32 D_001D050C[];
extern s32 D_001D0510[];
extern s32 D_001D0514[];
extern char D_004CC5B0[];
extern char D_004CC5D0[];
extern s32 D_010ECC58[];
extern s32 D_010ECE68[];
extern s32 D_010ECEC0[];
extern u8 D_001D16C0[];
extern s32 func_0017C4B8(s32);
extern void func_001AFF48(s32);
extern s32 GetThreadId(void);
extern s32 func_001B06E0(void *, u32, s32);
extern void func_001AF710(char *, s32, s32);
extern void func_001AFE98(void *, s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void func_0017BC30();
extern void func_0017BCE8();
extern void func_0017BE60();
s32 func_0017C748(s32 mode) {
  s32 r, r16, v4, v5, v6, n;
  if (func_0017C4B8(1) != 0) return 0;
  func_001AFF48(0);
  D_010ECC58[0] = GetThreadId();
  D_001D04E4[0] = 1;
  D_001D0500[0] = -1;
  D_001D0504[0] = -1;
  D_001D04FC[0] = -1;
  D_001D050C[0] = -1;
  D_001D0508[0] = -1;
  D_001D04F8[0] = 0;
  D_001D0514[0] = D_001D0514[0] + 1;
  D_001D0510[0] = -1;
  for (;;) {
    r = func_001B06E0(D_010ECE68, 0x80000592, 0);
    if (r < 0) {
      if (D_001D04D0[0] > 0) func_001AF710(D_004CC5B0, r, D_001D0514[0]);
      for (n = 0xFFFFF; n != -1; n--) ;
      continue;
    }
    if (D_010ECE68[9] == 0) {
      for (n = 0xFFFFF; n != -1; n--) ;
      continue;
    }
    break;
  }
  D_010ECEC0[0] = mode;
  D_001D0510[0] = 0;
  func_001AFE98(D_010ECEC0, 4);
  if (func_001B08B0(D_010ECE68, 0, 0, D_010ECEC0, 4, D_001D16C0, 0x10, 0, 0) < 0) {
    D_001D04E4[0] = 0;
    return 0;
  }
  v6 = *(s32 *)(((u32)D_001D16C0 + 0xC) | 0x20000000);
  v5 = *(s32 *)(((u32)D_001D16C0 + 4) | 0x20000000);
  v4 = *(s32 *)(((u32)D_001D16C0 + 8) | 0x20000000);
  r16 = 1;
  if (v6 != 0xFF) {
    if (v6 == 0xFE) {
      D_001D04D0[0] = 1;
    } else if (v5 / 256 < 2 || v4 / 256 < 2) {
      r16 = 2;
    }
  }
  D_001D04E4[0] = 0;
  if (mode >= 0 && mode >= 2 && mode == 5) {
    if (D_001D04D0[0] > 0) func_001AF710(D_004CC5D0, v5, v6);
    func_0017BCE8();
    D_001D04E8[0] = -1;
    D_001D04EC[0] = -1;
    D_001D04E0[0] = -1;
    return r16;
  }
  func_0017BC30();
  func_0017BE60();
  return r16;
}
