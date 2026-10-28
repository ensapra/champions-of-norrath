extern char D_004CF040[];
extern char D_004CF098[];
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
  u16 flags;
  u16 btn;
  u16 extra;
  u16 x;
  if (w == NULL)
  {
    func_001A1568(D_004CF040, 0x1CA, D_004CF098);
  }
  mode = w->mode;
  if (((mode == 0) || (mode == 2)) || (mode == 3))
  {
    return;
  }
  d = D_00480488;
  btn = (in >> 32) & 0xFFFF;
  flags = (in >> 16) & 0xFFFF;
  x = in & 0xFFFF;
  extra = in >> 48;
  if (d->u.any == 0)
  {
    return;
  }
  if (flags & 0xF0)
  {
    flags &= 0xFFF;
    x &= 0xFFF;
    btn &= 0xFFF;
  }
  if (d->u.b.modal)
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
