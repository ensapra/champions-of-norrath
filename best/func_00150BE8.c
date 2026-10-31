typedef struct 
{
  u8 pad0[0x5A0];
  s32 a0;
  s32 a1;
  s32 pad2;
  s32 a3;
  s32 a4;
  u8 pad1[0x5D4 - 0x5B4];
  s32 b;
  u8 pad3[0x810 - 0x5D8];
  s32 c0;
  s32 c1;
  s32 c2;
  s32 c3;
  s32 c4;
  s32 c5;
  s32 pad5[2];
  s32 r0;
  s32 r1;
  s32 r2;
  s32 r3;
  u8 pad4[0x858 - 0x840];
  s32 ok;
} S150;
void func_0014BA50(s32, s32, s32, s32, s32 *, s32 *, s32 *, s32 *);
void func_00150BE8(S150 *s)
{
  s32 x2 = s->c0 + s->b;
  s32 w2 = s->a3 + s->a0;
  s32 x3 = s->c1 + s->b;
  s32 x0 = s->c0 + s->a0;
  s32 w3 = s->a4 + s->a1;
  s32 x1 = s->c1 + s->a1;
  s->r3 = w3 + x3;
  s->r1 = x1 + s->b;
  s->r0 = x0 + s->b;
  s->r2 = x2 + w2;
  func_0014BA50(s->c2, s->c3, s->c4, s->c5, &s->r0, &s->r1, &s->r2, &s->r3);
  if (s->r2 <= s->r0)
  {
    s->ok = 0;
  }
  else
    if (s->r3 <= s->r1)
  {
    s->ok = 0;
  }
  else
  {
    s->ok = 1;
  }
}
