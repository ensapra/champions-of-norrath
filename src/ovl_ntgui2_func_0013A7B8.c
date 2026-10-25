typedef struct { u8 *data; s32 b; s32 c; s32 d; s32 cap; } Src;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; s32 c; } Vec;
void func_0013A3A8(Vec *, s32, s32);
void func_0013A4D8(Vec *, void *);
Vec ovl_ntgui2_func_0013A7B8(Src *s, s32 lo, s32 hi) {
    Vec v;
    s32 i;
    func_0013A3A8(&v, hi - lo + 1, s->cap);
    for (i = lo; i <= hi; i++) {
        func_0013A4D8(&v, s->data + i * 0x14);
    }
    return v;
}
