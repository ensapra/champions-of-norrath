extern s32 func_003044FC(s32, s32);
extern s32 D_0034B8A8[];
extern s32 D_0034B8B8[];
extern char D_00408600[];
extern s32 D_00422B48[];

s32 func_001ABD68(s32 arg0, s32 arg1) {
    volatile s32 saved = arg1;
    s32 i, j, total = 0;
    s32 start = arg1 ? 0 : 9;
    char *base = D_00408600 + arg0 * 0x5DB0;
    for (i = start; i < start + 9; i++) {
        for (j = 0; j < *(s32 *)(base + 0x3758); j++) {
            char *e = base + 0x2550 + j * 0x48;
            if (!func_003044FC(**(s32 **)(e + 8), D_00422B48[i]))
                total += *(s16 *)(e + 0xC);
        }
    }
    if (saved == 1)
        D_0034B8B8[arg0] = total;
    else
        D_0034B8A8[arg0] = total;
    return total;
}
