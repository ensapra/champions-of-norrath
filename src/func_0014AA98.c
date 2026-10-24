#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0014B870(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    u8 *p = *(u8 **)(arg0 + 0x4C);
    p = *(u8 **)(p + 0x9C);
    ((void (*)(u8 *, s32 *, s32 *))p)(arg0, arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}

extern char func_001C8098[];
void func_0014AEDC(void *);
void func_00171AE0(s32);
void func_0014AA98(void *a) {
    u8 *p = (u8 *)func_001C8098;
    p = *(u8 **)(p + 0xD68);
    ((void (*)(void))p)();
    if (F(a, 0x924) != 0) {
        F(a, 0x924) = F(a, 0x924) - 1;
        func_0014AEDC(a);
    }
    if (F(a, 0x920) != 0 && F(a, 0x924) == 0) {
        F(a, 0x920) = 0;
        F(a, 0x928) = 0;
        F(a, 0x98) = 2;
    }
    func_00171AE0(F((char *)a + (F(a, 0x4EC) ^ 1) * 4, 0x910));
}

s32 func_0011B9A8(s32);
void func_0014A8C4(void *);
void func_0014B0F0(void *, s32, s32);
void func_0014A9D8(void *a) {
    s32 n;
    s32 m;
    F(a, 0x928) = 0;
    n = (F(a, 0x940) << 5) + 0x80;
    m = func_0011B9A8(n * 2);
    F(a, 0x910) = m;
    F(a, 0x914) = m + n;
    F(a, 0x91C) = func_0011B9A8(F(a, 0x940) * 16);
    F(a, 0x920) = 1;
    F(a, 0x930) = F(a, 0x8E0);
    F(a, 0x924) = 2;
    func_0014B0F0(a, F(a, 0x8E0), 2);
    func_0014A8C4(a);
    F(a, 0x4D0) = 0;
}

void func_0015175C(void *, s32, s32, s32);
void func_0014A9B0(void *p, s32 unused, s32 x, s32 y) {
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)((char *)p + 0x93C, 1);
}
