void func_002ECEE0(void*, void*);
void func_002ED4A0(void*, s64*);
void func_002ED700(s64*);

void func_002ED940(void *a0, s64 *a1) {
    s64 buf[10];
    s64 *p;
    s32 i;
    func_002ECEE0(a0, buf);
    func_002ED4A0(buf, a1);
    p = a1;
    for (i = 7; i >= 0; i--) {
        s64 x = *p;
        s64 y = x < 0 ? -x : x;
        if (y < 0x5666) {
            y >>= 1;
        } else if (y < 0x799A) {
            y -= 0x2B33;
        } else {
            y = (y - 0x6600) << 2;
        }
        if (x < 0) y = -y;
        *p++ = y;
    }
    func_002ED700(a1);
}
