extern void func_00163830(void *, s32, s32);
extern u16 *func_001671F8(void *);
extern void func_00172BC8(s32, s32, s32, s32);
extern void func_00172F88(void);
extern s32 func_00173C08(s32, s32, void *, s32, s32, s32, s32);
extern void func_001D1B30(void *);
extern s32 func_001D3E88(void *);
extern void func_0024AF80(s32, void *, s32);
extern s32 func_003044FC(void *, void *);
extern u16 D_0042A500[];
extern s32 D_00484CA0;
extern char *D_00485008;
extern s32 D_00485014;
extern char *D_00485018;
extern s8 D_0048501C;
extern char D_00485040[];
extern s32 D_00486B24;
extern s32 D_00486B28;
extern s32 D_00486B2C;
extern s32 D_00486B30;
extern s32 D_00486B34;
extern s32 D_00486B38;
extern s32 D_00486B3C;
extern s32 D_00486B44;
extern s32 D_00486B48;
extern s32 D_00486B4C;
extern s32 D_00486B50;
extern s32 D_00486B64;
extern s32 D_00486B68;
extern s32 D_00486B6C;
extern f32 D_00486B74;
extern char *D_00486B7C;
extern char *D_00486B80;
extern s32 D_00486B84;
extern s32 D_00486B88;
extern s32 D_007D0C70[];
extern s32 D_007D0CA0[];
void func_001D34D0(s32 arg0)
{
  u16 *s;
  s32 j;
  s32 k;
  s32 w;
  s32 h;
  D_00486B74 = 1.0f;
  D_00486B88 = -1;
  D_00485018 = D_00486B7C + (arg0 * 0x448);
  D_00486B2C = 1;
  D_00486B30 = 0;
  D_00486B6C = 0;
  D_00486B3C = 0;
  D_00486B24 = 0;
  D_00486B28 = 0;
  D_00486B34 = 0;
  D_00486B38 = 0;
  D_00486B48 = 0;
  D_00486B44 = 0;
  D_00486B4C = 0;
  D_00486B84 = arg0;
  D_00486B80 = D_00485018;
  D_0048501C = 0;
  func_0024AF80(1, D_00486B80, arg0);
  if (D_00485008 != 0)
  {
    if ((*((s8 *) (D_00485008 + 0x124))) >= 2)
    {
      *((s8 *) (D_00485008 + 0x124)) = 1;
    }
    if ((*((s32 *) (D_00485008 + 0x128))) != D_00485014)
    {
      *((s8 *) (D_00485008 + 0x124)) = 0;
      func_00163830(D_00485008 + 0x120, D_00485014, 1);
    }
  }
  s = func_001671F8(D_00486B80 + 0x21);
  D_00486B68 = 2;
  D_0042A500[1] = 0x20;
  D_0042A500[0] = 0x20;
  while ((*s) != 0)
  {
    if ((*s) == 0x5E)
    {
      D_0042A500[D_00486B68++] = 0xA;
    }
    else
    {
      D_0042A500[D_00486B68++] = *s;
    }
    s++;
  }

  D_0042A500[D_00486B68] = 0;
  func_001D1B30(D_00485018);
  D_00486B64 = 0;
  for (j = 0; j < (*((s32 *) (D_00486B80 + 0x54))); j++)
  {
    s32 ok;
    if (func_003044FC(D_00485040, (D_00486B80 + (j * 0x54)) + 0x68) != 0)
    {
      ok = func_001D3E88((D_00486B80 + (j * 0x54)) + 0x68);
    }
    else
    {
      ok = 1;
    }
    if (ok != 0)
    {
      k = D_00486B64;
      D_00486B64 = k + 1;
 do { D_007D0CA0[k] = j; } while (0);
    }
  }

  func_00172BC8(D_00484CA0, 1, 0x80323C3C, -1);
  w = func_00173C08(0x38, 0, D_0042A500, 0x20C, 0, 0, 0x12);
  h = 0;
  for (j = 0; j < D_00486B64; j++)
  {
    D_007D0C70[j] = 0x1A0 - ((D_00486B64 - j) * 0x12);
    h += 0x12;
  }

  func_00172F88();
  k = (w + h) - 0x5A;
  if (k < 0)
  {
    k = 0;
  }
  D_00486B50 = k;
}
