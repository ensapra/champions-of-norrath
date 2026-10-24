typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + (r->size + 0x10)) r->cur = (u8 *)r + 0x10;
}

void func_00197BC4(void);
extern u8 *D_00480488;
extern u8 D_010F64A0[];
extern u8 D_004CF1B8[];
extern u8 D_004CF1A0[];

void func_001978B8(s32 a0, s32 a1) {
    u8 *p = D_010F64A0;
    *(s32 *)(p + 0x230) = (*(s32 (**)(void))(D_00480488 + 0xE8))();
    *(s32 *)(p + 0x234) = (*(s32 (**)(s32))(D_00480488 + 0xE4))(a1);
    func_00197BC4();
}

void func_0019738C(u8 *a0) {
    if (*(s32 *)(a0 + 0x40) != 0) {
        *(s32 *)(a0 + 0xE4) = 2;
        (*(void (**)(u8 *))(a0 + 0x1C))(a0);
        (*(void (**)(u8 *))(D_00480488 + 0xF4))(D_004CF1B8);
    }
}

void func_0019732C(u8 *a0) {
    (*(void (**)(u8 *))(a0 + 0x38))(a0);
    *(s32 *)(a0 + 0xE4) = 0;
    (*(void (**)(u8 *))(a0 + 0x18))(a0);
    (*(void (**)(u8 *, s32))(a0 + 0x3C))(a0, 0);
    (*(void (**)(u8 *))(D_00480488 + 0xF4))(D_004CF1A0);
}
