s32 GetMemorySize();
s16 _InitTLB();
s16 func_001B83E8();
s32 func_001B83A8(void) {
    if (GetMemorySize() == 0x02000000) {
        return func_001B83E8();
    }
    return _InitTLB();
}
