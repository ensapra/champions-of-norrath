typedef struct { s32 a, b, c, d; } Q4;
extern Q4 D_001E21B0;
extern u8 D_001E21C0[];
void func_001849E8(void *, void *, s32);

void func_00185318(s32 a0, s32 a1) {
    Q4 buf;
    buf.d = a1;
    buf.c = a0;
    buf.b = 0;
    buf.a = 0;
    D_001E21B0.c = (s32)D_001E21C0;
    D_001E21B0.b = 0;
    D_001E21B0.a = 0;
    D_001E21B0.d = 0;
    func_001849E8(&buf, &D_001E21B0, 0x10);
}
