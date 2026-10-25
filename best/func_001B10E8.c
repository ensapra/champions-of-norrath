extern char D_007CC5C8[];
extern char D_00427288[];
extern char D_004281AC[];
void func_001637A8(void *);
void func_001639E8(void *);
void func_001B01B0(s32, void *, s32);
s32 func_001B6E80(s32, s32, s32);

s64 func_001B10E8(s32 arg0, s32 arg1, s32 arg2) {
    char *p = D_007CC5C8 + arg0 * 0x108;
    s32 x;
    s32 o;
    s32 k30, k40;
    char *base;
    char *b4;
    char *b8;
    func_001637A8(p);
    func_001B01B0(arg0, p, 1);
    func_001639E8(p);
    x = arg1 * 0x140;
    o = arg1 * 0x74;
    k30 = o + 0x30;
    k40 = o + 0x40;
    base = D_00427288;
    b8 = base + 8;
    b4 = base + 4;
    *(s32 *)(base + o) = x;
    *(s32 *)(base + k40 + 0xC) = 0;
    *(s32 *)(D_004281AC + k30) = arg0;
    *(f32 *)(b4 + k40) = (f32)x + 100.0f;
    *(s32 *)(b4 + k30) = arg0;
    *(f32 *)(b8 + k40) = 200.0f;
    *(s32 *)(b8 + k30) = arg0;
    if (arg2 == 0) {
        return func_001B6E80(arg0, arg1, 0);
    }
}
