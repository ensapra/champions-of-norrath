extern int func_001A42B8();
char *func_001A3EB8(char *s) {
    char *p = s;
    while (*p) p++;
    func_001A42B8();
    return s;
}
