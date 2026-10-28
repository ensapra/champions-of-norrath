typedef enum { SNAN, QNAN, ZERO, NUMBER, INF } CL;
typedef struct { CL cls; s32 sign; s32 normal_exp; u64 frac; } FP;
extern FP D_0047DF08;
void func_002FF610(double *, FP *);
double func_002FF538(FP *);
static inline int isnan_(FP *p) { return p->cls < 2; }
static inline int isinf_(FP *p) { return p->cls == INF; }
static inline int iszero_(FP *p) { return p->cls == ZERO; }
static inline FP *fpdiv(FP *a, FP *b) {
  u64 bit, num, den, q;
  if (isnan_(a)) return a;
  if (isnan_(b)) return b;
  a->sign = a->sign ^ b->sign;
  if (isinf_(a) || iszero_(a)) {
    if (a->cls == b->cls) return &D_0047DF08;
    return a;
  }
  if (isinf_(b)) { a->frac = 0; a->normal_exp = 0; return a; }
  if (iszero_(b)) { a->cls = INF; return a; }
  a->normal_exp = a->normal_exp - b->normal_exp;
  num = a->frac;
  den = b->frac;
  if (num < den) { num *= 2; a->normal_exp--; }
  bit = (u64)0x8000 << 45;
  q = 0;
  while (bit) {
    if (num >= den) { q |= bit; num -= den; }
    bit >>= 1;
    num *= 2;
  }
  a->frac = q;
  return a;
}
double func_002FB908(double a, double b) {
  FP x, y;
  func_002FF610(&a, &x);
  func_002FF610(&b, &y);
  return func_002FF538(fpdiv(&x, &y));
}
