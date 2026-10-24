extern u8 D_004CD8C8[];
extern u8 D_001D2340[];
s32 func_001A2850(void *);

void func_00182858(void) {
    u8 *b;
    void (*fn)(s32, void *);
    func_001A2850(D_004CD8C8);
    b = D_001D2340;
    if (*(s32 *)(b + 0x5C60) > 0) {
        fn = *(void (**)(s32, void *))(b + 0x5C68);
        *(s32 *)(b + 0x5C60) = -1;
        if (fn) fn(0, b);
    }
}
