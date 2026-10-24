s32 func_00189C48(s32 x)
{
    s32 i = 31;

    if (x >= 0) {
        while (--i > 0) {
            if ((x >> i) & 1) {
                break;
            }
        }
    }
    return i + ((1 << i) < x);
}
