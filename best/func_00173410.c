typedef int u128 __attribute__((mode(TI)));
typedef struct { s16 a; s16 pad; s16 b; } Sp;
void func_00172F48(void *, s16, s16, s16, s32, s32);
Sp *func_0018D7A8(s32, s32, s32);
s32 func_0018DD08(s16, s16, s16, s64, s64, s32);
void func_0018DDD0(void *, s16, s16, s16, s16, s16);
void func_0018DFB8(void *, s16, s32, s32, s16, s16, s32, s32, s32, s32, s32);

void func_00173410(char *p, s16 a1, s16 a2, s16 a3, s16 a4, s16 a5, s16 a6) {
    Sp * volatile spv;
    Sp *sp;
    s32 t, x, y, v;
    u64 m, f;
    u128 z = 0;
    spv = func_0018D7A8(a1 << 16, a4 << 16, a6 << 16);
    func_00172F48(p, a1, a2, a3, 0, 0);
    func_00172F48(p + 0x28, a1, a2, a3, 0, 0);
    func_0018DDD0(p + 0x60, a1, a2, a3, a4, a5);
    func_0018DDD0(p + 0x150, a1, a2, a3, a4, a5);
    if (a6 != 0) {
        x = 0x800 - (a2 >> 1);
        y = 0x800 - (a3 >> 1);
        func_0018DFB8(p + 0xE0, a4, x, y, a2, a3, 0, 0, 0, 0, 0);
        func_0018DFB8(p + 0x1D0, a4, x, y, a2, a3, 0, 0, 0, 0, 0);
    }
    f = 0xE;
    if (a6 == 0) f = 8;
    m = (u64)0x8000 << 45;
    *(u64 *)(p + 0x140) = ((((*(u64 *)(p + 0x140) & ~0x7FFFULL) | f | 0x8000) & (~0ULL >> 4)) | m);
    *(u64 *)(p + 0x50) = ((((*(u64 *)(p + 0x50) & ~0x7FFFULL) | f | 0x8000) & (~0ULL >> 4)) | m);
    *(u64 *)(p + 0x58) = (*(u64 *)(p + 0x58) & ~0xFULL) | 0xE;
    *(u128 *)(p + 0x50) = z;
    *(u128 *)(p + 0x140) = z;
    *(u64 *)(p + 0x148) = (*(u64 *)(p + 0x148) & ~0xFULL) | 0xE;
    t = func_0018DD08(a1, a2, a3, *(u64 *)(p + 0x58), *(u64 *)(p + 0x148), 0xE);
    sp = spv;
    if ((sp->a == 1 && sp->b == sp->a) || sp->a == 0) {
        v = t >> 1;
        *(u64 *)(p + 0x60) = (*(u64 *)(p + 0x60) & ~0x1FFULL) | ((s64)(s16)v & 0x1FF);
        *(u64 *)(p + 0x38) = (*(u64 *)(p + 0x38) & ~0x1FFULL) | ((u32)(s16)v & 0x1FF);
    }
}
