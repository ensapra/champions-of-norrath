typedef struct { u8 *data; s32 b; s32 c; s32 d; s32 cap; } Src;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; s32 c; } Vec;
void func_00139590(Vec *, s32, s32);
void func_001396D8(Vec *, void *);
void func_00139A50(Src *, s32);
Vec func_00139C80(Src *s, s32 lo, s32 hi) {
    Vec v;
    s32 i;
    func_00139590(&v, hi - lo + 1, s->cap);
    for (i = lo; i <= hi; i++) {
        u8 *p = s->data + i * 0x4B0;
        func_00139A50(s, i);
        func_001396D8(&v, p);
    }
    return v;
}
