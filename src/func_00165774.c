/* identical to func_00164964 (matched), with its names changed by decompdecomp */
extern void func_0014B558(void *, void *, s32);
void func_00165774(u8 *a) {
    func_0014B558(a, a + 0x130, 1);
}

void func_00164980(u8 *a) {
    if (*(s32 *)(a + 0x538) != 0) {
        void *p = *(void **)(a + 0x4C);
        p = *(void **)((u8 *)p + 0x110);
        ((void (*)(void *))p)(a);
    } else {
        *(s64 *)(a + 0x930) = *(s64 *)(a + 0x940);
        *(s64 *)(a + 0x938) = *(s64 *)(a + 0x948);
    }
}

void func_00164824(u8 *a, s32 *x, s32 *y, s32 v) {
    s32 *src = (s32 *)(a + 0xA10);
    u32 i;
    if (*(s32 *)(a + 0x944) != 0) {
        i = 0;
        do {
            s32 s = *src;
            x[i] = v;
            y[i] = s;
            src++;
            i++;
        } while (i < 4);
    } else {
        i = 0;
        do {
            s32 s = *src;
            y[i] = v;
            x[i] = s;
            src++;
            i++;
        } while (i < 4);
    }
}

extern u8 func_001C7AF8[];
void func_00164AB0(u8 *a) {
    u8 *p = func_001C7AF8;
    s64 v0, v1;
    p = *(u8 **)(p + 4);
    ((void (*)(void))p)();
    v0 = *(s64 *)(a + 0x940);
    v1 = *(s64 *)(a + 0x948);
    *(s32 *)(a + 0x98) = 2;
    *(s64 *)(a + 0x950) = v0;
    *(s64 *)(a + 0x958) = v1;
    *(s64 *)(a + 0x930) = v0;
    *(s64 *)(a + 0x938) = v1;
}
