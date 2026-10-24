extern s32 D_0047FC30, D_0047FC34;
void func_00150914(u8 *o) {
    s32 i = *(s32 *)(o + 0x4EC);
    u8 *e = o + i * 0xA0 + 0x640;
    *(s16 *)(e + 0x10) = (0x800 - (D_0047FC30 >> 1)) * 16 - *(u16 *)(o + 0x828);
    *(s16 *)(e + 0x14) = (0x800 - (D_0047FC34 >> 1)) * 16 - *(u16 *)(o + 0x82C);
    *(s64 *)(o + i * 0xA0 + 0x6A0) = *(s64 *)(e + 0x10);
}

extern s32 D_0047FC08;
void func_00150F74(void);
s32 func_0014B41C(void *, s32);
void func_0014D4C0(void *);
void func_0014D418(void *);
s64 func_00152618(void *);
s64 func_00150EA8(u8 *a, u8 *b) {
    func_00150F74();
    if (func_0014B41C(b, D_0047FC08) != 0) {
        void *p = *(void **)(a + 0x4C);
        p = *(void **)((u8 *)p + 0x128);
        ((void (*)(void *, void *))p)(a, b);
    } else {
        u8 *t = *(u8 **)(b + 0x4C);
        if (*(s32 *)(t + 0x6C) != 0) {
            void *f = *(void **)(t + 0xEC);
            if (f != 0)
                ((void (*)(void *, s32, s32, s32, s32))f)(b, *(s32 *)(a + 0x830), *(s32 *)(a + 0x834), *(s32 *)(a + 0x838), *(s32 *)(a + 0x83C));
        }
    }
    func_0014D4C0(b);
    func_0014D418(b);
    return func_00152618(a);
}
