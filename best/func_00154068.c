void func_00154068(void *arg0)
{
  s32 a2 = *((volatile s32 *) (((u8 *) arg0) + 0x4DC));
  s32 count = *((s32 *) (((u8 *) arg0) + 0x4EC));
  u8 *start = ((u8 *) arg0) + 0x910;
  u8 *base = start + (count * 0x140);
  s32 t0 = *((s32 *) (((u8 *) arg0) + 0x5A0));
  s32 a3 = *((s32 *) (((u8 *) arg0) + 0x4D4));
  s32 x = *((volatile s32 *) (((u8 *) arg0) + 0x4E0));
  s32 c = *((u16 *) (((u8 *) arg0) + 0x40C40));
  s32 b = a2 + t0;
  s32 a = x + a3;
  volatile s16 *p = (volatile s16 *) (base + 0x400F0);
  p[9] = a;
  p[8] = b;
  p = (volatile s16 *) (base + 0x40110);
  p[9] = a - c;
  p[8] = b;
  p = (volatile s16 *) (base + 0x40130);
  p[8] = b + c;
  p[9] = a;
  p = (volatile s16 *) (base + 0x40150);
  p[9] = a + c;
  p[8] = b;
  p = (volatile s16 *) (base + 0x40170);
  p[9] = a;
  p[8] = b - c;
  p = (volatile s16 *) (base + 0x40190);
  p[9] = a - c;
  p[8] = b;
}
