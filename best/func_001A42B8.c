char *func_001A42B8(char *d, char *s)
{
    char *p = d;
    char c;
    do { c = *s++; *p++ = c; } while (c);
    return d;
}
