extern u8 func_001D1C80[];
void iSignalSema(s32);
void func_0017EBF8(void)
{
    iSignalSema(*(s32 *)(func_001D1C80 + 0x488));
}

extern u8 D_010EE080[];

s32 func_0017EB08(s32 arg0, u32 arg1) {
    if (arg0 >= *(s32 *)D_010EE080) {
        return -0xB;
    }
    if (arg1 >= 3U) {
        return -0xC;
    }
    *(u32 *)(arg0 * 0x38 + *(s32 *)(D_010EE080 + 4) + 8) = arg1;
    return 0;
}

s32 func_0017EAB8(s32 arg0, u32 arg1) {
    if (arg0 >= *(s32 *)D_010EE080) {
        return -0xB;
    }
    if (arg1 >= 2U) {
        return -0xC;
    }
    *(u32 *)(arg0 * 0x38 + *(s32 *)(D_010EE080 + 4) + 4) = arg1;
    return 0;
}

s32 func_0017EA70(s32 arg0, s32 arg1, s32 arg2) {
    char *temp_3;

    if (arg1 >= 0) {
        if (arg2 < 0) {
            return -0xC;
        }
        temp_3 = (char *)(arg0 * 0x38 + *(s32 *)(D_010EE080 + 4));
        *(s32 *)(temp_3 + 0x1C) = arg2;
        *(s32 *)(temp_3 + 0x18) = arg1;
        *(s32 *)(temp_3 + 0x14) = 0;
        return 0;
    }
    return -0xB;
}
