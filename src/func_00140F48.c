extern u8 D_010D12C0[];
extern u8 D_010D12E8[];
extern u8 D_010D1340[];
extern s32 D_010D2340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001A42B8(void *, void *);
void func_00140F98(void) {
    func_001B08B0(D_010D12E8, 1, 1, D_010D2340, 0x1000, D_010D2340, 0x1000, 0, 0);
}
void func_00140F48(s32 a) {
    D_010D2340[0] = a;
    func_001B08B0(D_010D12E8, 0, 1, D_010D2340, 0x1000, D_010D2340, 0x1000, 0, 0);
}
void func_00140ED8(void *s, void *t) {
    func_001A42B8(D_010D1340 + 0x230, t);
    func_001A42B8(D_010D1340 + 0x330, s);
    func_001B08B0(D_010D12C0, 0x15, 1, D_010D1340, 0x1000, D_010D1340, 0x1000, 0, 0);
}
