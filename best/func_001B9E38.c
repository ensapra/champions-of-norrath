s32 D_00483F1C;
s8 D_0047C548[1];
s32 D_0047D020;
s32 D_0047F0A0;
volatile f32 D_004805D8;
volatile f32 D_004805DC;
volatile f32 D_004805E0;
volatile f32 D_004805E4;
extern char D_007D03E8[];
extern char D_00332FD0[];
void func_001B9E38(s32 a0, s32 a1, void *a2, s32 a3)
{
  char *t;
  s32 idx;
  s32 frame;
  f32 x;
  f32 y;
  f32 z;
  s32 *new_var;
  f32 scale;
  if (D_00483F1C != 0)
  {
    t = D_007D03E8;
  }
  else
  {
    t = D_00332FD0 + (a0 * 0x58);
  }
  idx = a1 * 4;
  if (D_0047C548[a0] == 0)
  {
    new_var = &D_0047D020;
    if (((*((s32 *) (((char *) new_var) + idx))) == 0) && ((*((s32 *) (((char *) (&D_0047F0A0)) + idx))) == 0))
    {
      scale = D_004805D8;
      *((f32 *) (((char *) a2) + 0x44)) = (*((f32 *) (((char *) a2) + 0x44))) + ((*((f32 *) (t + 0x14))) * scale);
      *((f32 *) (((char *) a2) + 0x48)) = (*((f32 *) (((char *) a2) + 0x48))) + ((*((f32 *) (t + 0x18))) * scale);
    }
    frame = *((s32 *) a2);
    x = *((f32 *) (((char *) a2) + 0x44));
    y = (f32) frame;
    if (x < y)
    {
      *((f32 *) (((char *) a2) + 0x44)) = y;
      x = y;
    }
    z = (f32) (frame + 0x140);
    if (z < x)
    {
      *((f32 *) (((char *) a2) + 0x44)) = z;
    }
    y = *((f32 *) (((char *) a2) + 0x48));
    if (y < 0.0f)
    {
      *((f32 *) (((char *) a2) + 0x48)) = 0.0f;
      y = 0.0f;
    }
    if (y > 428.0f)
    {
      *((f32 *) (((char *) a2) + 0x48)) = 428.0f;
      y = 428.0f;
    }
    if (D_004805DC < y)
    {
      *((s32 *) (((char *) a2) + 0x28)) += 2;
    }
    if (D_004805E0 < y)
    {
      *((s32 *) (((char *) a2) + 0x28)) += 2;
    }
    if (y < 112.0f)
    {
      *((s32 *) (((char *) a2) + 0x28)) -= 2;
    }
    if (y < (z = D_004805E4))
    {
      *((s32 *) (((char *) a2) + 0x28)) -= 2;
    }
    idx = a3 < (*((s32 *) (((char *) a2) + 0x28)));
    if ((*((s32 *) (((char *) a2) + 0x28))) < 0)
    {
      *((s32 *) (((char *) a2) + 0x28)) = 0;
      idx = a3 < 0;
    }
    if (idx)
    {
      *((s32 *) (((char *) a2) + 0x28)) = a3;
    }
  }
}
