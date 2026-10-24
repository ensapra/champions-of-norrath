void func_00197BC4(void);
extern void *D_00480488;
extern u8 func_01000000[];
extern u8 jtbl_004C006C[];

void func_001978B8(s32 a0, s32 a1) {
    u8 *p = func_01000000 + 0xF64A0;
    void *f;
    f = D_00480488;
    f = *(void **)((u8 *)f + 0xE8);
    *(s32 *)(p + 0x230) = ((s32 (*)(void))f)();
    f = D_00480488;
    f = *(void **)((u8 *)f + 0xE4);
    *(s32 *)(p + 0x234) = ((s32 (*)(s32))f)(a1);
    func_00197BC4();
}

void func_0019738C(u8 *a0) {
    void *f;
    if (*(s32 *)(a0 + 0x40) != 0) {
        *(s32 *)(a0 + 0xE4) = 2;
        (*(void (**)(u8 *))(a0 + 0x1C))(a0);
        f = D_00480488;
        f = *(void **)((u8 *)f + 0xF4);
        ((void (*)(u8 *))f)(jtbl_004C006C + 0xF14C);
    }
}

void func_0019732C(u8 *a0) {
    void *f;
    (*(void (**)(u8 *))(a0 + 0x38))(a0);
    *(s32 *)(a0 + 0xE4) = 0;
    (*(void (**)(u8 *))(a0 + 0x18))(a0);
    f = *(void **)(a0 + 0x3C);
    ((void (*)(u8 *, s32))f)(a0, 0);
    f = D_00480488;
    f = *(void **)((u8 *)f + 0xF4);
    ((void (*)(u8 *))f)(jtbl_004C006C + 0xF134);
}
