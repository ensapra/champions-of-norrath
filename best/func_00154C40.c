extern s32 func_001C8098[];
void func_00152CB8(s32 a, u8 *s, f32 *out, f32 f);
s32 func_00155040(void *t, s32 ch);
#define S(o) (*(s32 *)((u8 *)t + (o)))

void func_00154C40(void *t) {
    f32 buf[4];
    s32 flag, w, x0, y0, avail, sum, n, ch, extra, x, y, fit;
    s32 l5d4, l5a0, l5a4, l8d4, l99c, l98c, l9a0, l994, l910, l998, l990, l914;
    u32 c;
    u8 *p;
    f32 f;

    flag = 0;
    if (*(u8 **)((u8 *)t + 0x924) != 0) {
    switch (S(0x9B4)) {
    case 0:
        f = *(f32 *)((u8 *)t + 0x9B8);
        break;
    case 1:
        flag = 1;
        f = *(f32 *)((u8 *)t + 0x9B8);
        break;
    default:
        f = *(f32 *)((u8 *)t + 0x9B8);
        break;
    }
    func_00152CB8(S(0x9AC), *(u8 **)((u8 *)t + 0x924), buf, f);
    x0 = (s32)buf[2];
    y0 = (s32)buf[0];
    w = (s32)(buf[3] - buf[2]);
    S(0x914) = (s32)(buf[1] - buf[0]);
    S(0x910) = w;
    if (flag) {
        if (S(0x9D0) == 0) {
            S(0x97C) = 0;
        } else {
            avail = S(0x5AC) - (S(0x8D4) << 1) - (S(0x99C) << 1) - S(0x98C) - S(0x990);
            if (!(avail < w)) {
                S(0x97C) = 0;
            } else {
                p = *(u8 **)((u8 *)t + 0x924);
                sum = 0;
                n = 0;
                avail -= S(0x930);
                while (*p) {
                    c = *p++;
                    ch = 0;
                    extra = 0;
                    if ((s8)c >= 0) {
                        ch = c;
                        n += 1;
                    } else {
                        if (c < 0xE0) {
                            ch = c & 0x1F;
                            n += 2;
                            extra = 1;
                        } else if (c < 0xF0) {
                            ch = c & 0xF;
                            n += 3;
                            extra = 2;
                        } else if (c < 0xF8) {
                            ch = c & 7;
                            n += 4;
                            extra = 3;
                        }
                        do {
                            c = *p++;
                            ch = (ch << 6) | (c & 0x3F);
                        } while (--extra);
                    }
                    sum += func_00155040(t, ch);
                    if (avail < sum) break;
                }
                S(0x92C) = n;
                S(0x97C) = 1;
            }
        }
    } else {
        S(0x97C) = 0;
    }
    fit = S(0x97C);
    if (fit == 0) S(0x92C) = 0x7FFFFFFF;
    switch (S(0x9B4)) {
    case 0:
        l5d4 = S(0x5D4); l5a0 = S(0x5A0); l5a4 = S(0x5A4); l8d4 = S(0x8D4);
        l99c = S(0x99C); l98c = S(0x98C); l9a0 = S(0x9A0); l994 = S(0x994);
        l910 = S(0x910); l998 = S(0x998); l990 = S(0x990); l914 = S(0x914);
        S(0x918) = (l5a0 + l5d4 + l8d4 + (l99c + l98c)) - x0;
        S(0x91C) = (l5a4 + l5d4 + l8d4 + (l9a0 + l994)) + y0;
        ((void (*)(void *, s32, s32))func_001C8098[0xD7C / 4])(t,
            l910 + ((l99c + l8d4) << 1) + (l990 + l98c),
            l914 + ((l9a0 + l8d4) << 1) + (l998 + l994));
        break;
    case 1:
        switch (S(0x9A4)) {
        case 1:
            if (fit == 0)
                x = S(0x5A0) + S(0x5D4) + ((S(0x5AC) - S(0x910)) >> 1);
            else
                x = S(0x5A0) + S(0x98C) + (S(0x8D4) + S(0x5D4)) + S(0x99C);
            break;
        case 2:
            if (fit == 0)
                x = S(0x5A0) + S(0x5D4) + S(0x5AC) - S(0x8D4) - S(0x99C) - S(0x990) - S(0x910);
            else
                x = S(0x5A0) + S(0x98C) + (S(0x8D4) + S(0x5D4)) + S(0x99C);
            break;
        case 0:
        default:
            x = S(0x5A0) + S(0x98C) + (S(0x8D4) + S(0x5D4)) + S(0x99C);
            break;
        }
        S(0x918) = x - x0;
        switch (S(0x9A8)) {
        case 3:
            y = S(0x5A4) + S(0x9A0) + (S(0x8D4) + S(0x5D4));
            break;
        case 4:
            y = S(0x5A4) + S(0x5D4) + S(0x5B0) - S(0x8D4) - S(0x9A0) - S(0x914);
            break;
        case 0:
        case 1:
        case 2:
        default:
            y = S(0x5A4) + S(0x5D4) + ((S(0x5B0) - S(0x914)) >> 1);
            break;
        }
        S(0x91C) = y + y0;
        break;
    }
    }
}
