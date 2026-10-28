typedef struct { s32 x, y, z; } V;
typedef struct { char p0[0xC]; s32 flags; char p1[0x38]; s32 vt; s32 q; s32 n; u16 time; u8 frame; } O;
extern char D_0044A780[];
void func_001411F0(void*,void*,s32,s32); void func_00143830(void*); u32 func_00153FA8(void*);
void func_001E65B8(O *p, V *b, f32 x)
{
  V a = *b;
  func_001411F0(p, &a, 0, 0);
  p->vt = (s32)D_0044A780;
  p->flags |= 0x420C;
  p->n = 0;
  p->q = 0;
  if (x > 0.0f)
    p->n = (s32)(x * 60.0f);
  p->frame = func_00153FA8(p) % 60;
  p->time = func_00153FA8(p) % 6000 + 0x1F40;
  func_00143830(p);
}
