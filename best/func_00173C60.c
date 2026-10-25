typedef int u128 __attribute__((mode(TI)));
typedef struct {
    s32 f0, f4, f8, fC;
    u64 f10, f18;
    u64 f20, f28, f30;
} Obj;
void func_0018E850(void *, s32, s16, s16, s16, s16, s16, s32, s32, s32, s32, s32);
void func_0018E960(void *, s32, s32, u64);

void func_00173C60(Obj *o, s32 a1, s16 a2, s16 a3, s16 a4, s16 a5) {
    s32 i = 1, k;
    s32 w = 0, h = 0;
    u64 m = -1ULL >> 4;
    if (i < a3) {
        k = 1;
        do { k <<= 1; w++; } while (k < a3);
    }
    while (i < a4) { h++; i <<= 1; }
    func_0018E850((char *)o + 0x70, 1, a1 << 5, a3 / 64, a2, w, h, 0, 0, 0, 0, 1);
    *(u128 *)&o->f10 = 0;
    o->f18 = (o->f18 & ~0xFULL) | 0xE;
    o->f10 = (((o->f10 & ~0x7FFFULL) | 9 | 0x8000) & m) | (0x8000ULL << 45);
    func_0018E960((char *)o + 0x30, 0, 0x8000, m);
    o->f30 = 0x44;
    if (a5 != 0) o->f20 = ((u64)(a5 & 3) << 17) | 0x10000;
    else o->f20 = 0x20000;
    o->f0 = 0x6000000A;
    o->f28 = 0x47;
    o->fC = 0x5000000A;
    o->f8 = 0x11000000;
    o->f4 = 0;
}
