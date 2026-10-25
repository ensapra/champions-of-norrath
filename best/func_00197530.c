extern char jtbl_004C006C[];
typedef struct 
{
  union 
  {
    u16 any;
    struct 
    {
      u8 active;
      u8 modal;
    } b;
  } u;
  char pad2[0x24 - 2];
  void (*close)(s32);
} Dialog;
typedef struct Widget Widget;
struct Widget
{
  char pad0[0x14];
  void (*onInput)(Widget *, s32, s32, s32, s32);
  char pad18[0x3C - 0x18];
  void (*setState)(Widget *, s32);
  char pad40[0x4C - 0x40];
  s32 unk4C;
  char pad50[0xE4 - 0x50];
  s32 mode;
};
extern Dialog *D_00480488;
void func_001A1568(char *, s32, char *);
void func_00198C24(s32);
void func_00197530(Widget *w, u64 in)
{
  s32 mode;
  Dialog *d;
  u16 new_var;
  u16 x;
  struct 
  {
    u8 active;
    u8 modal;
  } *new_var2;
  u16 flags;
  u16 btn;
  u16 extra;
  if (w == NULL)
  {
    func_001A1568(jtbl_004C006C + 0xEFD4, 0x1CA, jtbl_004C006C + 0xF02C);
  }
  mode = w->mode;
  if (((mode == 0) || (mode == 2)) || (mode == 3))
  {
    return;
  }
  d = D_00480488;
  new_var = 32;
  btn = (in >> new_var) & 0xFFFF;
  flags = (in >> 16) & 0xFFFF;
  x = in & 0xFFFF;
  new_var = d->u.any;
  extra = in >> 48;
  if (new_var == 0)
  {
    return;
  }
  if (flags & 0xF0)
  {
    flags &= 0xFFF;
    x &= 0xFFF;
    btn &= 0xFFF;
  }
  new_var2 = &d->u.b;
  if ((*new_var2).modal)
  {
    if (btn & 0x40)
    {
      d->u.b.modal = 0;
      D_00480488->close(0);
      w->setState(w, 1);
      w->unk4C = 0;
      func_00198C24(6);
    }
  }
  else
  {
    w->onInput(w, btn, extra, flags, x);
  }
}
