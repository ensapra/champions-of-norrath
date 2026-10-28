typedef struct { f32 x,y,z; } O12;
extern f32 func_0015A070(s16);
extern f32 func_0015A100(s16);
extern s32 D_004844A0;
f32 func_00176378(s32, f32 *, f32);
s32 func_001441B8(s32);
void func_0029BD40(s32, s32, s32, f32 *, void *);
s32 func_0029C940(void *self, s32 a1, s32 a2, O12 *vec, s16 angle)
{
  O12 in; O12 o; O12 *op;
  f32 scale, y;
  in = *vec;
  {
    char *vt = *((char **) (((char *) self) + 0x60));
    char *e = vt + 0x58;
    s16 off = *((s16 *) e);
    s32 (*fn)(void *, s32, s32) = *(void **) (e + 4);
    scale = (f32) fn(((char *) self) + off, 1, a1);
  }
  o.x = func_0015A070(angle) * scale * 12.0f;
  y = func_0015A100(angle) * scale * 12.0f;
  op = &o;
  op->y = y;
  op->x += in.x;
  op->z = 0.0f;
  op->y += in.y;
  op->z += func_00176378(D_004844A0, &op->x, scale);
  op->z += 6.0f;
  {
    s32 id = func_001441B8(0xA8);
    if (id) func_0029BD40(id, a1, a2, &op->x, self);
  }
  return 0;
}
