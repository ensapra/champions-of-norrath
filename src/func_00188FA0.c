extern void func_001AF0E0(const char *, char *);

void func_001AF6D8(const char *fmt, ...)
{
    char *ap = (char *)__builtin_next_arg(fmt) - (8 - __builtin_args_info(0)) * 8;
    func_001AF0E0(fmt, ap);
}

s32 func_00189C48(s32 x)
{
    s32 i = 31;

    if (x >= 0) {
        for (i = 30; i > 0; i--) {
            if ((x >> i) & 1) {
                break;
            }
        }
    }
    return i + ((1 << i) < x);
}

s32 func_00189BC8(u32 psm, s32 w)
{
    s32 n;

    switch (psm) {
    case 0x00:
    case 0x01:
    case 0x02:
    case 0x0A:
    case 0x1B:
    case 0x24:
    case 0x2C:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x3A:
        return (w + 63) / 64;
    case 0x13:
    case 0x14:
        n = (w + 63) / 64;
        return n + (n & 1);
    }
    return 0;
}

s32 func_00188FF0(s32, s32, s32);
s32 func_001892F8(s32, s32);

s32 func_00188FA0(s32 a, s32 b, s32 c)
{
    s32 r = func_00188FF0(a, b, c);
    func_001892F8(a, c);
    return r;
}
