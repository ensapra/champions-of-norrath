extern u8 jtbl_004C006C[];

typedef struct { u8 b0,b1,b2,b3,b4,day,month,year; } DateE0D4;

void func_0017E0D4(DateE0D4 *d) {
    s8 months[12];
    __builtin_memcpy(months, jtbl_004C006C + 0xC6A4, 12);
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

extern s32 func_002D7908(s32);
extern s32 func_001AD610(void);
extern s32 func_002D84A8(void *, s32);
extern s32 func_002D8540(void *, s32, void *, void *, s32, s32, void *);
extern s32 func_002D8958(void *);
extern void func_002E0A98(void);
extern s32 D_008E6A80[], D_008E6AC0[], D_008E6AD8[];
void func_0017DB18(void) {
    func_002D7908(0);
    func_002D84A8(D_008E6AC0, func_001AD610());
    func_002D8540(D_008E6AD8,0x80000704,func_002E0A98,D_008E6A80,0,0,D_008E6AC0);
    func_002D8958(D_008E6AC0);
}

void ovl_ntgui2_worldSetDoorFlash__FP12_worldHeaderii(void *a, int b, int c) {
}

extern s32 func_001AD740(s32);
extern s32 func_001AD770(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_002E0DE0(void);
extern s32 D_00446070[];
extern s32 D_00446074[];
extern s32 D_008E6B40[];
extern s32 D_008E6BC0[];
extern s32 D_008E8100[];

s32 func_0017B068(s32 arg0) {
    s32 *p = D_008E6B40;
    s32 r;

    if (p[9] == 0) {
        return -100;
    }
    if (func_001AD770(D_00446074[0]) < 0) {
        return -200;
    }
    D_008E6BC0[0] = arg0;
    r = func_002D8270(p, 10, 1, D_008E6BC0, 0x30, D_008E8100, 4, func_002E0DE0, 0);
    if (r == 0) {
        D_00446070[0] = 10;
    } else {
        func_001AD740(D_00446074[0]);
    }
    return r;
}
