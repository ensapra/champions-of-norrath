/* identical to func_001A7300 (matched), with its names changed by decompdecomp */
int func_00308308(char *s, int e, char c) {
    char tmp[308];
    char *p, *t;
    p = s;
    *p++ = c;
    if (e < 0) {
        e = -e;
        *p++ = '-';
    } else {
        *p++ = '+';
    }
    t = tmp + 308;
    if (e > 9) {
        do {
            *--t = e % 10 + '0';
        } while ((e /= 10) > 9);
        *--t = e + '0';
        for (; t < tmp + 308; *p++ = *t++)
            ;
    } else {
        *p++ = '0';
        *p++ = e + '0';
    }
    return p - s;
}
