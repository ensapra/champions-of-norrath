extern void func_0024AF80(s32);
extern void func_0024EED0(char *, s32);
extern char D_0034B988[];
extern char D_0046EEB8[];
extern char D_0046EEC8[];
extern s32 D_00483F48;
void func_001FF508(void *arg0)
{
  int new_var;
  __builtin_memcpy(D_0034B988, D_0046EEB8, 9);
  new_var = 0x230;
  D_00483F48 = (s32) (*((f32 *) (((char *) arg0) + new_var)));
  func_0024AF80(0);
  func_0024EED0(D_0046EEC8, 0x103);
  return *((volatile s32 *) 0);
}
