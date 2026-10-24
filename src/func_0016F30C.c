extern u8 func_001C98F0[];
void func_0016F828(s32);
void func_0016F754(s32);
void func_0016F7D8(s32);
void ovl_ntgui2_func_0016F8B8(void);
void func_0014CA30(s32);
void func_0015175C(void *, s32, s32, s32);

void func_0016F30C(s32 arg0)
{
    void *p = func_001C98F0;
    p = *(void **)((u8 *)p + 0x540);
    ((void (*)(void))p)();
    func_0016F828(arg0);
    func_0016F754(arg0);
    func_0016F7D8(arg0);
}

void func_0016F2D8(void *arg0)
{
    void *p;
    ovl_ntgui2_func_0016F8B8();
    p = func_001C98F0;
    p = *(void **)((u8 *)p + 0x538);
    ((void (*)(void *))p)(arg0);
}

void func_0016F298(void *arg0)
{
    void *p;
    ovl_ntgui2_func_0016F8B8();
    p = func_001C98F0;
    p = *(void **)((u8 *)p + 0x534);
    ((void (*)(void *))p)(arg0);
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x980));
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x984));
}

void func_0016EF54(void *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)((char *)p + 0x9B0, 2);
}
