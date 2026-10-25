typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} In3;
typedef struct 
{
  In3 in;
  s32 pad;
  volatile f32 x;
  volatile f32 y;
  volatile f32 z;
} Work;
extern f32 func_0015A070(s16);
extern f32 func_0015A100(s16);
extern s32 D_004844A0;
f32 func_00176378(s32, f32 *, f32);
s32 func_001441B8(s32);
void func_0029BD40(s32, s32, s32, f32 *, void *);
s32 func_0029C940(void *self, s32 a1, s32 a2, In3 *vec, s16 angle)
{
  Work w;
  volatile f32 new_var;
  float new_var2;
  w.in = *vec;
  char *vt = *((char **) (((char *) self) + 0x60));
  char *e = vt + 0x58;
  s16 off = *((s16 *) e);
  s32 fn = *((s32 *) (e + 4));
  f32 scale = (f32) ((s32 (*)(void *, s32, s32)) fn)(((char *) self) + off, 1, a1);
  w.x = (func_0015A070(angle) * scale) * 12.0f;
  w.y = (func_0015A100(angle) * scale) * 12.0f;
  volatile f32 *in = (volatile f32 *) (&w.in);
  w.x = w.x + in[0];
  new_var = in[1];
  w.y = w.y + new_var;
  new_var2 = w.z + func_00176378(D_004844A0, (f32 *) (&w.x), scale);
  w.z = 0.0f;
  w.z = new_var2 + 6.0f;
  s32 id = func_001441B8(0xA8);
  if (id)
  {
    func_0029BD40(id, a1, a2, (f32 *) (&w.x), self);
 do { } while (0);
  }
  return 0;
}
