s32 func_0014B41C(void *, s32);
s32 func_0014CA30(void *);
void func_00171AE0(void *);
extern s32 D_0047FC08;
extern s32 D_0047FC48;
void func_0015030C(void *arg0)
{
  char *temp_18 = ((char *) arg0) + 0x840;
  char *var_16 = temp_18;
  char *temp_4;
  char *temp_3;
  char *temp_4_2;
  char *temp_4_3;
  temp_4 = ((char *) arg0) + (((*((s32 *) (((char *) arg0) + 0x4ec))) ^ 1) * 0xa0);
  func_00171AE0((D_0047FC48 != 0) ? (temp_4 + 0x630) : (temp_4 + 0x680));
  if (((*((s32 *) (((char *) arg0) + 0x854))) != 0) && ((*((char **) (temp_18 + 8))) != temp_18))
  {
    do
    {
      var_16 = *((char **) (var_16 + 8));
      if ((*((s32 *) var_16)) != 0)
      {
        temp_4_2 = *((char **) (var_16 + 0x10));
        if ((((*((s32 *) (temp_4_2 + 0xa8))) != 0) && ((*((s32 *) (temp_4_2 + 0xa4))) != 0)) && ((((func_0014CA30(temp_4_2), func_0014B41C(*((char **) (var_16 + 0x10)), D_0047FC08) != 0)) || ((temp_3 = *((char **) ((*((char **) (var_16 + 0x10))) + 0x4c)), (*((s32 *) (temp_3 + 0x6c))) != 0))) || ((*((s32 *) (temp_3 + 0x70))) != 0)))
        {
          temp_4_3 = ((char *) arg0) + (((*((s32 *) (((char *) arg0) + 0x4ec))) ^ 1) * 0xa0);
          func_00171AE0((D_0047FC48 != 0) ? (temp_4_3 + 0x630) : (temp_4_3 + 0x680));
        }
      }
    }
    while ((*((s32 *) (var_16 + 8))) != temp_18);
  }
  ;
  func_00171AE0((((char *) arg0) + (8 * (10 * ((*((s32 *) (((char *) arg0) + 0x4ec))) ^ 1)))) + 0x770);
}
