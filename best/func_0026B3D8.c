s32 func_002F0B98(s32);
s32 func_002FB320(f32);
s32 func_002FBB50(s32);
extern f32 D_004820A0;
void func_0026B3D8(void *p)
{
  s32 flags = *((s32 *) (((char *) p) + 0x24));
  s32 mode;
  s32 t;
  f32 x;
  f32 y;
  f32 sx;
  f32 sy;
  f32 a;
  f32 b;
  if (!(flags & 2))
  {
 do { if (flags & 1) { mode = *((s32 *) (((char *) p) + 0x34)); if (mode & 0x10000) { *((s32 *) (((char *) p) + 0x28)) = -(*((s32 *) (((char *) p) + 0x28))); } if (mode & 0x20000) { *((s32 *) (((char *) p) + 0x2c)) = -(*((s32 *) (((char *) p) + 0x2c))); } if (mode & 0x40000) { t = *((s32 *) (((char *) p) + 0x2c)); *((s32 *) (((char *) p) + 0x2c)) = *((s32 *) (((char *) p) + 0x28)); *((s32 *) (((char *) p) + 0x28)) = t; } } else { x = (f32) (*((s32 *) (((char *) p) + 0x28))); y = (f32) (*((s32 *) (((char *) p) + 0x2c))); sx = ((f32) (*((s16 *) (((char *) p) + 0x38)))) * D_004820A0; sy = ((f32) (*((s16 *) (((char *) p) + 0x36)))) * D_004820A0; a = ((x * sy) - (y * sx)) + 0.5f; b = (x * sx) + (y * sy); t = func_002FB320(a); t = func_002F0B98(t); *((s32 *) (((char *) p) + 0x28)) = func_002FBB50(t); b += 0.5f; t = func_002FB320(b); t = func_002F0B98(t); *((s32 *) (((char *) p) + 0x2c)) = func_002FBB50(t); } } while (0);
  }
}
