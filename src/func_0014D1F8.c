void func_00152618(void *, s32);

void func_0014D240(u8 *a) {
    if (*(s32 *)(a + 0xA4) != 1) {
        *(s32 *)(a + 0xA4) = 1;
        func_00152618(a, 1);
    }
}

void func_0014D21C(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0xB8);
    ((void (*)(void))p)();
}

void func_0014D1F8(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0xB4);
    ((void (*)(void))p)();
}
