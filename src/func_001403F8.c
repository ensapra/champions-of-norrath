extern void *func_001A2660(void *, s32, s32);
extern void func_001A42B8(void *, void *);
extern u8 D_010D4340[];
extern s32 D_010D2340[];

s32 func_001403F8(void) {
    u8 *a = D_010D4340;
    s32 *p = D_010D2340;
    func_001A2660(a, 0, 0x100);
    func_001A42B8(a, p + 12);
    return *p;
}
