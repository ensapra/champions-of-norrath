typedef int u128 __attribute__((mode(TI)));
typedef struct { s32 a, b, c, d; } E;
typedef union { u128 q; u64 w[2]; } U;
extern "C" {
void func_00191678(s32);
void func_001916D0(s32, s32);
void func_001917D8(s32, s32);
void func_00191860(s32, u128);
void func_00191878(s32);
void func_001919A0(s32, u64);
void ovl_ntgui2_func_00191830(s32);

void func_001867A0(s32 a, E *b, s64 c, s64 d) {
    u64 hc = c << 32;
    u64 hd = d << 32;
    U u;
    s32 t, v, w, x;
    func_001916D0(a, 0);
    func_001917D8(a, 0);
    u.w[0] = 0x4400000000008000ULL;
    u.w[1] = 0x4410;
    func_00191860(a, u.q);
    func_001919A0(a, 0x46);
    func_001919A0(a, hc >> 32);
    t = b->a; v = b->b; w = b->c; x = b->d;
    func_001919A0(a, (u64)(t + 0x6c00) | ((u64)(v + 0x7200) << 16) | hd);
    func_001919A0(a, (u64)(t + w + 0x6c00) | ((u64)(v + x + 0x7200) << 16) | hd);
    func_00191878(a);
    ovl_ntgui2_func_00191830(a);
    func_00191678(a);
}
}
