typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P;
extern s32 func_001441B8(s32);
extern void func_00194300(void *);
extern void func_00298360(s32, s32, s32, s32);

s32 func_00298B00(s32 a, s32 b, s32 c, P *d)
{
    volatile P copy = *d;
    s32 head;
    s32 *hp = &head;
    s32 r;
    *hp = 0;
    r = func_001441B8(0x78);
    if (r)
        func_00298360(r, b, c, a);
    func_00194300(hp);
    return r;
}

extern s32 func_001119D8(void);

s32 func_00247288(u8 *src, s32 *dst)
{
    s32 offset = func_001119D8();
    s32 *base = dst;
    dst = (s32 *)((char *)dst + offset);
    *dst++ = *(s8 *)(src + 0x55);
    *dst++ = *(s32 *)(src + 0x450);
    *dst++ = *(s32 *)(src + 0x3C0);
    *dst++ = *(s32 *)(src + 0xD0);
    *(u8 *)dst = (*(u64 *)(src + 0xA0) & 0xC00000) != 0;
    dst = (s32 *)((char *)dst + 1);
    return (char *)dst - (char *)base;
}

s32 func_00247250(s32 a0, u8 *p, u8 *key)
{
    u8 *list;
    u8 *next;
    if (p == NULL)
        return 1;
    list = *(u8 **)(p + 0x3C0);
    if (list == NULL)
        return 0;
    next = *(u8 **)(list + 0xC);
    if (next == key)
        return 1;
    return func_00247250(a0, next, key);
}

s32 func_00113618(s32, void *, s32, f32);
s32 func_002FD2E0(s32, s32);
s32 func_00316358(void);

s64 func_002470C8(s32 a, u8 *b, s32 c, f32 d)
{
    if (b) {
        s32 x = (*(s32 (**)(void))(*(u8 **)(b + 0x48) + 4))();
        if (func_002FD2E0(x, func_00316358()) ^ 1)
            return func_00113618(a, b, c, d);
    }
}
