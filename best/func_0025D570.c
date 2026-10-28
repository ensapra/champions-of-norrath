extern char *D_00485C6C;
void func_0025D570(s32 a0, u8 *a1, s32 *a2, s32 *a3) {
    s32 y, x;
    char *g = D_00485C6C;
    for (y = 0; y < (*(s32 *)(g + 0x1804) - *(s32 *)(g + 0x1800)) * 6 + 0x18; y++) {
        for (x = 0; x < (*(s32 *)(g + 0x180C) - *(s32 *)(g + 0x1808)) * 6 + 0x18; x++) {
            u8 *p = a1 + y * 0xD8 + x;
            if (*p & 0x10) *p &= ~0x10;
        }
    }
}
