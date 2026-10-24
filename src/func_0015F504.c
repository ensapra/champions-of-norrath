/* identical to func_00157C40 (matched), with its names changed by decompdecomp */
extern u8 func_001C8098[];
void func_0014CE60(s32, s32, s32, s32);

void func_0015F504(void) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0x570);
    ((void (*)(void))p)();
}

void func_00157C9C(void) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0x5B4);
    ((void (*)(void))p)();
}

void func_00157CC0(u8 *arg0) {
    s32 d = *(s32 *)(arg0 + 0x5D4);
    s32 w = *(s32 *)(arg0 + 0x880);
    s32 x;
    func_0014CE60(*(s32 *)(arg0 + 0x890),
                  *(s32 *)(arg0 + 0x5A0) + d - w,
                  *(s32 *)(arg0 + 0x5A4) + d - *(s32 *)(arg0 + 0x888), w);
    x = *(s32 *)(arg0 + 0x5A0);
    d = *(s32 *)(arg0 + 0x5D4);
    func_0014CE60(*(s32 *)(arg0 + 0x894), x + d,
                  *(s32 *)(arg0 + 0x5A4) + d - *(s32 *)(arg0 + 0x930) * 3 / 2, x);
}

void func_00157D9C(void) {
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0x5C0);
    ((void (*)(void))p)();
}
