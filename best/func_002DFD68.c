s32 GetMemorySize_2();
void _InitTLB_2();
void func_002DFDA8();
void func_002DFD68(void) {
    volatile void *keep;
    if (GetMemorySize_2() == 0x02000000) {
        func_002DFDA8();
    } else {
        _InitTLB_2();
    }
    keep = (void *)func_002DFDA8;
    (void)keep;
}
