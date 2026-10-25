struct Vec { f32 x, y, z, w; Vec(f32 ax, f32 ay, f32 az) { x = ax; y = ay; z = az; } } __attribute__((aligned(16)));
extern "C" {
extern s32 D_004844A0;
s32 func_0017D348(s32, s32, s32);
s32 func_001757D8(s32, s32, Vec *, s32);
s32 func_0021C068(char *obj, char *s) {
    char *start = s;
    char c;
    s++;
    c = s[-1];
    obj[0x58] = c;
    if (c) {
        func_0017D348(D_004844A0, *(s16 *)(obj + 0x4C), 0);
        func_001757D8(D_004844A0, *(s16 *)(obj + 0x4C), &Vec(0.0f, 0.0f, -300.0f), 0);
        *(u32 *)(obj + 0xC) &= 0xFFEFFFFF;
    }
    return s - start;
}
}
