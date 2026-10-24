extern u8 D_004CD818[];
extern u8 D_001D2340[];
extern u8 D_001E2441[];
void func_001A2850(void *, ...);
void func_00182150(u8 a) {
 u8 *p = D_001D2340;
 void (*fn)(s32, s32) = *(void (**)(s32, s32))(p + 0x5C68);
 D_001E2441[0] = a;
 *(s32 *)(p + 0x404) = a;
 if (fn) {
  if (a) fn(3, 0);
  else fn(4, 0);
 }
 func_001A2850(D_004CD818, a);
}
