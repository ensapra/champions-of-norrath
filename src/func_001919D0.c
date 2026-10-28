extern void func_00190E20(void *, s16 *);
static inline void Cpy(s16 *dst, s8 *src) {
    if (*src != 0) {
        do {
            u8 c = (u8)*src;
            src++;
            *dst = (s16)c;
            dst++;
        } while (*src != 0);
    }
    *dst = 0;
}
void func_001919D0(void *ctx, s8 *src) {
    s16 buf[256];
    Cpy(buf, src);
    func_00190E20(ctx, buf);
}
