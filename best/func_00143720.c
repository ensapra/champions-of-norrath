s32 D_00486890;
extern u8 D_004FC0C0[];
extern u8 D_0050A1C0[];

void func_00194390(void *, void *, void *, s32, s32);

void func_00143720(void *arg0) {
    float f0 = *(float *)((u8 *)arg0 + 0x10);
    float f1 = *(float *)((u8 *)arg0 + 0x14);
    s32 i0 = (s32)f0;
    s32 i1 = (s32)f1;
    s32 u = *(s32 *)((u8 *)arg0 + 0xC);
    s32 a = (i0 + 0x3C00) >> 8;
    s32 b = (i1 + 0x3C00) >> 8;
    void *var;
    if ((u & 2) == 0 && a >= 0 && a < 0x78 && b >= 0 && b < 0x78) {
        if (u & 0x800) {
            var = D_0050A1C0 + (b * 120 + a) * 4;
        } else {
            var = D_004FC0C0 + (b * 120 + a) * 4;
        }
    } else {
        var = &D_00486890;
    }
    func_00194390(var, (u8 *)arg0 + 8, arg0, b, u);
}
