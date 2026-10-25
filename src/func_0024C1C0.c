typedef struct __attribute__((packed, aligned(4))) { s32 a, b, c, d; } L4;
extern f32 D_0042DE48[];
extern s32 D_00485938;
extern L4 D_007DD880;
extern char D_007DD7E0[], D_007DD840[];
s32 func_0024ADB8(s32, ...);
void func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_0024C1C0(void) {
    L4 l;
    l.a = D_00485938;
    l.b = D_0042DE48[0] * 256.0f;
    l.c = D_0042DE48[1] * 256.0f;
    if (!(func_0024ADB8(2) & 0x80)) {
        l.d = 0x100;
    } else {
        l.d = D_0042DE48[2] * 256.0f;
    }
    D_007DD880 = l;
    func_002D8270(D_007DD7E0, 0x80, 0, &D_007DD880, 0x10, D_007DD840, 0x40, 0, 0);
}
