typedef struct 
{
  s32 p0[11];
  s32 sema;
  s32 p1;
  s32 init;
  s32 u38;
  s32 u3c;
  s32 n0;
  s32 n1;
  s32 p2[6];
  s32 u60;
  s32 p3[3];
  s64 u70;
  s32 u78;
  void *u7c;
  void *u80;
  s32 u84;
} Kb;
extern Kb D_008EBDD8;
extern char D_0047BEF8[];
extern char D_0047BF70[];
extern volatile unsigned int D_0047BFB8[];
extern char D_0047C020[];
extern char D_00447C60[];
extern void func_002E7810(void);
s32 CreateSema_2(void *);
void func_002E7848(void);
void func_002E7A38(void *, s32, s32, void *);
void func_002E8E98(s32);
void func_002E8FA0(void);
void func_00302560(void *, ...);
s32 func_002E6ED0(s32 arg0, s32 arg1, s32 arg2, void *arg3)
{
  s32 sp[8];
  s32 r;
  if (D_008EBDD8.init != 0)
  {
    func_00302560(D_0047BF70);
    return 0x80000000;
  }
  func_00302560(D_0047BFB8, 1, 6, 1, D_0047C020, arg2);
  if (arg1 >= 5)
  {
    arg1 = 4;
  }
  if (arg0 >= 5)
  {
    arg0 = 4;
  }
  D_008EBDD8.n0 = arg0;
  D_008EBDD8.n1 = arg1;
  D_008EBDD8.u70 = 0x64;
  D_008EBDD8.u78 = 0x1F4;
  D_008EBDD8.u60 = 1;
  if (D_00447C60 != 0)
  {
    char *p = D_00447C60;
    D_008EBDD8.u84 = 0x4B;
    D_008EBDD8.u7c = p;
    func_002E7A38(p, 0, 0x4A, p);
  }
  if (arg2)
  {
    D_008EBDD8.u38 = 0;
    D_008EBDD8.u3c = 0;
    sp[1] = (sp[2] = 1);
    r = CreateSema_2(sp);
    D_008EBDD8.sema = r;
  }
  else
  {
    D_008EBDD8.u38 = 0;
    D_008EBDD8.u3c = 0;
    sp[1] = (sp[2] = 1);
    r = CreateSema_2(sp);
    D_008EBDD8.sema = r;
  }
  if (r == (-1))
  {
    func_00302560(D_0047BEF8);
    while (1)
    {
    }

  }
  func_002E8FA0();
  if (arg3 == 0)
  {
    func_002E7848();
    D_008EBDD8.u80 = (void *) func_002E7810;
  }
  else
  {
    D_008EBDD8.u80 = arg3;
  }
  func_002E8E98(arg2);
  D_008EBDD8.init = 1;
  return 0;
}
