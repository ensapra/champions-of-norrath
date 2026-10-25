typedef int u128 __attribute__((mode(TI)));
typedef struct { u64 lo, hi; } Q128;
typedef union { Q128 q; u128 v; } QU;

extern u8 jtbl_004C006C[];
void func_001912C0(void *, s32, s32, s32);
void func_001913B0(void *, u128);
void func_001913C8(void *);
void func_00191470(void *, s32, u64);
void func_00191C68(void *, s32, u32, s32, s32, s32);
u64 *func_00191D00(void *, s32);

void func_00191498(void *ctx, u16 a1, u8 a2, u16 a3, s32 addr, u32 count, s32 a6, s32 a7, u32 a8, s32 a9) {
    u32 n;
    u64 *p;
    QU t;
    u64 hi;

    t.q = *(Q128 *)(jtbl_004C006C + 0xEBFC);
    func_001912C0(ctx, 0, 0, 0);
    func_001913B0(ctx, t.v);
    func_00191470(ctx, 0x50, ((u64)a1 << 32) | ((u64)a3 << 48) | ((u64)a2 << 56));
    func_00191470(ctx, 0x51, ((u64)a6 << 32) | ((u64)a7 << 48));
    hi = (u64)a9 << 32;
    func_00191470(ctx, 0x52, (u64)a8 | hi);
    func_00191470(ctx, 0x53, 0);
    func_001913C8(ctx);
    while (count != 0) {
        n = count > 0x7FFF ? 0x7FFF : count;
        func_001912C0(ctx, 0, 0, 0);
        p = func_00191D00(ctx, 4);
        p[1] = 0;
        p[0] = (u64)n | (n == count ? 0x0800000000008000 : 0x0800000000000000);
        func_00191C68(ctx, addr, n, 0, 0, 0);
        count -= n;
        addr += n * 16;
    }
}
