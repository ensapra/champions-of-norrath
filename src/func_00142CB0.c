/* identical to func_0011A848 (matched), with its names changed by decompdecomp */
typedef struct { u8 *data; s32 b; s32 c; s32 d; s32 cap; } Src;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; s32 c; } Vec;
void func_001428A0(Vec *, s32, s32);
void func_001429B8(Vec *, void *);
void func_00142AD0(Src *, s32);
Vec func_00142CB0(Src *s, s32 lo, s32 hi) {
    Vec v;
    s32 i;
    func_001428A0(&v, hi - lo + 1, s->cap);
    for (i = lo; i <= hi; i++) {
        u8 *p = s->data + i * 4;
        func_00142AD0(s, i);
        func_001429B8(&v, p);
    }
    return v;
}
