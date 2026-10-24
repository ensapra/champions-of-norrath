extern void func_0014B558(void *, void *, s32);
s32 func_00151C5C(s32);
s32 func_00151E24(s32, s32);
s32 func_00151DB8(s32, s32, s32, s32, s32);
s32 func_0014B41C(s32);
extern s32 D_0047FBF4;

void func_0014F5B0(u8 *a) {
    func_0014B558(a, a + 0x144, 3);
}

void func_0014F3F0(u8 *obj, s32 on) {
    if (on != 0) func_00151C5C((s32)(obj + 0x9D0));
}

void func_0014F288(u8 *a, s32 b) {
    if (a != 0 && func_0014B41C(D_0047FBF4) != 0) {
        func_00151E24((s32)(a + 0x9D0), b);
    }
}

s32 func_0014F200(u8 *a, s32 b, s32 c, s32 d) {
    if (a != 0 && func_0014B41C(D_0047FBF4) != 0) {
        return func_00151DB8((s32)(a + 0x9D0), b, (s32)a, c, d);
    }
    return 0;
}
