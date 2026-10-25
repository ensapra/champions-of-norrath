extern u32 D_0037DD00[32];
extern u32 D_0037DD80[][4];

void func_001711D0(u32 *src) {
    u32 buf[32];
    u32 *b;
    volatile u32 *t;
    s32 k;
    s32 i, j;

    D_0037DD00[0] = 0x21 - *src;
    k = *src++;
    b = buf;
    if (src[1] != -1) {
        t = &D_0037DD00[32 - k];
        do {
            *t = *src >> (32 - k++);
            *b++ = *src++ >> 2;
            *t -= *src++;
            t--;
        } while (src[1] != -1);
    }
    while (b - buf != 32) {
        *b++ = 0x7FFFFFFF;
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            D_0037DD80[i][3 - j] = buf[i * 4 + j];
        }
    }
}
