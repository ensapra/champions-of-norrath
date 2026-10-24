typedef struct { u8 d[12]; } Days;
extern Days D_004CC710;
typedef struct { u8 pad0; u8 b1; u8 b2; u8 hour; u8 b4; u8 day; u8 month; u8 year; } Date;
void ovl_ntgui2_func_0017E0D8(Date *);
void func_0017E290(Date *, s32);
extern s32 D_001D2108[];
extern u8 D_010EE120[], D_010EE180[], D_010EE1C0[];
extern s32 D_010EE080[];
extern char D_004CC7B0[];
void func_0017EBF8(void);
s32 WaitSema(s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void (*)(void), s32);
void func_001AF710(char *, s32);

void func_0017E320(Date *t) {
    func_0017E290(t, -0x21C);
}

void func_0017E238(Date *p) {
    if (++p->hour == 24) {
        p->hour = 0;
        ovl_ntgui2_func_0017E0D8(p);
    }
}

void func_0017E190(Date *p) {
    Days days = D_004CC710;
    p->day--;
    if ((p->year & 3) == 0) days.d[1] = 29;
    if (p->day == 0) {
        p->month--;
        if (p->month == 0) {
            if (*(volatile u8 *)&p->year != 0) p->year--; else p->year = 99;
            p->month = 12;
        }
        p->day = days.d[p->month - 1];
    }
}

s32 func_0017E630(s32 arg0) {
    s32 r;
    if (D_001D2108[0] == -1) return -1;
    WaitSema(D_001D2108[0]);
    r = func_001B08B0(D_010EE120, 1, 1, D_010EE180, 0x10, D_010EE1C0, 0x90, func_0017EBF8, 0);
    if (r != 0) {
        func_001AF710(D_004CC7B0, r);
        return -2;
    }
    D_010EE080[0x90 / 4] = 1;
    D_010EE080[0x98 / 4] = arg0;
    return 0;
}
