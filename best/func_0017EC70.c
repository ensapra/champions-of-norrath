extern u8 func_001D1C80[];
void iSignalSema(s32);
void func_0017EBF8(void)
{
    iSignalSema(*(s32 *)(func_001D1C80 + 0x488));
}

extern u8 D_010EE080[];
s32 func_0017EC08(void) {
    u8 *b = D_010EE080;
    s32 st = *(s32 *)(b + 0x90);
    s32 r = 0;
    if ((u32)(st - 1) < 5) {
        r = ((s32 (*)(void))*(void **)(func_001D1C80 + 0x470 + st * 4))();
    }
    *(s32 *)(b + 0x90) = 0;
    *(s32 *)(b + 0x98) = 0;
    return r;
}

extern s32 *D_010EE118[];
extern u8 D_010EE1C0[];
s32 func_0017EC70(void) {
    s32 *p = D_010EE118[0];
    u8 *s = D_010EE1C0;
    u32 c = s[0];
    s32 i = 0;
    p[0] = c;
    p[1] = s[1];
    if (c != 0) {
        u8 *d = (u8 *)(p + 2);
        do {
            d[i] = s[2 + i];
            i++;
        } while (i < p[0]);
    }
    return 0;
}

extern u8 D_010EE120[];
s32 WaitSema(s32);
s32 SignalSema(s32);
s32 func_001B0AA8(void *);
s32 func_0017EB58(s32 mode, s32 *out) {
    s32 r = -1;
    if (*(s32 *)(func_001D1C80 + 0x488) != -1) {
        switch (mode) {
        case 0:
            WaitSema(*(s32 *)(func_001D1C80 + 0x488));
            *out = func_0017EC08();
            SignalSema(*(s32 *)(func_001D1C80 + 0x488));
            r = 0;
            break;
        case 1:
            if (func_001B0AA8(D_010EE120) == 0) {
                *out = func_0017EC08();
                r = 0;
            } else {
                r = 1;
            }
            break;
        default:
            r = -11;
            break;
        }
    }
    return r;
}
