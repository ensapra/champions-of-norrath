extern u8 func_001CABD0[];
void func_0014D328(s32, s32);
void func_0014CF0C(s32, s32, s32);
void func_0014CA30(s32);
void func_0015175C(void *, s32);

void func_00165AB4(void *arg0, s32 arg1) {
    u8 *p = func_001CABD0;
    p = *(u8 **)(p + 0x4B0);
    ((void (*)(void *, s32))p)(arg0, arg1);
    func_0014D328(*(s32 *)((u8 *)arg0 + 0xA30), arg1);
}

void func_00165A7C(void *arg0) {
    s32 temp_2 = *(s32 *)((u8 *)arg0 + 0xA30);
    if (temp_2 != 0) {
        func_0014CF0C(temp_2, *(s32 *)((u8 *)arg0 + 0xA7C), *(s32 *)((u8 *)arg0 + 0xA80));
    }
}

void func_00165990(void *arg0) {
    u8 *p = func_001CABD0;
    p = *(u8 **)(p + 0x424);
    ((void (*)(void *))p)(arg0);
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0xA30));
}

void func_00165C14(void *p, s32 unused, s32 x, s32 y) {
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C((char *)p + 0x2884, 1);
}
