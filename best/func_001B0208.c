void *func_001B01D8();
void *func_001B0208(void *p, s32 n) {
    s32 *r = p;
    void *ret;
    if (n < 0 || n >= r[8]) {
        ret = func_001B01D8();
    } else {
        ret = (u8 *)r[7] + (n << 6);
    }
    return ret;
}
