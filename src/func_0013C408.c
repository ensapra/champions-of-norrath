typedef struct { u8 *data; s32 b; s32 c; s32 d; s32 cap; } Src;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; s32 c; } Vec;
void func_0013BCE8(Vec *, s32, s32);
void ovl_ntgui2_func_0013BE30(Vec *, void *);
void func_0013C1D8(Src *, s32);
Vec func_0013C408(Src *s, s32 lo, s32 hi) {
    Vec v;
    s32 i;
    func_0013BCE8(&v, hi - lo + 1, s->cap);
    for (i = lo; i <= hi; i++) {
        u8 *p = s->data + i * 0x258;
        func_0013C1D8(s, i);
        ovl_ntgui2_func_0013BE30(&v, p);
    }
    return v;
}
