typedef struct { u8 b0, b1, b2, b3, b4, day, month, year; } Date;
extern s8 D_004CC710[];
void ovl_ntgui2_func_0017E0D8(Date *d) {
    s8 months[12];
    __builtin_memcpy(months, D_004CC710, 12);
    d->day++;
    if ((d->year % 4) == 0) {
        months[1] = 29;
    }
    if (months[d->month - 1] < d->day) {
        d->day = 1;
        if (++d->month == 13) {
            if (d->year == 99) {
                d->year = 0;
            } else {
                d->year++;
            }
            d->month = 1;
        }
    }
}
