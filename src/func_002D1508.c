typedef struct 
{
  u8 b0;
  u8 b1;
  u8 b2;
  u8 b3;
  u8 b4;
  u8 day;
  u8 month;
  u8 year;
} Date;
extern s8 D_0047B158[];
void func_002D1508(Date *d)
{
  s8 months[12];
  __builtin_memcpy(months, D_0047B158, 12);
  *((s8 *) (&d->day)) = ((s8) d->day) - 1;
  if ((d->year % 4) == 0)
  {
    months[1] = 29;
  }
  if (d->day == 0)
  {
    *((s8 *) (&d->month)) = ((s8) d->month) - 1;
    if (d->month == 0)
    {
 do { d->year = (d->year) ? (d->year - 1) : (99); } while (0);
      d->month = 12;
    }
    d->day = months[d->month - 1];
  }
}
