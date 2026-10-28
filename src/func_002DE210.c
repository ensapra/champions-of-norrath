s32 func_002DD640(void); void func_002DD698(void); void func_002DDF20(u32);
s32 func_002DE210(void) {
    s32 r = func_002DD640();
    u32 mode = *(volatile u32 *)0x10001010;
    if ((mode & 0x80) == 0) {
        if (r != 0) func_002DD698();
        return 0;
    }
    func_002DDF20(mode & 0xFFFFF37F);
    if (r != 0) func_002DD698();
    return 1;
}
