struct V3 { s32 x, y, z; };
struct It { void *a; void *cur; void *c; void *d; s32 pad[4]; };
extern "C" {
s32 func_00168A38(s32, V3, s16, void *, s32, void *, s32, f32);
void func_00194660(void *, void *, s32);
void func_00194700(void *, s32);
void func_00194750(void *);
void func_00239988(u8 *a, V3 b) {
    u8 st[0x20];
    V3 v;
    It it;
    s32 o = *(s32 *)(*(u8 **)(a + 0x24) + 0xC);
    s16 h = *(s16 *)(a + 0x38);
    v = *(V3 *)(a + 0x10);
    func_00168A38(o, v, h, a + 0x120, 0, st, 0, 1.0f);
    func_00194660(&it, a + 0x378, 0);
    while (it.cur) {
        u8 *q = *(u8 **)((u8 *)it.cur + 0xC);
        if (q) {
            u8 *vt = *(u8 **)(q + 0x14) + 0x10;
            ((void (*)(void *, void *, s32))*(void **)(vt + 4))(q + *(s16 *)vt, st, *(s16 *)(a + 0x38));
        }
        func_00194750(&it);
    }
    func_00194700(&it, 2);
}
}
