typedef struct 
{
  char pad0[0x80];
  s32 id;
  s32 a;
  s32 b;
  char pad8C[0x1C];
  void *cb;
  void *cb1;
  void *cb2;
  char padB4[0xC];
} Widget;
extern void func_001050A8(Widget *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00105190(Widget *);
extern void func_00130AE8(void);
extern void func_00130D70(void);
extern s32 D_010CD438[];
extern s32 D_010CD780[];
extern s32 D_010CD790[];
extern s32 D_010CD7A0[];
extern s32 D_001BAC84[];
void func_00130DA0(s32 idx)
{
  Widget w;
  s32 i;
  for (i = 0; i < 3; i++)
  {
    if (D_010CD780[i] != 0)
    {
      s32 d;
      s32 ad;
      if (D_001BAC84[0] & 2)
      {
        d = i != idx;
        ad = d;
      }
      else
      {
        ad = __builtin_abs(i - idx);
        d = i - idx;
      }
      func_001050A8(&w, D_010CD438[i], 0, ad * 4, 0x5A, 0xA, 0, 0, 0, 0);
      w.id = i;
      if (ad == 0)
      {
        w.a = 0;
        w.b = 8;
        D_010CD790[idx] += 0xC;
      }
      else
      {
        D_010CD790[idx] = (D_010CD790[idx] - (ad * 2)) + 0xA;
        D_010CD7A0[idx] += 8 / d;
        w.a = 8 / d;
        w.b = 6 - (ad * 2);
      }
      w.cb1 = func_00130AE8;
      w.cb2 = func_00130D70;
      func_00105190(&w);
    }
  }
}
