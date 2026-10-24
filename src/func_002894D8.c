extern s32 func_001119D8(void);
extern s32 func_00111B90(void);
extern void func_002853A8(void *, s32);

s32 func_002894D8(void *src, s32 *dst) {
    s32 offset = func_001119D8();
    s32 *base = dst;
    dst = (s32 *)((char *)dst + offset);
    *dst++ = *(s8 *)((char *)src + 0x3C0);
    *dst++ = *(s32 *)((char *)src + 0x3C4);
    *dst++ = *(s32 *)((char *)src + 0x450);
    *dst++ = *(s32 *)((char *)src + 0xD0);
    return (char *)dst - (char *)base;
}

extern s32 func_0015A198(f32, f32);
typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;
typedef struct {
    u8 pad0[0x10];
    f32 f10;
    f32 f14;
    u8 pad1[0x20];
    s16 unk38;
    u8 pad2[0xE];
    void *unk48;
    u8 pad3[0x1F0];
    s16 unk23C;
    u8 pad4[0x212];
    s32 unk450;
} Arg0Struct;
typedef struct { u8 pad0[0x10]; f32 f10; f32 f14; } Arg3Struct;

void func_002895C8(Arg0Struct *arg0, s32 arg1, volatile P12 *arg2, Arg3Struct *arg3) {
    volatile P12 copy = *arg2;
    if (arg1 == 2 && arg0->unk450 != 0) {
        if (arg0->unk23C == 3 || arg0->unk23C == 5) {
            if (arg3 != NULL) {
                s32 r = func_0015A198(arg3->f14 - arg0->f14, arg3->f10 - arg0->f10);
                if ((u32)(r - arg0->unk38 + 0x270F) < 0x4E1F) {
                    u8 *p = (u8 *)arg0->unk48 + 0xB8;
                    s16 d = *(s16 *)p;
                    void (*fn)(void *, s32) = *(void (**)(void *, s32))(p + 4);
                    fn((u8 *)arg0 + d, 0xE);
                }
            }
        }
    }
}

s32 func_00289548(char *dst, char *src) {
    char *base = src;
    s32 t;
    src += func_00111B90();
    src += 4;
    t = *(s32 *)(src - 4);
    src += 4;
    *(s8 *)(dst + 0x3C0) = t;
    t = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x3C4) = t;
    t = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x450) = t;
    t = *(s32 *)(src - 4);
    func_002853A8(dst, 1);
    *(s32 *)(dst + 0xD0) = t;
    return src - base;
}
