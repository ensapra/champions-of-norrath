s32 func_00181CE0(void *, void *);
void func_0017FD84(f32);
s32 func_0017FF20(void *);
void func_0019BCB0(void *);
void func_00182A48(void *, f32);
s32 func_001832D0(void *a) {
 u8 buf[0x800];
 func_00181CE0(a, buf);
 func_0017FD84(0.7312499f);
 return func_0017FF20(buf) << 4;
}
void func_00183338(void) {
 u8 buf[0x400];
 func_0019BCB0(buf);
 func_00182A48(buf, 0.7312499f);
}
s32 func_00183838(s32 *a, s32 *b, s32 n) {
 s32 i = 0;
 while (i < n) {
  s32 x = a[i];
  s32 y = b[i];
  i++;
  if (x != y) return i;
  if (x == 0) return 0;
 }
 return 0;
}
