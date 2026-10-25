extern char D_0046CD80[];
extern char D_00484FB0[];
extern char D_00484FB8[];
s32 func_00143A80(s32, char *, s32);
s32 func_001671F8(s32);
void ovl_ntgui2_func_00191830(s16 *, s32);
s32 func_001D3E88(s32);
inline int inline_fn(s32 arg0)
{
  return arg0 == 0;
}

s32 func_001D1850(s32 a, s16 *out)
{
  s32 i;
  char *msg;
  for (i = 0;; i++)
  {
    s32 r = func_00143A80(a, D_00484FB0, i);
    if (inline_fn(r))
    {
      break;
    }
    if (func_001D3E88(r) == 0)
    {
      s32 t = func_00143A80(a, D_0046CD80, (unsigned short) 0);
      if (inline_fn(t))
      {
        *out = 0;
        return 0;
      }
      ovl_ntgui2_func_00191830(out, func_001671F8(t));
      return 0;
    }
  }

  msg = D_00484FB8;
  if (func_00143A80(a, msg, 0) != 0)
  {
    ovl_ntgui2_func_00191830(out, func_001671F8(func_00143A80(a, msg, 0)));
  }
  else
  {
    *out = 0;
  }
  return 1;
}
