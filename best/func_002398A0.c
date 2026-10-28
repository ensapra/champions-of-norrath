typedef struct { s32 x, y, z; } T12;
void func_00168A38(s32, T12 *, s16, void *, s32, T12 *, void *, void *, f32);
void *func_001441B8(s32);
void func_00149068(void *, T12 *, s32, s32, s32, s32, s32, s32, f32);
void func_002398A0(u8 *a) {
    T12 b;
    u8 sp10[0x20];
    T12 c;
    void *r;
    s32 h;
    b = *(T12 *)(a + 0x10);
    h = *(u16 *)(a + 0x38);
    h -= 0x4000;
    func_00168A38(*(s32 *)(*(u8 **)(a + 0x24) + 0xC), (c = *(T12 *)(a + 0x10), &c), h, a + 0x120, 0, &b, sp10, a + 0x10, 1.0f);
    r = func_001441B8(0x248);
    if (r) {
        u8 *p = *(u8 **)(a + 0x24);
        u8 *q = (u8 *)(*(s32 *)(a + 0x3C4) * 8) + (s32)p;
        func_00149068(r, &b, *(s32 *)p, *(s32 *)q, *(s32 *)(q + 8), 1, 0x4101, 0, 1.0f);
    }
    *(s32 *)(a + 0x3C4) = 0;
}
