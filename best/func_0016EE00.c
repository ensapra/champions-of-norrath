typedef struct { u8 b[32]; } B32;
extern B32 jtbl_004CBC10;

void func_0016EE00(u8 *a) {
    B32 tb;
    u32 i;
    u8 *dst;
    tb = jtbl_004CBC10;
    dst = a + *(s32 *)(a + 0x4EC) * 0x180 + 0x9E0;
    for (i = 0; i < 8; i++) {
        s32 t = ((s32 *)&tb)[i] * 4 + 0x930;
        dst[0] = a[t];
        dst[1] = a[t + 1];
        dst[2] = a[t + 2];
        dst[3] = *(s32 *)(a + 0x618) * a[t + 3] / 255;
        dst += 0x20;
    }
}
