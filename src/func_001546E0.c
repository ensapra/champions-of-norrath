void func_0015175C(void *, s32);
void func_001546E0(void *p, s32 unused, s32 x, s32 y) {
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C((char *)p + 0x980, 1);
    *(s32 *)((char *)p + 0x924) = 0;
    *(s32 *)((char *)p + 0x928) = 0;
}
