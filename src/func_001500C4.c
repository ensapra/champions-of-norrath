extern u8 func_001C7330[];
void func_00150444(void *);
void func_00150D88(void *);
#define I(p, o) (*(s32 *)((char *)(p) + (o)))
s32 func_001500C4(void *a, void *b, void *c) {
    s32 ret;
    s32 v;
    void *p = func_001C7330;
    p = *(void **)((u8 *)p + 0x1C8);
    ret = ((s32 (*)(void))p)();
    if (*(u64 *)((u8 *)b + 0x5a0) != *(u64 *)((u8 *)c + 0x5a0) ||
        I(b, 0x5AC) != I(c, 0x5AC) || I(b, 0x5B0) != I(c, 0x5B0)) {
        p = *(void **)((u8 *)a + 0x4c);
        p = *(void **)((u8 *)p + 0x130);
        ((void (*)(void *))p)(a);
        p = *(void **)((u8 *)a + 0x4c);
        p = *(void **)((u8 *)p + 0x12c);
        ((void (*)(void *))p)(a);
        func_00150D88(a);
        func_00150444(a);
        ret = 1;
    }
    v = I(b, 0x86C);
    if (v != I(c, 0x86C)) {
        I(a, 0x86C) = v;
        ret = 1;
    }
    return ret;
}
