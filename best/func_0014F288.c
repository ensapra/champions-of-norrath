s32 func_00151E24(s32, s32);
s32 func_00151DB8(s32, s32, s32, s32, s32);
s32 func_0014B41C(void *, s32);
extern s32 D_0047FBF4;

void func_0014F288(u8 *a, s32 b) {
    if (a != 0 && func_0014B41C(a, D_0047FBF4) != 0) {
        func_00151E24((s32)(a + 0x9D0), b);
    }
}

s32 func_0014F200(u8 *a, s32 b, s32 c, s32 d) {
    s32 r = 0;
    if (a != 0) {
        r = func_0014B41C(a, D_0047FBF4);
        if (r != 0) {
            return func_00151DB8((s32)(a + 0x9D0), b, (s32)a, c, d);
        }
    }
    return r;
}
