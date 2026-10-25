typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 count;
  s32 rpos;
  s32 sema;
  s32 unk14;
  s32 unk18;
  s32 size;
  u8 *buf;
} Ring19C5E4;
s32 WaitSema(s32);
s32 SignalSema(s32);
void func_0019C714(Ring19C5E4 *);
void func_001A24AC(void *, void *, s32);
s32 func_0019C5E4(Ring19C5E4 *r, u8 *dst, s32 len, s32 peek)
{
  int new_var;
  s32 size;
  s32 pos;
  s32 n;
  s32 rest;
  u8 *src;
  if (len == 0)
  {
    return 0;
  }
  WaitSema(*((volatile s32 *) (&r->sema)));
  size = r->size;
  n = *((volatile s32 *) (&r->count));
  if (n < len)
  {
    SignalSema(r->sema);
    return 0;
  }
  pos = *((volatile s32 *) (&r->rpos));
  n = size - pos;
  src = r->buf;
  src = src + pos;
  rest = len - n;
  if (n >= len)
  {
    func_001A24AC(dst, src, len);
    new_var = pos + len;
    if (peek)
    {
      goto done;
    }
    r->rpos = new_var % size;
  }
  else
  {
    func_001A24AC(dst, src, n);
    func_001A24AC(dst + n, r->buf, rest);
    if (peek)
    {
      goto done;
    }
    r->rpos = rest;
  }
  r->count -= len;
  done:
  func_0019C714(r);

  SignalSema(*((volatile s32 *) (&r->sema)));
  return 1;
}
