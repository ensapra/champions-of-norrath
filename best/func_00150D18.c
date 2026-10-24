#define F(p, off) (*(s32 *)((u8 *)(p) + (off)))
void func_00150D9C(u8 *p);

void func_00150D18(u8 *p, s32 a, s32 b, u8 *q) {
    void (*fn)(u8 *);
    void *f2;
    F(p, 0x814) = b;
    F(p, 0x810) = a;
    fn = *(void (**)(u8 *))(*(u8 **)(p + 0x4C) + 0x130);
    F(p, 0x818) = F(q, 0x18);
    F(p, 0x81C) = F(q, 0x1C);
    F(p, 0x820) = F(q, 0x20);
    F(p, 0x824) = F(q, 0x24);
    fn(p);
    f2 = *(void **)(p + 0x4C);
    f2 = *(void **)((u8 *)f2 + 0x12C);
    ((void (*)(u8 *))f2)(p);
    F(p, 0x98) = 2;
    func_00150D9C(p);
}
