int func_001A444C(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}
