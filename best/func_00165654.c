extern u8 func_001C8098[];
void func_0014D3B8(s32);
void func_00165324(void *);
void func_00165654(u8 *arg0) {
    u8 *p = func_001C8098;
    s64 a, b;
    p = *(u8 **)(p + 0xE04);
    ((void (*)(void *))p)(arg0);
    a = *(s64 *)(arg0 + 0x1230);
    b = *(s64 *)(arg0 + 0x1238);
    *(s64 *)(arg0 + 0x1240) = a;
    *(s64 *)(arg0 + 0x1248) = b;
    *(s64 *)(arg0 + 0x1250) = a;
    *(s64 *)(arg0 + 0x1258) = b;
    func_00165324(arg0);
    func_0014D3B8(*(s32 *)(arg0 + 0x910));
    *(s32 *)(arg0 + 0x98) = 2;
}
