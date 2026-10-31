typedef struct 
{
  s32 r;
  s32 g;
  s32 b;
  s32 a;
  s32 x;
  s32 y;
} Unp;
s32 func_00178BD8(u64 *in, Unp *out)
{
  u64 v = *in;
  s32 r;
  s32 g;
  s32 b;
  s32 a;
  s32 x;
  s32 y;
  r = (s32) (v & 0xFF);
  g = (s32) ((v & 0xFF00) >> 8);
  b = (s32) ((v & 0xFF0000) >> 16);
  x = (s32) ((v & 0x00FFFFFF00000000ULL) >> 32);
  ;
  y = (s32) (v >> 56);
  out->a = (s32) ((v & 0xFF000000) >> 24);
  out->r = r;
  out->g = g;
  out->x = x;
  out->b = b;
  out->y = y;
  return 0;
}
