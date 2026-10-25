typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
void *func_00165DC0(void *, void *);
void func_00160010(void *, void *, s32, s32, s32, f32, f32);
void func_0024D308(void *, void *, f32);
extern f32 D_004826C4;
extern f32 D_004826C8;
extern char D_00477930[];
extern char D_00477940[];
extern char D_00486140[];
s32 func_002909D8(u8 *arg0, u8 *arg1, u8 *arg2, Vec3 arg3)
{
  s32 k4;
  s32 k8;
  f32 q1;
  f32 q2;
  f32 q3;
  f32 q4;
  f32 q5;
  u8 *p;
  void ***new_var;
  if ((*((s32 *) (arg2 + 0xc))) & 0x40)
  {
    *((s32 *) (arg2 + 0x578)) = 10;
    new_var = (void ***) (arg2 + 0x24);
    p = func_00165DC0(*(*new_var), D_00477930);
    q1 = 0.25f;
    q2 = 0.5f;
    q3 = 0.75f;
    q4 = D_004826C4;
    q5 = D_004826C8;
    k4 = 4;
    k8 = 8;
    *((f32 *) (p + 0x14)) = q1;
    *((s8 *) (p + 0x18)) = 1;
    *((s8 *) (p + 0x20)) = 2;
    *((f32 *) (p + 0x1c)) = q2;
    *((f32 *) (p + 0x24)) = q3;
    *((s8 *) (p + 0x28)) = k4;
    *((f32 *) (p + 0x2c)) = q4;
    *((s8 *) (p + 0x30)) = k8;
    func_00160010(arg2 + 0x120, p, 10, k4, k8, q5, q5);
    func_0024D308(func_00165DC0(D_00486140, D_00477940), arg2, 1.0f);
  }
  return 0;
}
