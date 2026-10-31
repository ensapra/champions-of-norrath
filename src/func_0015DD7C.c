typedef struct 
{
  u64 b0 : 1;
  u64 b14 : 4;
  u64 rest : 59;
} GuiFlagBits;
typedef union 
{
  u64 all;
  GuiFlagBits b;
} GuiFlags;
typedef struct 
{
  u8 pad0[0x4EC];
  s32 page;
  u8 pad4F0[0xE84 - 0x4F0];
  s32 mode;
  u8 padE88[0xEA8 - 0xE88];
  s32 cnt;
  s32 padEAC;
  GuiFlags flags;
} Gui;
extern void func_0015E2E8(void);
extern void func_0015E3C8(Gui *);
extern void func_0015EDAC(Gui *);
extern void func_00171AE0(void *);
extern u8 func_001C8098[];
void func_0015DD7C(Gui *p)
{
  if (p->cnt != 0)
  {
    if (p->flags.all & 0x1E)
    {
      func_0015E2E8();
      func_0015E3C8(p);
    }
    if (p->flags.b.b0)
    {
      func_0015EDAC(p);
    }
    p->cnt--;
  }
  else
  {
    p->flags.all = 0;
  }
  (*((void (**)(Gui *)) (func_001C8098 + 0xD68)))(p);
  func_00171AE0((((u8 *) p) + ((p->page ^ 1) * 0xA0)) + 0x910);
  if (p->mode == 0x13)
  {
    func_00171AE0((((u8 *) p) + ((p->page ^ 1) * 0xA0)) + 0xA50);
  }
  func_00171AE0((((u8 *) p) - (-((p->page ^ 1) * 0x170))) + 0xB90);
}
