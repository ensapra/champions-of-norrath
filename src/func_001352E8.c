s32 D_0048385C;
s32 func_001352E8(void)
{
    s32 n = D_0048385C;
    s32 count = 0;
    s32 rem;
    u8 *base;
    s8 *p;

    if (n > 0) {
        rem = n;
        base = D_004E2280;
        p = (s8 *)(base + 0x44D0);
        do {
            if (p[5] == 0) {
                if (p[6] == 0)
                    count++;
            }
            p += 0x44E0;
        } while (--rem);
    }
    return count;
}
