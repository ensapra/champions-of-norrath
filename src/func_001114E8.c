typedef struct { u8 *data; s32 b; s32 c; s32 d; s32 cap; } Src;
typedef struct __attribute__((packed, aligned(4))) { u64 a; u64 b; s32 c; } Vec;
void func_00110EA8(Vec *, s32, s32);
void func_00110FD0(Vec *, void *);
void func_001112F0(Src *, s32);
Vec func_001114E8(Src *s, s32 lo, s32 hi) {
    Vec v;
    s32 i;
    func_00110EA8(&v, hi - lo + 1, s->cap);
    for (i = lo; i <= hi; i++) {
        u8 *p = s->data + i * 0x4C4;
        func_001112F0(s, i);
        func_00110FD0(&v, p);
    }
    return v;
}
