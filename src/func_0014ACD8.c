typedef struct {
    s16 x;
    s16 y;
    u16 w;
    u16 h;
    u8 b8;
    u8 b9;
    u8 bA;
    u8 padB;
    u8 c;
    u8 d;
    u8 e;
    u8 padF;
} Item2;

void func_0014B320(void *);

void func_0014ACD8(u8 *a, s32 x, s32 y) {
    Item2 *p;
    if (*(s32 *)(a + 0x920) != 0) {
        *(s32 *)(a + 0x920) = 0;
        *(s32 *)(a + 0x928) = 0;
        func_0014B320(a);
    }
    if (*(s32 *)(a + 0x940) > *(s32 *)(a + 0x928)) {
        p = &(*(Item2 **)(a + 0x91C))[(*(s32 *)(a + 0x928))++];
        p->x = x;
        p->y = y;
        if (x < *(s32 *)(a + 0x5AC) >> 1) {
            p->w = 0;
        } else {
            p->w = *(s32 *)(a + 0x5AC);
        }
        if (y < *(s32 *)(a + 0x5B0) >> 1) {
            p->h = 0;
        } else {
            p->h = *(s32 *)(a + 0x5B0);
        }
        p->b8 = a[0x930];
        p->b9 = a[0x931];
        p->bA = a[0x932];
        {
            s32 t = a[0x930] << 3;
            if (t >= 0x100) t = 255;
            p->c = t;
        }
        {
            s32 t = a[0x931] << 3;
            if (t >= 0x100) t = 255;
            p->d = t;
        }
        {
            s32 t = a[0x932] << 3;
            if (t >= 0x100) t = 255;
            p->e = t;
        }
        *(s32 *)(a + 0x98) = 2;
        *(s32 *)(a + 0x924) = 2;
    }
}
