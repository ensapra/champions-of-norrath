extern s32 func_0011B908(s32, s32);
extern void func_0011B968(s32);
extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern void func_00140B10(s32, s32, s32);
extern char func_0013F090[];
extern s32 D_001C6820[], D_001C6824[];
extern s32 D_010D1220[4], D_010D1224[4], D_010D122C[4];
s32 func_0013EF80(s32 *arg0) {
    s32 n, size, aligned, mem;
    if (func_001404D0() != 0) return 0;
    n = func_001404F0();
    D_001C6824[0] = n;
    if (n <= 0) {
        D_010D1224[0] = n;
        return 1;
    }
    if (D_001C6820[0] != 0) {
        func_0011B968(D_001C6820[0]);
        D_001C6820[0] = 0;
    }
    size = D_001C6824[0] * 0x21C;
    aligned = size & ~0xF;
    D_010D1220[0] = size;
    mem = func_0011B908(0x40, !(size & 0xF) ? aligned : aligned + 0x10);
    D_001C6820[0] = mem;
    if (mem == 0) {
        D_010D1224[0] = -2;
        D_001C6824[0] = 0;
        return 1;
    }
    func_00140B10(mem, D_001C6824[0], D_010D122C[0]);
    arg0[6] = (s32)func_0013F090;
    return 0;
}
