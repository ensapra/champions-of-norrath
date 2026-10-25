extern s32 func_00170894(s32, s32, s32, s32);

void func_0015E2E8(u8 *arg0)
{
    s32 temp_10;
    s32 temp_8;
    u8 *temp_9;

    temp_9 = arg0 + 0x910;
    temp_10 = *(s32 *)(arg0 + 0xE74);
    temp_8 = *(s32 *)(temp_9 + 0x580) & 0x0FFFFFFF;
    *(s32 *)(arg0 + 0xA0 * *(s32 *)(arg0 + 0x4EC) + 0x990) =
        (s32)(((u32)(*(s32 *)(temp_9 + 0x568) * *(s32 *)(temp_9 + 0x56C) * temp_10) >> 4) | 0x30000000);
    *(s32 *)(arg0 + 0xA0 * *(s32 *)(arg0 + 0x4EC) + 0x994) = temp_8;
    *(s32 *)(arg0 + 0xA0 * *(s32 *)(arg0 + 0x4EC) + 0x998) = 0;
    *(s32 *)(arg0 + 0xA0 * *(s32 *)(arg0 + 0x4EC) + 0x99C) =
        func_00170894(0x50, 0,
            (s32)(((u32)(*(s32 *)(temp_9 + 0x568) * *(s32 *)(temp_9 + 0x56C) * *(s32 *)(arg0 + 0xE74))) >> 4) & 0xFFFF,
            0);
}
