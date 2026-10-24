extern u8 func_001CB5F8[];
extern u8 func_001CB4E8[];
void func_00171AE0(void *);
void func_0016E8E4(void *arg0);

#define I(p, o) (*(s32 *)((char *)(p) + (o)))

void func_0016E7F4(void)
{
    void *p = func_001CB5F8;
    p = *(void **)((u8 *)p + 0x50);
    ((void (*)(void))p)();
}

void func_0016E7AC(void *arg0)
{
    void *p = func_001CB5F8;
    p = *(void **)((u8 *)p + 0x50);
    ((void (*)(void))p)();
    func_00171AE0((char *)arg0 + (I(arg0, 0x4EC) ^ 1) * 0x180 + 0x970);
}

s32 func_0016E850(void *arg0, void *arg1, void *arg2)
{
    s32 ret;
    s32 v;
    void *p = func_001CB5F8;
    p = *(void **)((u8 *)p + 0xA0);
    ret = ((s32 (*)(void))p)();
    if (I(arg1, 0x5AC) != I(arg2, 0x5AC) || I(arg1, 0x5B0) != I(arg2, 0x5B0)) {
        func_0016E8E4(arg0);
        ret = 1;
    }
    v = I(arg1, 0xC74);
    if (v != I(arg2, 0xC74)) {
        I(arg0, 0xC74) = v;
        I(arg0, 0x98) = 2;
        ret = 1;
    }
    return ret;
}

void func_0016E8E4(void *arg0)
{
    void *p = func_001CB4E8 + 0xE8;
    s32 a = I(arg0, 0xC74);
    s32 b = I(arg0, 0x920);
    if (I(arg0, 0xC78) == 0) {
        (*(void (**)(void *, s32, s32))((u8 *)p + 0x8C))(arg0, b, a);
    } else {
        (*(void (**)(void *, s32, s32))((u8 *)p + 0x8C))(arg0, a, b);
    }
}
