s32 func_00189C48(s32 x)
{
    s32 i = 31;

    if (x >= 0) {
        i--;
        for (;;) {
            if (i <= 0) break;
            if ((x >> i) & 1) break;
            i--;
        }
    }
    return i + ((1 << i) < x);
}

s32 func_00189BC8(u32 psm, s32 w)
{
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
        w = (w + 63) / 64;
        return w + (w & 1);
    }
    return 0;
}
