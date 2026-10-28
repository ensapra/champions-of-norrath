/* identical to func_002DE210 (matched), with its names changed by decompdecomp */
s32 func_001B5C80(void); void func_001B5CD8(void); void func_001B6560(u32);
s32 func_001B6850(void) {
    s32 r = func_001B5C80();
    u32 mode = *(volatile u32 *)0x10001010;
    if ((mode & 0x80) == 0) {
        if (r != 0) func_001B5CD8();
        return 0;
    }
    func_001B6560(mode & 0xFFFFF37F);
    if (r != 0) func_001B5CD8();
    return 1;
}
