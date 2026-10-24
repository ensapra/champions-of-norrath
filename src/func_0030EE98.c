extern char D_00460DD8[];
extern char D_00460DE8[];
extern s32 D_008EAB78[];
extern s32 D_008EABD8[];
extern s32 D_008EB008[];
void func_002FD348(s32 *, char *, s32 *);
void func_0030D510(s32, s32);
s32 *func_0030EE98(void)
{
  s32 *p_outer = D_008EB008;
  s32 *p_inner;
  s32 u0, u1;
  if (*p_outer == 0)
  {
    p_inner = D_008EABD8;
    if (*p_inner == 0)
    {
      func_0030D510(u0, u1);
      func_002FD348(p_inner, D_00460DD8, D_008EAB78);
    }
    func_002FD348(p_outer, D_00460DE8, p_inner);
  }
  return D_008EB008;
}
