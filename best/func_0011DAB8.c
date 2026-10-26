#define G(p,off,type) (*(type *)((u8 *)(p) + (off)))

extern void *func_001441B8(s32);
extern void func_00194498(void *, void *);
extern void func_00163010(void *, void *);
extern u8 D_004488F0[];
extern u8 D_0044D498[];
extern u8 D_0044FEE8[];

void *func_0011DAB8(void *arg0) {
    void *dst = func_001441B8(0x468);
    if (dst != NULL) {
        G(dst, 0x48, void *) = (void *)D_0044D498;
        func_00194498(dst, arg0);
        func_00194498((u8 *)dst + 4, (u8 *)arg0 + 4);
        func_00194498((u8 *)dst + 8, (u8 *)arg0 + 8);
        G(dst, 0x0C, s32) = G(arg0, 0x0C, s32);
        G(dst, 0x10, u64) = G(arg0, 0x10, u64) ; /* note: unaligned? force via cast below */
    }
    return dst;
}
