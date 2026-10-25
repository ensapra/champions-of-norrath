typedef struct { u8 type; u8 a; u8 b; u8 pad; u32 c; u32 pad2[2]; } Msg19;
extern u8 D_003642D0[];
void func_0019C240(void *, void *, s32);

void func_0019BDBC(u8 a, u8 b, u16 c) {
    Msg19 m;
    u8 *base = D_003642D0;
    m.type = 0;
    m.a = a;
    m.b = b;
    m.c = c;
    func_0019C240(base + 0x2040, &m, 0x10);
}
