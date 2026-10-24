extern u8 D_010D12C0[];
extern u8 D_010D1340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001A42B8(void *, void *);
void func_00140ED8(void *s, void *t) {
    u8 *p = D_010D1340;
    func_001A42B8(&p[0x230], t);
    func_001A42B8(&p[0x330], s);
    func_001B08B0(D_010D12C0, 0x15, 1, p, 0x1000, p, 0x1000, 0, 0);
}
