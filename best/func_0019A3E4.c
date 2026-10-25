void func_00195704(s32, s32);
void func_00195A78(s32, s32, s32);
void func_00195C24(s32, void *, s32);
void func_0019A028(s32);
extern char D_00508021[];
typedef struct 
{
  u32 w[2];
} __attribute__((packed, aligned(4))) Copy8;
void func_0019A3E4(s32 a, s32 flags)
{
  u16 f = flags;
  Copy8 data;
  if (f & 1)
  {
    func_00195A78(a, 8, 2);
  }
  if (f & 8)
  {
    func_00195704(a, 0);
  }
  if (f & 2)
  {
    func_00195A78(a, 9, 2);
  }
  if (f & 16)
  {
    data = *((Copy8 *) (D_00508021 + 0x4a7));
    func_00195C24(a, &data, 2);
  }
  if (f & 128)
  {
    func_00195A78(a, 4, 2);
  }
  if (f)
  {
    func_0019A028(a);
  }
  if (f & 2048)
  {
    func_00195A78(a, 5, 2);
  }
}
