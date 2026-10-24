typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
s32 func_001441B8(s32);
void func_002BC788(s32, void *, s32, s32, s32, s32);
s32 func_002BE0C8(s32 a0, s32 a1, s32 a2, P12 *a3, s16 a4) {
    P12 copy = *a3;
    s32 x = func_001441B8(0xD0);
    if (x) func_002BC788(x, &copy, a4, a1, a2, a0);
    return 0;
}
