extern s8 D_00444858[];
extern char D_0047B148[];
extern s32 func_002D92F8(char *, s32);
extern s32 func_002D9938(s32, s8 *, s32);
extern s32 func_002D9580(s32);
s8 *func_002D0FF8(void) {
    s32 fd;
    if (D_00444858[0] == 0) {
        fd = func_002D92F8(D_0047B148, 1);
        if (fd >= 0) {
            func_002D9938(fd, D_00444858, 0xE);
            func_002D9580(fd);
        }
    }
    return D_00444858;
}

typedef struct { u8 b0, b1, b2, b3, b4, day, month, year; } Date;
extern s8 D_0047B158[];
void func_002D1450(Date *d) {
    s8 months[12];
    __builtin_memcpy(months, D_0047B158, 12);
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

typedef struct { s32 chcr; s32 madr; s32 pad8; s32 padc; u32 qwc; } DmaChanX;
extern char D_0047B370[];
extern s32 func_002D70D0(char *, ...);
extern void func_002D32E8(DmaChanX *);
void func_002D2BC0(DmaChanX *d, u32 n, s32 timeout) {
    s32 i = timeout ? timeout : 0x1000000;
    while (d->qwc < n) {
        if (--i < 0) {
            func_002D70D0(D_0047B370);
            func_002D32E8(d);
        }
    }
}

typedef struct { s32 v[5]; } S20;
extern S20 D_008DD830;
S20 *func_002D2F88(S20 *p) {
    *p = D_008DD830;
    return p;
}
