extern void func_00104F30(int);
extern void func_00106E30(int, int);
extern void func_001389A0(int);
extern void func_00139550(int, int);
extern void func_001411F8(void);
extern void func_00141F80(void);
extern void func_0014B6F4(int);
extern int func_001523D0(int);
extern void func_00152520(void);
extern int D_001BB6C4[];
extern int D_001BD8AC[];
extern int D_010C7DC0[];
extern int D_010C7DC8[];
inline static void cleanup(int *p)
{
  if (func_001523D0(D_001BD8AC[0]) == (*p))
    func_00152520();
  func_0014B6F4(*p);
  func_00104F30(*p);
  func_00106E30(0, *p);
  func_00106E30(1, *p);
  if (D_001BB6C4[0] == (*p))
    D_001BB6C4[0] = 0;
  func_001389A0(*p);
  *p = 0;
}

int func_00125370(int *a)
{
  int i;
  int *p;
  int *new_var;
  switch (a[4])
  {
    case 1:
      func_001411F8();
      func_00139550(0xFF, 0x14);
      return 0;

    case 2:
      p = D_010C7DC8;
      for (i = 0; i < 2; i++, p++)
    {
      if (*p)
      {
        cleanup(p);
      }
    }

      func_00141F80();
      return 0;

    case 5:
      new_var = D_010C7DC0;
      if (new_var[0])
    {
      cleanup(new_var);
    }
      return 1;

  }

  return 0;
}
