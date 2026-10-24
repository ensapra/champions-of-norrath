void *D_00480488;

void func_0019550C(u8 *a) {
    u8 f = a[0x52];
    void *p;
    if (f & 0x80) {
        p = *(void **)((u8 *)D_00480488 + 0x20);
        ((void (*)(s32, s32, s32))p)(0, 0, 0x8051);
        return;
    }
    p = *(void **)((u8 *)D_00480488 + 0x20);
    ((void (*)(s32, s32, s32))p)(0, f & 1, 0x8051);
}

void func_00194EF8(s32 a, s32 i, u8 v) {
    if (i < 4) *(u8 *)(i + a + 0x80) = v;
}
