extern u8 D_010D12C0[];
extern u8 D_010D1340[];
void func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

void func_001409C8(void) {
    u8 *p = D_010D1340;
    func_001B08B0(D_010D12C0, 7, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140A10(s32 a) {
    u8 *p = D_010D1340;
    *(s32 *)(p + 0xC) = a;
    func_001B08B0(D_010D12C0, 8, 1, p, 0x1000, p, 0x1000, 0, 0);
}

void func_00140978(s32 a) {
    u8 *p = D_010D1340;
    if (a != 0) {
        *(s32 *)(p + 4) = a;
    }
    func_001B08B0(D_010D12C0, 5, 1, p, 0x1000, p, 0x1000, 0, 0);
}
