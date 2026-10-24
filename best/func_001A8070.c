char *func_001A8070(char *tab, char *fmt)
{
    s32 c, n, v;
    char *ret;

    c = *fmt++;
    if (c == '^') {
        v = 1;
        c = *fmt++;
    } else {
        v = 0;
    }
    for (n = 0; n < 256; n++) {
        tab[n] = v;
    }
    if (c == 0) {
        ret = fmt - 1;
        goto done;
    }
    v = 1 - v;
    for (;;) {
        tab[c] = v;
again:
        n = *fmt++;
        switch (n) {
        case 0:
            ret = fmt - 1;
            goto done;
        case '-':
            n = *fmt;
            if (n == ']' || n < c) {
                c = '-';
                break;
            }
            fmt++;
            do {
                tab[++c] = v;
            } while (c < n);
            goto again;
        case ']':
            ret = fmt;
            goto done;
        default:
            c = n;
            break;
        }
    }
done:
    return ret;
}
