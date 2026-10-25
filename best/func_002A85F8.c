typedef struct Vec3 { f32 x, y, z; } Vec3;
void func_001DBBB0(s32, void *, Vec3 *, s32, void *, u32, f32, f32, f32);
#define H(o) (*(volatile s16*)((char*)c+(o)))
void func_002A85F8(void *unused, u8 *c) {
    Vec3 tmp;
    Vec3 v;
    s16 x, y, w, h;
    y = 0x30; x = 0x2C; h = 0x29; w = 0xBE;
    H(0x8E) = y; H(0x90) = w; H(0x96) = y; H(0x98) = w;
    H(0x8C) = x; H(0x9A) = h; H(0x94) = x; H(0x92) = h;
    v = *(Vec3 *)(c + 0x10);
    func_001DBBB0(*(volatile s32 *)(c + 0x534), c + 0x120, &v, *(s16 *)(c + 0x38), c + 0x338, 0x5E808080, 1.0f, 1.0f, 0.0f);
}
