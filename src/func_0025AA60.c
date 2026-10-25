extern char D_0081E240[];
extern s32 D_00484F50;
s32 func_0026FC90(s32);
s32 func_002847A0(void);
u16 *func_001671F8(char *);

void func_0025AA60(s32 *arg0, s32 *arg1, char *arg2) {
    char *base = D_0081E240;
    char *p;
    s32 i;
    u16 *s;
    s32 n;
    p = base + 0x70;
    p = p + func_0026FC90(D_00484F50);
    p = p + func_002847A0();
    p = p + 0x1008;
    i = 0;
    for (;;) {
        p += 0xE;
        if (i == 0) break;
        i++;
        if (i < 4) { p += 0x5DB0; continue; }
        p = 0;
        break;
    }
    s = func_001671F8(base);
    n = 0;
    while (s[n] != 0) {
        arg2[n] = s[n];
        n++;
    }
    arg2[n] = s[n];
    *arg1 = base[0x6C];
    *arg0 = p[0x58];
}
