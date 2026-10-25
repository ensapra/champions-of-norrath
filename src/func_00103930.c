typedef int u128 __attribute__((mode(TI)));
extern s32 D_0104CE80[];
extern u8 jtbl_004C006C[];
void func_001916D0(s32, s32);
void func_001917D8(s32, s32);
void func_00191860(s32, u128);
void func_001919C8(s32, s32, u64);
void func_00191878(s32);
void ovl_ntgui2_func_00191830(s32);
s32 func_103850(void);

s64 func_00103930(s32 x0, s32 x1, s32 y0, s32 y1, u32 c) {
    func_001916D0(D_0104CE80[0], 0);
    func_001917D8(D_0104CE80[0], 0);
    func_00191860(D_0104CE80[0], *(u128 *)(jtbl_004C006C + 0x5A54));
    func_001919C8(D_0104CE80[0], 0, 4);
    func_001919C8(D_0104CE80[0], 0x47, 0x30000);
    func_001919C8(D_0104CE80[0], 1, c);
    func_001919C8(D_0104CE80[0], 5, (u64)((x0 << 4) + 0x6C00) | ((u64)((y0 << 4) + 0x7900) << 16));
    func_001919C8(D_0104CE80[0], 5, (u64)((x1 << 4) + 0x6C00) | ((u64)((y0 << 4) + 0x7900) << 16));
    func_001919C8(D_0104CE80[0], 5, (u64)((x0 << 4) + 0x6C00) | ((u64)((y1 << 4) + 0x7900) << 16));
    func_001919C8(D_0104CE80[0], 5, (u64)((x1 << 4) + 0x6C00) | ((u64)((y1 << 4) + 0x7900) << 16));
    func_00191878(D_0104CE80[0]);
    ovl_ntgui2_func_00191830(D_0104CE80[0]);
    return func_103850();
}
