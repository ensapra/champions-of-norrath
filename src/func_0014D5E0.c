extern void func_0014B558(void *, void *, s32);
void func_0014D5E0(u8 *a) {
    func_0014B558(a, a + 0x74, 0x2B);
}

void func_0014D49C(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0xF4);
    ((void (*)(void))p)();
}

void func_0014D3E8(u8 *a, s32 *x, s32 *y) {
    s32 hi = *(s32 *)(a + 0x5E4);
    s32 lo = *(s32 *)(a + 0x5E0);
    *y = hi;
    *x = lo;
}
