inline u8 *inline_fn(u8 *arg0)
{
  return arg0 + 0x910;
}

void func_00154130(void *arg0)
{
  u8 *p = (u8 *) arg0;
  volatile u8 *base = inline_fn(p);
  u32 idx = *((s32 *) (p + 0x4ec));
  volatile u8 *out = (inline_fn(p) + (idx * 0x140)) + 0x400f0;
  out[0] = inline_fn(p)[0x40320];
  out[1] = base[0x40321];
  out[2] = base[0x40322];
  out[3] = ((*((volatile s32 *) (p + 0x618))) * base[0x40323]) / 255;
  out += 0x20;
  out[0] = base[0x40324];
  out[1] = base[0x40325];
  out[2] = base[0x40326];
  out[3] = ((*((volatile s32 *) (p + 0x618))) * base[0x40327]) / 255;
  out += 0x20;
  out[0] = base[0x40324];
  out[1] = base[0x40325];
  out[2] = base[0x40326];
  out[3] = ((*((volatile s32 *) (p + 0x618))) * base[0x40327]) / 255;
  out += 0x20;
  out[0] = base[0x40324];
  out[1] = base[0x40325];
  out[2] = base[0x40326];
  out[3] = ((*((volatile s32 *) (p + 0x618))) * base[0x40327]) / 255;
  out += 0x20;
  out[0] = base[0x40324];
  out[1] = base[0x40325];
  out[2] = base[0x40326];
  out[3] = ((*((volatile s32 *) (p + 0x618))) * base[0x40327]) / 255;
  out += 0x20;
  out[0] = base[0x40324];
  out[1] = base[0x40325];
  out[2] = inline_fn(p)[0x40326];
  out[3] = ((*((volatile s32 *) (p + 0x618))) * inline_fn(p)[0x40327]) / 255;
}
