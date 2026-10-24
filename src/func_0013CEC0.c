extern char func_01000000[];
extern void func_0011B968(s32);
extern void func_0013DA98(void *, void *, void *);
extern s32 func_00140020(void *);
extern s32 func_001404D0(void);
extern void func_001403B8(void);
extern void func_00140CD8(void);
extern void func_0013D028(void);

void func_0013CEF0(void) {
    func_0011B968(*(s32 *)(func_01000000 + 0xCE610));
    func_0011B968(*(s32 *)(func_01000000 + 0xCE640));
}

s32 func_0013CEC0(u8 *a) {
    void (*f)(s32) = *(void (**)(s32))(a + 8);
    if (f != 0)
        f(*(s32 *)(func_01000000 + 0xCE5F8));
    return 1;
}

void func_0013CF20(void) {
    *(s32 *)(func_01000000 + 0xCE6C0) = 0;
    *(s32 *)(func_01000000 + 0xCE6C4) = 0;
    *(s32 *)(func_01000000 + 0xCE6C8) = 0;
    *(s32 *)(func_01000000 + 0xCE6CC) = 0;
    func_0013DA98(func_01000000 + 0xCE700, 0, 0);
}

s32 func_0013CFA8(u8 *a) {
    s32 *p;
    s32 n;
    if (func_00140020(a) != 0) return 0;
    if (func_001404D0() != 0) return 0;
    p = (s32 *)(func_01000000 + 0xCE6CC);
    n = *p;
    if (n > 0) {
        *p = n - 1;
        return 0;
    }
    func_001403B8();
    func_00140CD8();
    *(void **)(a + 0x18) = (void *)func_0013D028;
    return 0;
}
