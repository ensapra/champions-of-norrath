typedef struct 
{
  s32 pad[3];
  u8 buf[0x44A0];
  s32 head;
} Ring;
s8 D_00483829;
s32 func_00135438(s32);
void func_00134F68(s32 arg0, u8 *arg1, s32 arg2)
{
  Ring *r;
  s32 i;
  if (D_00483829 == 0)
  {
    ((void (*)(u8 *, s32)) D_004F3ED0[arg0])(arg1, arg2);
    return;
  }
  r = (Ring *) (D_004E2280 + (func_00135438(0) * 0x44E0));
  r->buf[(r->head % 0x1FFF) + 0x24A0] = arg0;
  r->buf[((r->head + 1) % 0x1FFF) + 0x24A0] = arg2;
  for (i = 0; i < arg2; i++)
  {
    r->buf[(((r->head + i) + 2) & 0x1FFF) + 0x24A0] = arg1[i];
  }

  r->head = (r->head + arg2) + 2;
  r->head = r->head & 0x1FFF;
}
