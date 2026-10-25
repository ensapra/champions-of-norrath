typedef struct T
{
  s32 k;
  s64 v;
} T;
typedef struct S
{
  char pad0[0x4D0];
  s32 f4D0;
  char pad4D4[0x9D4 - 0x4D4];
  s32 f9D4;
  s32 f9D8;
  s32 f9DC;
  s32 f9E0;
  char pad9E4[0xA30 - 0x9E4];
  s32 fA30;
  char padA34[0xA48 - 0xA34];
  s32 fA48;
  s32 fA4C;
  s32 fA50;
  s32 fA54;
  s32 fA58;
  s32 fA5C;
  s32 fA60;
  s32 fA64;
  s32 fA68;
  s32 fA6C;
  s32 fA70;
} S;
extern s32 func_0015C908(s32, void *, T *, s32);
inline s32 inline_fn(s32 arg0)
{
  return arg0;
}

void func_001657AC(S *a)
{
  T t[64];
  s32 n;
  int new_var;
  s32 v48 = a->fA48;
  s32 v4c = a->fA4C;
  s32 v58 = a->fA58;
  s32 v70 = a->fA70;
  s32 v54 = a->fA54;
  s32 v64 = a->fA64;
  a->f4D0 = 2;
  n = 0;
  t[n].k = 9;
  t[n].v = 0;
  n++;
  t[n].k = 11;
  t[n].v = 0;
  n++;
  t[inline_fn(n)].k = 14;
  t[n].v = 0;
  n++;
  t[n].k = 16;
  t[n].v = 0;
  n++;
  t[n].k = 0x48;
  t[n].v = 0;
  n++;
  t[n].k = 0x8B;
  t[n].v = v48;
  n++;
  t[n].k = 0x8F;
  t[n].v = v4c;
  n++;
  t[n].k = 0x97;
  t[n].v = v58;
  n++;
  t[n].k = 0x9B;
  t[n].v = v64;
  n++;
  new_var = 0xA4;
  t[n].k = 0xA3;
  t[n].v = v70;
  n++;
  t[n].k = new_var;
  t[n].v = v54;
  n++;
  t[n].k = 0x11;
  t[n].v = 0;
  n++;
  t[n].k = 0x13;
  t[n].v = 0;
  n++;
  t[n].k = 0x3C;
  t[n].v = a->f9D4;
  n++;
  t[n].k = 0x3E;
  t[n].v = a->f9D8;
  n++;
  t[n].k = 0x40;
  t[n].v = a->f9DC;
  n++;
  t[n].k = 0x42;
  t[n].v = a->f9E0;
  n++;
  t[n].k = 0x43;
  t[n].v = 0;
  n++;
  t[n].k = 0x44;
  t[n].v = 0;
  n++;
  t[n].k = 0x45;
  t[n].v = 0;
  n++;
  t[n].k = 0x46;
  t[n].v = 0;
  n++;
  a->fA30 = func_0015C908(0, 0x58 + ((char *) a), t, n);
}
