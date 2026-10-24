extern u8 func_001C7508[];
extern u8 func_001C7330[];
extern void func_00150444(void *);
extern void func_00150AA4(void *);
extern s32 D_0047FC38;
extern s32 D_0047FC3C;

s32 func_00151628(u8 *g) {
    void *p = func_001C7508;
    p = *(void **)((u8 *)p + 4);
    ((void (*)(void))p)();
    func_00150444(g);
    *(s32 *)(g + 0xA8) = 1;
    return 1;
}

s32 func_00150050(u8 *g) {
    void *p;
    s32 a, b;
    func_00150AA4(g);
    p = func_001C7330;
    p = *(void **)((u8 *)p + 0x178);
    ((void (*)(void *))p)(g);
    a = *(s32 *)(g + 0x85C);
    b = *(s32 *)(g + 0x860);
    D_0047FC38 = a;
    D_0047FC3C = b;
    return b;
}
