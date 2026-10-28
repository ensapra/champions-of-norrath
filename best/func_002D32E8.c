extern s32 func_002DD640(void);
extern void func_002DD698(void);
s32 func_002D32E8(s32 *arg0) {
    s32 t = func_002DD640();
    s32 x = *(volatile s32 *)0x1000F520;
    s32 old;
    if (!(x & 0x10000)) {
        *(volatile s32 *)0x1000F590 = x | 0x10000;
    }
    (void)*(volatile s32 *)0x1000E000;
    old = *arg0;
    *arg0 = old & 0xFFFFFEFF;
    *(volatile s32 *)0x1000F590 = x;
    if (t) {
        func_002DD698();
    }
    return old;
}
