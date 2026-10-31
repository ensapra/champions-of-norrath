s16 func_0026FC40(void);
s16 func_0026FC48(void *);
f32 func_0026FC50(void *);
int func_0026FA88(void *, s32);
extern f32 D_0037EE80[];
inline f32 inline_fn(void *arg0)
{
  return func_0026FC50(arg0);
}

void func_0026F9B0(void *p)
{
  void *new_var;
  *((s16 *) (((u8 *) p) + 0x162)) = func_0026FC40();
  new_var = p;
  *((s16 *) (((u8 *) new_var) + 0x164)) = func_0026FC48(p);
  *((f32 *) (((u8 *) new_var) + 0x170)) = D_0037EE80[0];
  *((f32 *) (((u8 *) new_var) + 0x174)) = D_0037EE80[1];
  *((f32 *) (((u8 *) new_var) + 0x178)) = D_0037EE80[2];
  *((f32 *) (((u8 *) p) + 0x168)) = inline_fn(p);
  func_0026FA88(new_var, 0);
  return 0;
}
