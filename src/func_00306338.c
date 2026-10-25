char *func_00306338(char *s, const char *delim, char **last) {
    int c, sc;
    char *tok;
    const char *spanp;
    if (s == 0 && (s = *last) == 0)
        return 0;
cont:
    c = *s++;
    for (spanp = delim; (sc = *spanp++) != 0;) {
        if (c == sc)
            goto cont;
    }
    if (c == 0) {
        *last = 0;
        return 0;
    }
    tok = s - 1;
    for (;;) {
        c = *s++;
        spanp = delim;
        do {
            if ((sc = *spanp++) == c) {
                if (c == 0)
                    s = 0;
                else
                    s[-1] = 0;
                *last = s;
                return tok;
            }
        } while (sc != 0);
    }
}
