extern u8 *func_001521A0(u8 *, s32);
void func_00151868(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *p;
  u8 *new_var;
  new_var = arg0;
  if ((*((s32 *) (new_var + 0xFE0))) == 0)
  {
    p = func_001521A0(new_var, 1);
    if (p != 0)
    {
      *((s32 *) (new_var + 0xFD4)) = arg1;
      *((s32 *) (p + 0x14)) = arg1;
      *((s32 *) (new_var + 0xFD8)) = arg2;
      *((s32 *) (p + 0x18)) = arg2;
      *((s32 *) (new_var + 0xFDC)) = arg3;
      *((s32 *) (p + 0x1C)) = arg3;
    }
    return;
  }
  if ((*((s32 *) (new_var + 0xFE0))) & 1)
  {
    p = func_001521A0(new_var, 2);
    if (p == 0)
    {
      return;
    }
    *((s32 *) (new_var + 0xFD4)) = arg1;
    *((s32 *) (p + 0x14)) = arg1;
    *((s32 *) (new_var + 0xFD8)) = arg2;
    *((s32 *) (p + 0x18)) = arg2;
    *((s32 *) (new_var + 0xFDC)) = arg3;
    *((s32 *) (p + 0x1C)) = arg3;
  }
  if ((*((s32 *) (new_var + 0xFE0))) & 2)
  {
    p = func_001521A0(new_var, 3);
    if (p == 0)
    {
      return;
    }
    *((s32 *) (new_var + 0xFD4)) = arg1;
    *((s32 *) (p + 0x14)) = arg1;
    *((s32 *) (new_var + 0xFD8)) = arg2;
    *((s32 *) (p + 0x18)) = arg2;
    *((s32 *) (new_var + 0xFDC)) = arg3;
    *((s32 *) (p + 0x1C)) = arg3;
  }
  if ((*((volatile s32 *) (new_var + 0xFE0))) & 4)
  {
    p = func_001521A0(new_var, 4);
    if (p == 0)
    {
      return;
    }
    *((s32 *) (new_var + 0xFD4)) = arg1;
    *((s32 *) (p + 0x14)) = arg1;
    *((s32 *) (new_var + 0xFD8)) = arg2;
    *((s32 *) (p + 0x18)) = arg2;
    *((s32 *) (new_var + 0xFDC)) = arg3;
    *((s32 *) (p + 0x1C)) = arg3;
  }
}
