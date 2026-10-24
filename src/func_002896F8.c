extern s32 func_00111B90(void);
extern void func_002870D8(void *, s32);

s32 func_002896F8(char *dst, char *src) {
    char *base = src;
    s32 a;
    src += func_00111B90();
    src += 4;
    a = *(s32 *)(src - 4);
    src += 4;
    *(s8 *)(dst + 0x3C0) = a;
    *(s32 *)(dst + 0x3C4) = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x3C8) = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x458) = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0xD0) = *(s32 *)(src - 4);
    func_002870D8(dst, 1);
    return src - base;
}
