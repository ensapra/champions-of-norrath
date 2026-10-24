typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + (r->size + 0x10)) r->cur = (u8 *)r + 0x10;
}

extern s32 D_010F64A0[];
extern u8 D_010F66A8[];
extern void *D_00480488;
s32 D_0048048C;
extern u8 jtbl_004C006C[];
void func_00197BC4(void);
void func_001A24AC(void *, void *, s32);
s32 DeleteSema(s32);

void func_00197320(void) {
    D_010F64A0[0] = 0;
}

void func_001972AC(void *src, s32 n) {
    void *f;
    if (n >= 10) {
        f = D_00480488;
        f = *(void **)((u8 *)f + 0xF4);
        ((void (*)(u8 *, s32))f)(jtbl_004C006C + 0xF104, n);
        return;
    }
    func_001A24AC(D_010F66A8, src, n * 4);
    D_010F64A0[0] = n;
    func_00197BC4();
}

void func_00197244(u8 *a0) {
    if (*(s32 *)(a0 + 0x40) != 0) {
        (*(void (**)(void))(a0 + 8))();
        *(s32 *)(a0 + 0x40) = 0;
        D_010F64A0[1]--;
    }
    if (D_0048048C != 0) {
        DeleteSema(D_0048048C);
        D_0048048C = 0;
    }
}
