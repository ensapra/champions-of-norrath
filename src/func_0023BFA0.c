s32 D_00484538;
s32 func_0023BFA0(u8 *o) {
    s32 i;
    if (*(s32 *)(o + 0x46C) >= *(s32 *)(o + 0x328)) return 0;
    for (i = 0; i < D_00484538; i++) {
        if (*(s32 *)(o + 0x470 + i * 4) == 0) return 1;
    }
    return 0;
}
