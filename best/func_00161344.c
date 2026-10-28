typedef struct __attribute__((packed)) { u32 w[8]; } Rec32;
typedef struct __attribute__((packed)) { u64 q; } U64;
extern u8 jtbl_004C006C[];
void func_00161344(u8 *p) {
    Rec32 tmp = *(Rec32 *)(jtbl_004C006C + 0xB8B4);
    u32 *ids = tmp.w;
    s32 i = *(s32 *)(p + 0x4EC);
    u8 *base = p + 0x910;
    u8 *dst = base + i * 0x19C0 + 0x4D0;
    u32 n = 0;
loop: {
        u8 *src = base + *ids++ * 4 + 0x3390;
        s32 d = 0xFF;
        n++;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = *(s32 *)(p + 0x618) * src[3] / d;
        *(U64 *)(dst + 0x120) = *(U64 *)dst;
        dst += 0x20;
    }
    if (n < 8) goto loop;
}
