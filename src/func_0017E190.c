typedef struct { u8 b0,b1,b2,b3,b4,day,month,year; } Date;
extern s8 jtbl_004C006C[];
void func_0017E190(Date *d) {
 s8 months[12];
 __builtin_memcpy(months, jtbl_004C006C+0xC6A4, 12);
 d->day--;
 if (d->year % 4 == 0) months[1]=29;
 if (d->day==0) {
  if (--d->month==0) {
   if (d->year==0) d->year=99; else d->year--;
   d->month=12;
  }
  d->day=months[d->month-1];
 }
}
