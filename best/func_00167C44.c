typedef struct 
{
  u64 d[36];
} Blk;
typedef struct 
{
  Blk b;
  char pad[0x160];
} Slot;
typedef struct 
{
  char p[0x4B90];
  Slot s[4];
  char q[0x44];
  s32 f55d4;
} Q;
typedef struct 
{
  char c[24];
} T24;
extern char jtbl_004C006C[];
extern s32 D_0048041C;
void func_0016FEAC(void *, s32);
void func_00170584();
void func_00167C44(char *arg0)
{
  char *p = arg0 + 0x54A0;
  Q *q = (Q *) (arg0 + 0x910);
  u32 i;
  T24 tt;
  s32 a;
  s32 b;
  int new_var;
  func_0016FEAC(p, 0x11);
  a = q->f55d4;
  b = D_0048041C;
  new_var = 0x9F;
  func_00170584(arg0 + 0x54B0, 0, 0x9B, 4, 0x9C, 1, 0x9D, 0, 0x9E, 0, new_var, a, 0xA0, 0, 0xA1, 1, 0xA2, b, 0x67, 0, 0);
  tt = *((T24 *) (jtbl_004C006C + 0xBA14));
  for (i = 0; i < 8; i++)
  {
    char *n = p + 0x20;
    func_00170584(n, 1, 0);
    func_00170584(p + 0x30, 5, 0);
    p = n;
  }

  q->s[1].b = q->s[0].b;
  q->s[2].b = q->s[1].b;
  q->s[3].b = q->s[2].b;
}
