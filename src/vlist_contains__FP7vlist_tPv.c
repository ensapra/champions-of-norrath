s32 get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(s32, void *, void *, u32);
void unpack__Q212RealmService15ResTouchSessionRQ34Base10ByteStream12ReadIterator(s16 *arg0, u8 *arg1);
s32 vlist_get_next__FP7vlist_tPv(void *arg0, s32 arg1);
s32 vlist_lookup__FPC7vlist_tPv(void *arg0, s32 arg1);
s32 vlist_contains__FP7vlist_tPv(void *arg0, s32 arg1)
{
  u8 *t = ((u8 *) arg1) + (*((s32 *) (((u8 *) arg0) + 0xC)));
  u8 *p = *((u8 **) arg0);
  while (p != 0)
  {
    if (p == t)
    {
      return 1;
    }
    p = *((u8 **) p);
  }

  return 0;
}
