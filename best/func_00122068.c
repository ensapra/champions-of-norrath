extern char D_004488F0[];
extern char D_0044ADB0[];
extern char D_0044D498[];
extern void *func_001441B8(s32);
extern void func_00163010(void);
extern void func_00194498(void *, void *);

void *func_00122068(char *src) {
    char *dst = func_001441B8(0x478);
    if (dst == 0) return 0;
    *(void **)(dst + 0x48) = D_0044D498;
    func_00194498(dst, src);
    func_00194498(dst + 4, src + 4);
    func_00194498(dst + 8, src + 8);
    *(s32 *)(dst + 0xC) = *(s32 *)(src + 0xC);
    *(void **)(dst + 0x48) = D_004488F0;
    *(s32 *)(dst + 0x50) = *(s32 *)(src + 0x50);
    *(u8 *)(dst + 0x54) = *(u8 *)(src + 0x54);
    *(u8 *)(dst + 0x55) = *(u8 *)(src + 0x55);
    func_00163010();
    *(void **)(dst + 0x48) = D_0044ADB0;
    return dst;
}
