typedef struct { u8 b[32]; } B32;
extern B32 jtbl_004CBA50;
typedef struct { u8 r, g, b, a; } RGBA;

void func_001669B4(u8 *a) {
    B32 tb;
    u32 i;
    RGBA *dst;
    tb = jtbl_004CBA50;
    dst = (RGBA *)(a + *(s32 *)(a + 0x4EC) * 0xF80 + 0x9E0);
    for (i = 0; i < 8; i++) {
        RGBA *src = (RGBA *)(a + 0x930) + ((s32 *)&tb)[i];
        dst->r = src->r;
        dst->g = src->g;
        dst->b = src->b;
        dst->a = *(s32 *)(a + 0x618) * src->a / 255;
        dst = (RGBA *)((u8 *)dst + 0x20);
    }
}
