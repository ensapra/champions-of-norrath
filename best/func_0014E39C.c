typedef struct 
{
  char pad[0x4d4];
  s32 d;
  s32 e;
  s32 b;
  s32 f;
  char p[8];
  s32 idx;
  char q[0xb0];
  s32 c;
  s32 c2;
  char r[4];
  s32 g;
  char s[0x24];
  s32 a;
} W;
void func_0014E39C(W *w)
{
  u16 a = w->a;
  u16 b = w->b;
  u16 c = w->c;
  u16 d = w->d;
  u16 e = w->e;
  u16 f = w->f;
  u16 g = w->g;
  volatile s16 *p = (volatile s16 *) ((((char *) w) + (w->idx << 9)) + 0x1f0);
  s32 bc = b + c;
  s32 ba = b + a;
  s32 ed = e + d;
  s32 fa = f + a;
  s32 fd = f + d;
  s32 gc = g + c;
  s32 x = a + bc;
  s32 y = ed + fa;
  s32 z = ba + gc;
  s32 v = a + fd;
  p[0x61] = y;
  p[0x41] = v;
  p[0x50] = x;
  p[0x60] = z;
  p[0x30] = x;
  p[0x31] = v;
 do { p[0x40] = z; } while (0);
  p[0x51] = y;
}
