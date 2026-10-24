typedef void (*NoRetFn)(void) __attribute__((noreturn));
extern NoRetFn D_004480D8[];
extern void *func_001449A8(s32);
extern void func_002FA010(void) __attribute__((noreturn));
extern void *func_003021B0(void *, s32, s32);
extern s32 func_003044FC(void *, s32);
extern s32 D_008EA998[];
extern s32 func_002F9EE8(void);

void func_002FA010(void) {
    D_004480D8[0]();
}

s32 pad_002FA028(void *a0, s32 a1, s32 a2) {
    if (func_003044FC(a0, a1) != 0) {
        a2 = 0;
    }
    return a2;
}

void *func_002FA060(void) {
    u8 *p = func_001449A8(0xF0);
    if (p == NULL) {
        func_002FA010();
    }
    func_003021B0(p, 0, 0xF0);
    *(u8 **)(p + 4) = p + 0xE0;
    return p;
}

void func_002F9FA8(void) {
    s32 *p = D_008EA998;
    if (*p == 0) {
        *p = 1;
        func_002F9EE8();
    }
}
