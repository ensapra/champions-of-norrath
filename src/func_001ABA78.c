typedef union { f64 d; struct { u32 lo, hi; } w; } DU;
#define EXTRACT_WORDS(ix0,ix1,d_) do{DU u_;u_.d=(d_);(ix0)=u_.w.hi;(ix1)=u_.w.lo;}while(0)
s32 func_001ABA78(f64 x) {
 s32 hx, lx;
 EXTRACT_WORDS(hx, lx, x);
 hx &= 0x7fffffff;
 hx |= (u32)(lx | -lx) >> 31;
 hx = 0x7ff00000 - hx;
 return (u32)hx >> 31;
}
