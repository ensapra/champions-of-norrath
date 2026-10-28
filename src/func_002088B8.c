s32 func_00111B90(void);
s32 func_002088B8(char *a, char *b) {
    char *s = b;
    s32 v;
    b += func_00111B90();
    b += 4;
    v = *(s32 *)(b - 4);
    *(u8 *)(a + 0x9C) = 0;
    *(s32 *)(a + 0xD0) = v;
    switch (v) {
    case 1: *(u8 *)(a + 0x9C) = 2; break;
    case 2: *(u8 *)(a + 0x9C) = 4; break;
    }
    return b - s;
}
