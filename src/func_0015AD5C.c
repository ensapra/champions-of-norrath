s32 func_0015AD5C(u8 *p, s32 i)
{
    s32 off = i * 9;
    off <<= 2;
    off += *(s32 *)(p + 0xB80);
    if (*(s32 *)(off + 4) & 2)
        return 1;
    return 0;
}
