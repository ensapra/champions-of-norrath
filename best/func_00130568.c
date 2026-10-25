extern s32 D_010CD7E0[];
extern s32 D_010CD7E8[];
extern s32 D_001C6834[];
typedef struct 
{
  s32 a;
  s32 b;
  void *c;
  s32 d;
  s32 e;
  s32 f;
  s32 g;
  s32 h;
} Obj;
void func_0013E350(void);
void func_0013E418(void);
void func_0013E5D0(void);
void func_00130448(void);
void func_00118140(Obj *, s32, void *, void *, void *);
void func_00118278(s32, Obj *);
void func_0013E340(s32);
void func_00130350(s32, s32);
void func_0012FC68(s32);
void func_00130568(void)
{
  s32 i;
  s32 *new_var;
  s32 n;
  s32 m;
  s32 *p;
  Obj o;
  new_var = D_001C6834;
  n = new_var[0];
  if (D_010CD7E0[0] < n)
  {
    func_00118140(&o, 1, func_0013E350, func_0013E418, func_0013E5D0);
    o.c = func_00130448;
    m = 0;
    func_0013E340(D_010CD7E0[m]);
    func_00118278(0, &o);
    return;
  }
  i = 0;
  if (n > 0)
  {
    m = n;
    p = D_010CD7E8;
    do
    {
      if ((*(p++)) != 0)
      {
        func_00130350(i, m);
        return;
      }
      i++;
    }
    while (i < m);
  }
  func_0012FC68(m);
}
