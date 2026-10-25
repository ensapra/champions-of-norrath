s32 func_001A1640(const char *);
s32 func_001A444C(const char *);
char *func_001A4738(char *, const char *, s32);
s32 func_0010B3E0(char *str, s32 *a, s32 *b, s32 *c, s32 *d)
{
  char buf[16];
  s32 new_var;
  char *new_var2;
  s32 i = 0;
  s32 start;
  s32 len = func_001A444C(str);
  for (;; i++)
  {
    if (i >= len)
    {
      return 0;
    }
    if (str[i] == '.')
    {
      break;
    }
  }

  func_001A4738(buf, str, i);
  buf[i] = 0;
  *a = func_001A1640(buf);
  i++;
  start = i;
  for (;; i++)
  {
    new_var = i;
    if (new_var >= len)
    {
      return 0;
    }
    if (str[i] == '.')
    {
      break;
    }
  }

  func_001A4738(buf, str + start, i - start);
  buf[i - start] = 0;
  *b = func_001A1640(buf);
  i++;
  start = i;
  new_var2 = buf;
  for (;; i++)
  {
    if (i >= len)
    {
      return 0;
    }
    if (str[i] == '.')
    {
      break;
    }
  }

  func_001A4738(new_var2, str + start, i - start);
  buf[i - start] = 0;
  *c = func_001A1640(buf);
  i++;
  start = i;
  func_001A4738(buf, str + start, len - start);
  buf[len - start] = 0;
  *d = func_001A1640(buf);
  return 1;
}
