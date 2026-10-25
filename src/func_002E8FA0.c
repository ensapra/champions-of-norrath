typedef struct 
{
  char pad[0x24];
  int f;
} S;
extern int func_002D7908(int);
extern int func_002D80A0(void *, int, int);
extern void *func_003021B0(void *, int, int);
extern S D_008EBDD8;
int func_002E8FA0(void)
{
  int new_var;
  S *p = &D_008EBDD8;
  unsigned int i;
  func_002D7908(0);
  func_003021B0(p, 0, 0x28);
  while (1)
  {
    if (0 > func_002D80A0(&D_008EBDD8, 0x61766973, 0))
    {
      while (1)
      {
      }

    }
    if (p->f != 0)
    {
      break;
    }
    new_var = -1;
    for (i = 0xFFFF; i != new_var; i -= 4)
    {
    }

  }

  return 0;
}
