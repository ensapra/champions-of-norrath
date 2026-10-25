typedef union { f64 d; struct { u32 lo; s32 hi; } w; } U;
extern const f64 D_0047CE08, D_0047CE10, D_0047CE18, D_0047CE20, D_0047CE28, D_0047CE30, D_0047CE38, D_0047CE40, D_0047CE48, D_0047CE50, D_0047CE58, D_0047CE60, D_0047CE68, D_0047CE70, D_0047CE78, D_0047CE80, D_0047CE88;
f64 func_002F2570(f64 x){
 f64 hfsq, f, s, z, R, w, t1, t2, dk;
 s32 k, hx, i, j;
 u32 lx;
 U u;
 u.d = x; hx = u.w.hi; lx = u.w.lo;
 k = 0;
 if (hx < 0x100000) {
  if (((hx & 0x7fffffff) | lx) == 0) return D_0047CE08;
  if (hx < 0) return (x - x) / 0.0;
  k -= 54; x *= 18014398509481984.0; u.d = x; hx = u.w.hi;
 }
 if (hx >= 0x7ff00000) return x + x;
 k += (hx >> 20) - 1023;
 hx &= 0x000fffff;
 i = (hx + 0x95f64) & 0x100000;
 u.d = x; u.w.hi = hx | (i ^ 0x3ff00000); x = u.d;
 k += (i >> 20);
 f = x - 1.0;
 if ((0x000fffff & (2 + hx)) < 3) {
  if (f == 0.0) {
   if (k == 0) return 0.0;
   dk = (f64)k; return dk * D_0047CE10 + dk * D_0047CE18;
  }
  R = f * f * (0.5 - D_0047CE20 * f);
  if (k == 0) return f - R;
  dk = (f64)k; return dk * D_0047CE28 - ((R - dk * D_0047CE30) - f);
 }
 s = f / (2.0 + f);
 dk = (f64)k;
 z = s * s;
 i = hx - 0x6147a;
 w = z * z;
 j = 0x6b851 - hx;
 t1 = w * (D_0047CE48 + w * (D_0047CE40 + w * D_0047CE38));
 t2 = z * (D_0047CE68 + w * (D_0047CE60 + w * (D_0047CE58 + w * D_0047CE50)));
 i |= j;
 R = t2 + t1;
 if (i > 0) {
  hfsq = 0.5 * f * f;
  if (k == 0) return f - (hfsq - s * (hfsq + R));
  return dk * D_0047CE70 - ((hfsq - (s * (hfsq + R) + dk * D_0047CE78)) - f);
 }
 if (k == 0) return f - s * (f - R);
 return dk * D_0047CE80 - ((s * (f - R) - dk * D_0047CE88) - f);
}
