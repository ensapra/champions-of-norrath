void *D_00480488;

void func_001954BC(u8 *a) {
    void *d = D_00480488;
    u8 f = a[0x52];
    void *p;
    if (f & 0x80) {
        p = *(void **)((u8 *)d + 0x20);
        ((void (*)(s32, s32, s32))p)(0, 0, 0x8052);
        return;
    }
    p = *(void **)((u8 *)d + 0x20);
    ((void (*)(s32, s32, s32))p)(0, f & 1, 0x8052);
}
