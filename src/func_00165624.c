extern void D_001CB5F8();
extern u8 func_001C8098[];
void func_00165CCC(void)
{
    void (*fn)(void);
    char *p = (char *)D_001CB5F8;
    fn = *(void (**)(void))(p + 0x50);
    fn();
}
void func_0014D394(s32);
void func_0014D3B8(s32);
void func_00165324(void *);
void func_00165624(void *arg0) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xE00);
    ((void (*)(void *))p)(arg0);
    func_0014D394(*(s32 *)((u8 *)arg0 + 0x910));
}
void func_00165654(void *arg0) {
    u8 *p = func_001C8098;
    s64 a, b;
    p = *(u8 **)(p + 0xE04);
    ((void (*)(void *))p)(arg0);
    a = *(s64 *)((u8 *)arg0 + 0x1230);
    b = *(s64 *)((u8 *)arg0 + 0x1238);
    *(s64 *)((u8 *)arg0 + 0x1250) = a;
    *(s64 *)((u8 *)arg0 + 0x1258) = b;
    *(s64 *)((u8 *)arg0 + 0x1240) = a;
    *(s64 *)((u8 *)arg0 + 0x1248) = b;
    func_00165324(arg0);
    func_0014D3B8(*(s32 *)((u8 *)arg0 + 0x910));
    *(s32 *)((u8 *)arg0 + 0x98) = 2;
}
