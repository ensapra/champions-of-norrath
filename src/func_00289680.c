extern s32 func_001119D8(void);
extern s32 func_00111B90(void);
extern void func_002870D8(void *, s32);

s32 func_00289680(void *src, s32 *dst) {
    s32 offset = func_001119D8();
    s32 *base = dst;
    dst = (s32 *)((char *)dst + offset);
    *dst++ = *(s8 *)((char *)src + 0x3C0);
    *dst++ = *(s32 *)((char *)src + 0x3C4);
    *dst++ = *(s32 *)((char *)src + 0x3C8);
    *dst++ = *(s32 *)((char *)src + 0x458);
    *dst++ = *(s32 *)((char *)src + 0xD0);
    return (char *)dst - (char *)base;
}

s32 func_002896F8(void *dst, s32 *src) {
    s32 *base = src;
    s32 offset = func_00111B90();
    src = (s32 *)((char *)src + offset);
    src++;
    *(s8 *)((char *)dst + 0x3C0) = *src++;
    *(s32 *)((char *)dst + 0x3C4) = *src++;
    *(s32 *)((char *)dst + 0x3C8) = *src++;
    *(s32 *)((char *)dst + 0x458) = *src++;
    *(s32 *)((char *)dst + 0xD0) = *src++;
    func_002870D8(dst, 1);
    return (char *)src - (char *)base;
}
