extern u8 D_003642D0[];

s32 func_0019B7B0(void)
{
    u8 *base = D_003642D0;
    s32 n = 0;
    s32 i;
    if (*(volatile s32 *)(base + 0x309C) < *(volatile s32 *)(base + 0x3098)) {
        i = 0;
        do {
            i++;
            n++;
            if (i >= 10)
                break;
        } while (*(volatile s32 *)(base + 0x309C) + i < *(volatile s32 *)(base + 0x3098));
    }
    return n;
}
