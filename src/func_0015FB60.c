extern u8 func_001C8098[];

void func_0015F4E0(void) {
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0x56C);
    ((void (*)(void))p)();
}

s32 func_0014BA30(s32, s32);
void func_0014CBF4(s32, void *, s32);

typedef struct { s32 type; u64 val; char pad[0x3F0]; } Msg15F9F4;

s32 func_0015F9F4(char *a, s32 b, s32 c) {
    Msg15F9F4 msg;
    s32 r;
    void *p = func_001C8098;
    s32 x = b + 0x5C0;

    p = *(void **)((u8 *)p + 0x5C0);
    r = ((s32 (*)(void))p)();
    if (func_0014BA30(x, c + 0x5C0) == 0) {
        msg.type = 0x12;
        msg.val = (u32)x;
        r = 1;
        func_0014CBF4(*(s32 *)(a + 0x894), &msg, 1);
    }
    return r;
}

s32 func_0014D328(s32, s32);
s32 func_0014D370(s32, s32);

s32 func_0015FAD8(char *p, s32 b) {
    void *q = func_001C8098;
    q = *(void **)((u8 *)q + 0x5F8);
    ((void (*)(void))q)();
    func_0014D328(*(s32 *)(p + 0x89C), b);
    func_0014D328(*(s32 *)(p + 0x898), b);
    func_0014D328(*(s32 *)(p + 0x894), b);
    func_0014D328(*(s32 *)(p + 0x890), b);
    func_0014D328(*(s32 *)(p + 0x8A0), b);
    func_0014D328(*(s32 *)(p + 0x8A4), b);
    return func_0014D328(*(s32 *)(p + 0x8A8), b);
}

s32 func_0015FB60(char *p, s32 b) {
    void *q = func_001C8098;
    q = *(void **)((u8 *)q + 0x600);
    ((void (*)(void))q)();
    func_0014D370(*(s32 *)(p + 0x89C), b);
    func_0014D370(*(s32 *)(p + 0x898), b);
    func_0014D370(*(s32 *)(p + 0x894), b);
    func_0014D370(*(s32 *)(p + 0x890), b);
    func_0014D370(*(s32 *)(p + 0x8A0), b);
    func_0014D370(*(s32 *)(p + 0x8A4), b);
    return func_0014D370(*(s32 *)(p + 0x8A8), b);
}
