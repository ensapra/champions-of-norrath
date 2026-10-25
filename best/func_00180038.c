extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
void func_00180228(void); void func_00180588(void); void func_00184248(void);
void func_001872C0(void *);
void func_00191490(void *, s32, void *, s32);
extern char func_00180018[];
extern char func_001812E0[];
extern char D_00463E60[];
extern char D_00463E70[];
s16 D_004869F4;
s32 D_004869F8;
s32 D_004869FC;
extern u8 D_006F5A80[];
extern s32 D_006FFE60[];
extern u8 D_00700080[];
extern u8 D_00780280[];
void func_00180038(void) {
  void * volatile sp0;
  void * volatile sp10;
  s32 *p;
  s32 i, j, k, t, flip;
  u8 *row;
  s32 *q;
  p = D_006FFE60;
  for (i = 0; i < 0x40; i++) {
    s32 a = i << 10;
    p[0] = (s32)(func_0015A100(a) * 5.0f);
    p[1] = (s32)(func_0015A070(a) * 5.0f);
    p += 2;
  }
  D_004869F8 = 0;
  D_004869FC = 0;
  D_004869F4 = 0;
  q = (s32 *)(D_00780280 + 0x7C);
  for (i = 0x1F; i >= 0; i--) {
    *q = -1;
    q--;
  }
  func_001872C0(D_006F5A80);
  row = D_00700080;
  for (j = 0; j < 0x80; j++) {
    u32 *e = (u32 *)row;
    flip = 0;
    for (k = 0; k < 0x100; k++) {
      t = k & 0x1F;
      if (t == 0) {
        s32 v = flip ? 0x80 : 0x240;
        flip ^= 1;
        e[2] = v | 0x04000000;
        e[3] = v | 0x60000000 | 0x013C0000 | 0x0C000000;
        sp0 = e + 4;
        e[0] = 0;
        e[1] = 0;
      } else if (t != 0x1F) {
        ((u16 *)e)[7] = 0;
      } else {
        e[0] = 0x14000018;
        sp10 = e + 4;
        e[1] = 0;
        e[2] = 0;
        e[3] = 0;
      }
      e += 4;
    }
    row += 0x1000;
  }
  func_00180588();
  func_00184248();
  func_00180228();
  func_00191490(func_001812E0, 0xF, D_00463E60, 2);
  func_00191490(func_00180018, 0x41, D_00463E70, 1);
}
