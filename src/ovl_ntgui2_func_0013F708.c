extern s32 func_0011B908(s32, s32);
extern void func_0011B968(s32);
extern s32 func_001404D0(void);
extern s32 func_001404F0(void);
extern void func_001406F8(s32, s32, s32, s32);
extern char func_0013F830[];
extern char func_0013F8A8[];
extern s32 D_001C682C[], D_001C6838[];
extern s32 D_010D1244[4], D_010D1248[4], D_010D1250[4];
s32 ovl_ntgui2_func_0013F708(s32 *arg0) {
    s32 n, size, aligned, mem;
    if (func_001404D0() != 0) return 0;
    n = func_001404F0();
    D_001C6838[0] = n;
    if (n <= 0) {
        if (n == 0) {
            arg0[6] = (s32)func_0013F8A8;
            return n;
        }
        D_010D1248[0] = n;
        return 1;
    }
    if (D_001C682C[0] != 0) {
        func_0011B968(D_001C682C[0]);
        D_001C682C[0] = 0;
    }
    size = D_001C6838[0] * 0x20C;
    aligned = size & ~0xF;
    D_010D1244[0] = size;
    mem = func_0011B908(0x40, !(size & 0xF) ? aligned : aligned + 0x10);
    D_001C682C[0] = mem;
    if (mem == 0) {
        D_010D1248[0] = -2;
        D_001C6838[0] = 0;
        return 1;
    }
    func_001406F8(mem, D_001C6838[0], 1, D_010D1250[0]);
    arg0[6] = (s32)func_0013F830;
    return 0;
}
