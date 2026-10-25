extern s32 func_00144BF8(void);
extern void func_00144C38(void);
extern void func_001653F0(void);
extern s32 func_0024F588(void);
extern u32 func_002DC420(void);
extern volatile short func_002D70D0(const char *, ...);
extern char D_00464340[];
extern char D_00464358[];
extern char D_00464380[];
extern char D_00464390[];
extern char D_004643A0[];
extern char D_004643C0[];
extern char D_0031B510[];
extern char D_008EC91C[];
extern char _start[];
s32 func_00190D28(void)
{
  s32 total;
  s32 free;
  s32 totalMem;
  func_002D70D0(D_00464340);
  total = (D_008EC91C - _start) + 0x55C00;
  func_002D70D0(D_00464358, total >> 10, (D_0031B510 - _start) >> 10, 0x157);
  func_001653F0();
  func_00144C38();
  totalMem = func_00144BF8();
  func_002D70D0(D_00464380, (total + totalMem) >> 10);
  free = (0x1F00000 - totalMem) - total;
  func_002D70D0(D_00464390, free >> 10);
  func_002D70D0(D_004643A0, func_0024F588() >> 10);
  func_002D70D0(D_004643C0, func_002DC420() >> 10);
  return free;
}
