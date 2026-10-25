struct Vec { f32 x, y, z, w; Vec(f32 ax, f32 ay, f32 az) { x = ax; y = ay; z = az; } } __attribute__((aligned(16)));
extern "C" {
extern s32 D_004844A0;
s32 func_001757D8(s32, s32, Vec *, s32);
s32 ovl_ntgui2_func_0017D410(s32, s32, f32);
void func_00226338(char *o) {
    s32 t = *(s32 *)(o + 0x178);
    if (t == 1) {
        func_001757D8(D_004844A0, *(s32 *)(o + 0x18C), &Vec(0.0f, 0.0f, -350.0f), 0);
        ovl_ntgui2_func_0017D410(D_004844A0, *(s32 *)(o + 0x18C), *(f32 *)(o + 0x198) - 350.0f);
    } else if (t == 2) {
        ovl_ntgui2_func_0017D410(D_004844A0, *(s32 *)(o + 0x18C), *(f32 *)(o + 0x198) + 256.0f);
    }
}
}
