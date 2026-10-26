extern s32 D_001D04D0[];
extern u8 D_004CC560[], D_001D2040[];
s32 func_001AE780(s32);
s32 func_001AF710(void *);
s32 func_001B0AA8(void *);
s64 func_0017C4B8(s32 a) {
 if (!a) {
  if (D_001D04D0[0] > 0) func_001AF710(D_004CC560);
  while (func_001B0AA8(D_001D2040)) func_001AE780(4000);
  return 0;
 }
 return func_001B0AA8(D_001D2040);
}
