extern u32 D_0037DD00[32];
extern u32 D_0037DD80[][4];

void func_001711D0(u32 *src) {
    u32 buf[32];
    u32 *b;
    volatile u32 *t;
    u32 *u;
    s32 k;
    s32 i, j;
    char *d;
    char *s;

    D_0037DD00[0] = 0x21 - *src;
    k = *src++;
    b = buf;
    if (src[1] != -1) {
        u = D_0037DD00 - k;
        t = u + 32;
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
    d = (char *)D_0037DD80;
    s = (char *)buf;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            *(u32 *)(d + 12 - j * 4) = *(u32 *)(s + j * 4);
        }
        d += 16;
        s += 16;
    }
}
