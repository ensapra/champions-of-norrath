extern unsigned char D_0047E1F1[263];
s32 func_002FF990(char *);
s32 func_00304CFC(char *);
s32 func_00304F60(char *, char *, s32);
s32 func_00143D98(char **env, char *name, s32 n)
{
  char *p;
  char *e;
  s32 len;
  if (env == 0)
  {
    return 0;
  }
  p = name;
  if (*p)
  {
    do
    {
      s32 c = *p;
      s32 r = c;
      if ((*((unsigned char *) (((s32) D_0047E1F1) + c))) & 1)
      {
        r = c + 0x20;
      }
      *p = r;
      p++;
    }
    while (*p);
  }
  len = func_00304CFC(name);
  if (*((s32 *) env))
  {
    do
    {
      if (func_00304F60(*env, name, len) == 0)
      {
        e = (*env) + len;
        if (((*e) == '=') && ((len = --n) == (-1)))
        {
          return func_002FF990(e + 1);
        }
      }
      env++;
    }
    while (*((s32 *) env));
  }
  return 0;
}
