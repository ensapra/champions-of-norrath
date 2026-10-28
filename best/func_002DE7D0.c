extern s32 func_002DD640(void);
extern void func_002DD698(void);
extern u64 D_004459A8;

u64 func_002DE7D0(void) {
    s32 r;
    u64 cnt, hi, v;
    u32 mode, sh;
    r = func_002DD640();
    cnt = *(volatile u32 *)0x10001000;
    mode = *(volatile u32 *)0x10001010;
    hi = D_004459A8;
    if (mode & 0x800) {
        cnt = *(volatile u32 *)0x10001000;
        hi++;
    }
    mode &= 3;
    sh = (mode == 0) ? 0 : 2;
    v = (cnt | (hi << 16)) << (sh << mode);
    if (r) func_002DD698();
    return v;
}
