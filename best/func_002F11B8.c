f32 func_002F11B8(f32 x) {
 union { f32 f; s32 i; } u, c; s32 e, m, z; u32 b;
 u.f=x; b=(u32)u.i&0x7fffffff; e=(b>>23)-127;
 if(e>=23) return x;
 if(e<0) {
  c.i=0x7149f2c9;
  if (!(x+c.f>0.0f)) return x;
  if(u.i<0) u.i=0x80000000; else if(b>0x7fffff) u.i=0x3f800000;
  return u.f;
 }
 m=0x7fffff>>e;
 if((u.i&m)==0) return x;
 c.i=0x7149f2c9;
 if(!(x+c.f>0.0f)) return x;
 z=~m;
 if(u.i>0) { u.i+=(0x800000>>e); z=~m; }
 u.i &= z;
 return u.f;
}
