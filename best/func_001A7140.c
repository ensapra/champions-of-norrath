extern s64 func_00179948(s64, s64);
extern s32 func_001799B0(s64, s64);
extern char *func_001A84E8(void *, s64, s32, s32, s32 *, s32 *, char **);

char *func_001A7140(void *r, s64 value, s32 ndigits, s32 flags, char *sign, s32 *decpt, s32 ch, s32 *length) {
    s32 mode = 3;
    s32 dsgn;
    char *rve, *bp, *digits;

    if (ch != 'f') {
        if (ch == 'e' || ch == 'E') ndigits++;
        mode = 2;
    }
    if ((s32)(value >> 32) < 0) {
        value = func_00179948(0, value);
        *sign = '-';
    } else {
        *sign = 0;
    }
    digits = func_001A84E8(r, value, mode, ndigits, decpt, &dsgn, &rve);
    if ((ch != 'g' && ch != 'G') || (flags & 1)) {
        bp = digits + ndigits;
        if (ch == 'f') {
            if (*digits == '0' && func_001799B0(value, 0)) *decpt = 1 - ndigits;
            bp += *decpt;
        }
        if (func_001799B0(value, 0) == 0) rve = bp;
        while (rve < bp) *rve++ = '0';
    }
    *length = rve - digits;
    return digits;
}
