s32 func_001B5C80(void);
void func_001B5CD8(void);

void func_00192050(s32 *dst, s32 *src) {
    s32 r = func_001B5C80();
    s32 t[16];
    s32 i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            t[i * 4 + j] = src[j * 4 + i];
    for (i = 0; i < 16; i++)
        dst[i] = t[i];
    if (r != 0) {
        func_001B5CD8();
    }
}
