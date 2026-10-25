f32 func_002F11B8(f32 x) {
 union { f32 f; s32 i; } u; s32 e, mask, t; u32 bits;
 u.f=x; bits=(u32)u.i & 0x7fffffff; e=(bits>>23)-0x7f;
 if(e<0x17) {
  if(e<0) {
   if (x + 9.9999994e29f <= 0.0f) return x;
   if(u.i<0) u.i=0x80000000;
   else if(bits>0x7fffff) u.i=0x3f800000;
   return u.f;
  }
  mask=0x7fffff>>e;
  if(!(u.i&mask)) return x;
  if(x+9.9999994e29f>0.0f) {
   t=~mask;
   if(u.i>0) { u.i += 0x800000>>e; t=~mask; }
   u.i &= t;
  }
  return u.f;
 }
 return x;
}
