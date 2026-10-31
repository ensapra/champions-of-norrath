#define U(o) { u32 a_ = off + (o); s64 *q_ = (s64 *)(base + a_); *q_ = (*q_ & ~0x40LL) | bit; }
void func_00167F44(u8 *arg0) {
    u32 base = arg0 + 0x910;
    u32 off = *(s32 *)(arg0 + 0x4EC) * 0x740;
    s64 bit = (s64)(*(s32 *)(base + 0x55D4) & 1) << 6;
    U(0x41E0) U(0x3F80) U(0x3D20) U(0x3360) U(0x3100) U(0x2EA0)
    U(0x24E0) U(0x2280) U(0x2020) U(0x1660) U(0x1400) U(0x11A0)
}
