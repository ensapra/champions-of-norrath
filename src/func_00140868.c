extern u8 D_010D12C0[];
extern u8 D_010D1340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_001A42B8(void *, void *);
void func_00140540(void *, void *, void *);

void func_001407E8(s32 a, s32 b, void *c, void *d) {
    u8 *p = D_010D1340;
    *(s32 *)(p + 4) = a;
    *(s32 *)(p + 0x10) = b;
    func_001A42B8(&p[0x30], c);
    func_00140540(&p[0x230], &p[0x20], d);
    func_001B08B0(D_010D12C0, 3, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140868(s32 a, s32 b, void *c, void *d, void *e) {
    u8 *p = D_010D1340;
    *(s32 *)(p + 4) = a;
    *(s32 *)(p + 0x10) = b;
    func_001A42B8(&p[0x30], c);
    func_001A42B8(&p[0x130], d);
    func_00140540(&p[0x230], &p[0x20], e);
    func_001B08B0(D_010D12C0, 0xC, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140900(s32 a, void *b, void *c) {
    u8 *p = D_010D1340;
    *(s32 *)(p + 0x10) = a;
    func_001A42B8(&p[0x30], b);
    func_00140540(&p[0x230], &p[0x20], c);
    func_001B08B0(D_010D12C0, 4, 1, p, 0x1000, p, 0x1000, 0, 0);
}
