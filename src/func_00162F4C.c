extern u8 func_001CB5F8[];
void func_00171AE0(void *);
void func_001636A4(void *);

void func_00162ED0(u8 *arg0)
{
    u8 *p = func_001CB5F8;
    p = *(u8 **)(p + 0x50);
    ((void (*)(void))p)();
    func_00171AE0(arg0 + 0x970 + (*(s32 *)(arg0 + 0x4EC) ^ 1) * 0x1C60);
}

void func_00162F4C(void)
{
    u8 *p = func_001CB5F8;
    p = *(u8 **)(p + 0xA0);
    ((void (*)(void))p)();
}

void func_00162F70(void)
{
    u8 *p = func_001CB5F8;
    p = *(u8 **)(p + 0xEC);
    ((void (*)(void))p)();
}

void func_00162F94(u8 *arg0)
{
    u8 *p;
    s32 f = 0;
    if (*(s32 *)(arg0 + 0x538) != 0) {
        f = *(s32 *)(arg0 + 0x53C) != 0;
    }
    p = func_001CB5F8;
    p = *(u8 **)(p + 0xF0);
    ((void (*)(void))p)();
    if (f) {
        func_001636A4(arg0);
    }
}
