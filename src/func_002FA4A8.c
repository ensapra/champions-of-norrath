extern int func_001449A8(void);
extern void func_002FA010(void) __attribute__((noreturn));
extern char *func_002FA0E0(void);
extern void func_002FF8C0(void) __attribute__((noreturn));

char *func_002FA4A8(unsigned int n) {
    char *base;
    unsigned int map, m, mask, idx, k;
    char *r;
    if (n == 0) func_002FF8C0();
    r = (char *)func_001449A8();
    if (r == 0) {
        base = func_002FA0E0();
        map = *(unsigned int *)(base + 0xD0);
        m = map | (map << 1);
        idx = (n + 15) >> 4;
        if (idx >= 13) func_002FA010();
        idx += (idx == 1);
        mask = (1 << idx) - 1;
        k = 12 - idx;
        if (k != 0) {
            do {
                if (((m >> k) & mask) == 0) {
                    mask >>= 1;
                    goto ok;
                }
                k--;
            } while (k != 0);
        }
        func_002FA010();
ok:
        *(unsigned int *)(base + 0xD0) = map | (mask << k);
        r = base + k * 16 + 0x10;
    }
    return r;
}
