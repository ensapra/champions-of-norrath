typedef struct { u64 lo:6; u64 f:1; u64 hi:57; } BF;
static inline void SetF(u8 *q, s32 v) {
    ((BF *)(q + 0x710))->f = v;
    ((BF *)(q + 0x3D0))->f = v;
    ((BF *)(q + 0x230))->f = v;
}
void func_00167ED4(u8 *p) {
    u8 *q = p + *(s32 *)(p + 0x4EC) * 0x8C0 + 0x920;
    s32 v = *(s32 *)(p + 0x5DC);
    ((BF *)(q + 0x710))->f = v;
    SetF(q, v);
}
