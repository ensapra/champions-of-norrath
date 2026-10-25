extern int func_00220278(void *, s32, void *, s16);
extern s32 func_00165DC0(void *, void *);
extern void func_001637A8(void *);
extern void func_00163830(void *, s32, s32);
extern void func_00163BA0(void *);
extern unsigned char D_0044F1F8[];
extern unsigned char D_00471310[];
struct Copy12 { u32 a; u32 b; u32 c; };

volatile char func_00225FE8(void *arg0, s32 arg1, void *arg2, s16 arg3)
{
  u8 *new_var;
  void *new_var2;
  u8 *g;
  struct Copy12 temp;
  temp = *((struct Copy12 *) arg2);
  g = ((u8 *) arg0) + 0x98;
  func_00220278(arg0, arg1, &temp, arg3);
  new_var2 = arg0;
  new_var = ((u8 *) arg0) + 0x48;
  *((void **) new_var) = D_0044F1F8;
  *((s32 *) (((u8 *) new_var2) + 0xC)) |= 1;
  *((s32 *) (((u8 *) new_var2) + 0x198)) = func_00165DC0(((u8 *) new_var2) + 0x6D, D_00471310);
  if (*((s32 *) (((u8 *) new_var2) + 0x198)) != 0) {
    func_001637A8(g);
    func_00163830(g, *((s32 *) (((u8 *) new_var2) + 0x198)), 4);
    func_00163BA0(g);
    *((u16 *) (((u8 *) new_var2) + 0x9E)) |= 0x80;
    *((f32 *) (*((void **) (((u8 *) new_var2) + 0x198))) + 5) = 1.0f;
    *((u8 *) (*((void **) (((u8 *) new_var2) + 0x198))) + 0x18) = 1;
  }
}
