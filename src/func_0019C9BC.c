s32 func_00189C90(void *);
s32 func_0018ADA8(s32, s32);
void func_0019C9BC(s32 *out, u8 c) {
    u8 buf[2];
    void *h;
    buf[0] = c; h = buf; buf[1] = 0;
    *out = func_0018ADA8(func_00189C90(&h), 0);
}
u64 func_0019F848(u64 x) {
    u64 hi = (x >> 32) & 0x7FFFFFFF;
    u64 lo = x & 0xFFFFFFFFu;
    return (hi << 32) | lo;
}
extern void **D_004804D0;
void func_0019CA00(s32, s32, s32);
void func_0019C954(s32 a, u32 b, u32 c, u32 d) {
    u16 e = d;
    u8 bb = b, cc = c;
    if (e == 0x45) {
        ((void (*)(s32))((void **)D_004804D0)[0x6C / 4])(-1);
        return;
    }
    if (a == 0) func_0019CA00(bb, cc, e);
}
