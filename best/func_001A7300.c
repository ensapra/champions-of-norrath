int func_001A7300(char *s, int e, char c) {
    char tmp[0x134];
    char *p, *t, *end;
    *s = c;
    p = s + 1;
    if (e < 0) {
        *p = '-';
        e = -e;
    } else {
        *p = '+';
    }
    p = s + 2;
    t = tmp + 0x134;
    end = t;
    if (e >= 10) {
        while (e >= 10) {
            *--t = e % 10 + '0';
            e /= 10;
        }
        *--t = e + '0';
        while (t < end) *p++ = *t++;
    } else {
        *p++ = '0';
        *p++ = e + '0';
    }
    return p - s;
}
