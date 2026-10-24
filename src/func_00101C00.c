extern s32 D_00B0BAB0[];
extern s32 D_00B0BA10[];
extern s32 D_00B0BA14[];
extern u8 func_001B9FD8[];

s32 func_00101C00(void) {
    if (D_00B0BAB0[0] != 0) return 0;
    switch (*(u32 *)(func_001B9FD8 + 0x9E8)) {
    case 0:
        return (D_00B0BA10[0] & 0x10) ? 2 : 1;
    case 1:
        return (D_00B0BA14[0] & 0x44) ? 2 : 3;
    case 2:
        return (D_00B0BA14[0] & 0x44) ? 1 : 4;
    case 3:
        return (D_00B0BA14[0] & 0x44) ? 4 : 0;
    case 4:
        return (D_00B0BA14[0] & 0x44) ? 3 : 0;
    }
    return 0;
}
