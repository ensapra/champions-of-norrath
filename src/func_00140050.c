extern s32 D_010D1280[];
extern s32 D_010D1284[];
extern s32 D_010D1288[];
void func_0013FFF8(void);

void func_00140030(void) {
    D_010D1280[0] = 0;
    D_010D1284[0] = 0;
    D_010D1288[0] = 0;
}

void func_00140050(s32 a) {
    D_010D1288[0] = a;
}

void func_00140060(void) {
    func_0013FFF8();
    D_010D1280[0] = 3;
}

extern u8 jtbl_004C006C[];
extern u8 D_0110B000[];
s32 func_001B06E0(void *, u32, s32);

s32 func_001B46F0(void) {
    s32 i;
    u8 *p;
    while (1) {
        p = D_0110B000;
        if (func_001B06E0(p, 0x80000003, 0) < 0) return -1;
        if (*(s32 *)(p + 0x24) != 0) break;
        i = 0x100000;
        do { i--; } while (i != -1);
    }
    *(s32 *)(jtbl_004C006C + 0x3F48) = 0;
    return 0;
}
