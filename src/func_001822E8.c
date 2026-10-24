extern u8 D_004CD800[];
extern u8 D_004CD830[];
extern u8 D_004CD818[];
extern u8 D_001D2340[];
extern u8 D_001E2441[];
void func_001A2850(void *, ...);
void func_00182130(void) {
 func_001A2850(D_004CD800);
}
s32 func_001822E8(void) {
 func_001A2850(D_004CD830);
 return 1;
}
void func_00182150(u8 a) {
 void (*fn)(s32, s32);
 fn = *(void (**)(s32, s32))(D_001D2340 + 0x5C68);
 D_001E2441[0] = a;
 if (fn) {
  *(s32 *)(D_001D2340 + 0x404) = a;
  if (a) fn(3, 0);
  else fn(4, 0);
 }
 func_001A2850(D_004CD818, a);
}
