extern s32 D_004844A4;
extern u8 D_0034B6B1[];
extern char D_004857D8[];
f32 func_0015A540(s32);
s32 func_00305328(void *, void *);
void func_00143878(void *);
void func_00231160(u8 *p) {
    f32 *q;
    f32 sc, inv;
    s32 n = (s32)(func_0015A540((s32)p * 0x19660D + (D_004844A4 << 4) + 0x7EFE41) * 22.0f) + 0xA0;
    q = (f32 *)(p + 0x4C);
    sc = (f32)n;
    inv = 1.0f / (sc * sc);
    q[9] = sc;
    q[7] = sc;
    q[8] = inv;
    q[10] = inv;
    if (func_00305328(D_0034B6B1, D_004857D8))
        *(s32 *)(p + 0x70) = 0;
    if (*(s8 *)(p + 0x95) >= 0x1F) {
        func_00143878(p);
        *(s8 *)(p + 0x94) = 0;
    }
    *(u8 *)(p + 0x95) = *(u8 *)(p + 0x95) + 1;
}
