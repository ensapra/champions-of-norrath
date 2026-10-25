extern s32 D_001C3C14[];
extern u8 *D_001C3C20[];

s32 func_0011E2D0(void) {
    s32 i = D_001C3C14[0];
    s32 r = 0;
    if (i != -1) {
        void (*fn)(void) = *(void (**)(void))(D_001C3C20[i] + 4);
        if (fn != 0)
            fn();
    }
    return r;
}
