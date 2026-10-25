int func_001A4174(const unsigned char *a, const unsigned char *b) {
    while (*a && *a == *b) { a++; b++; }
    return *a - *b;
}
