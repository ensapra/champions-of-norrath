typedef int u128 __attribute__((mode(TI)));
typedef struct { char p0[8]; u32 w8; u16 hC; u16 hE; char p10[3]; u8 b13; u16 h14; u16 h16; u64 q18; } Hdr;
typedef struct { char p0[0xC]; u16 hC; u16 pad; s32 w10; } Cfg;
extern Hdr *func_00188378(s32, s32);
extern void func_001A2850();
extern void func_001919F8(s32, s32, s32, s32, void *, s32, s32, s32, s32, s32);
extern void func_00186130(s32, void *, s32);
extern void func_001916D0(s32, s32, u64);
extern void func_00191BE0(s32, s32);
extern void func_00191860(s32, u128);
extern void func_001919A0(s32, s32);
extern void func_00191878(s32);
extern void func_00191C38(s32);
extern Cfg D_010F4480;
extern u32 D_004CDC54[];
extern u64 D_004CDC70[];
extern char D_004CDC30[];

void func_00185AA4(s32 ctx, s32 *a1) {
    Hdr *h = func_00188378(*a1, 0);
    u64 v[2] __attribute__((aligned(16)));
    u32 t;
    if (h == 0) {
        func_001A2850(D_004CDC30);
        return;
    }
    t = D_004CDC54[h->b13 & 0x3F];
    h->q18 = (h->q18 & (s64)(s32)0xFC0FFFFF) | ((u64)(t & 0x3F) << 20);
    func_001919F8(ctx, D_010F4480.hC, t & 0xFF, (h->h14 + 0x3F) >> 6, (char *)h + h->hC, h->w8 >> 4, 0, 0, h->h14, h->h16);
    if (h->hE) func_00186130(ctx, h, D_010F4480.w10);
    v[1] = D_004CDC70[1];
    v[0] = D_004CDC70[0];
    func_001916D0(ctx, 0, v[0]);
    func_00191BE0(ctx, 0);
    func_00191860(ctx, *(u128 *)v);
    func_001919A0(ctx, 0);
    func_001919A0(ctx, 0x3F);
    func_00191878(ctx);
    func_00191C38(ctx);
}
