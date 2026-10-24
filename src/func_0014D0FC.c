void func_0014D0FC(void *);

void func_0014D0B4(void *arg0, s32 *arg1, s32 *arg2) {
    s32 tmp;
    func_0014D0FC(arg0);
    tmp = *arg1 << 4;
    *arg1 = tmp;
    tmp = *arg2 << 4;
    *arg2 = tmp;
}

void func_0014D0FC(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0xA0);
    ((void (*)(void))p)();
}

void func_0014D138(void *obj) {
    void *p = *(void **)((u8 *)obj + 0x4C);
    p = *(void **)((u8 *)p + 0xA4);
    ((void (*)(void))p)();
}
