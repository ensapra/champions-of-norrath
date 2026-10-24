s32 AddIntcHandler_3(s32, void *, s32);
void func_002D5C28(s32);
extern s32 D_00447F58[];
void func_002E7898(void);
void func_002E7848(void) {
    D_00447F58[0] = AddIntcHandler_3(9, func_002E7898, 0);
    *(volatile u32 *)0x10000000 = 0;
    *(volatile u32 *)0x10000010 = 0x282;
    func_002D5C28(9);
}

extern void func_003021B0(void *, s32, s32);
extern s32 func_002DD640(void);
extern void func_002DD698(void);
extern s32 D_004459C8[];
extern s32 D_004459CC[];
s32 func_002DF620(s32 a, s32 b) {
    s32 old;
    s32 r = func_002DD640();
    old = D_004459C8[0];
    D_004459C8[0] = a;
    D_004459CC[0] = b;
    func_003021B0((void *)a, 0, b * 16);
    if (r != 0) func_002DD698();
    return old;
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
    u8 pad4[0x222];
    s32 unk460;
} Arg0_247;
typedef struct { u8 pad0[0x10]; f32 f10; f32 f14; } Arg3_247;

void func_00247010(Arg0_247 *arg0, s32 arg1, volatile P12 *arg2, Arg3_247 *arg3) {
    volatile P12 copy = *arg2;
    if (arg1 == 2 && arg0->unk460 != 0) {
        if (arg0->unk23C == 3 || arg0->unk23C == 5) {
            if (arg3 != NULL) {
                s32 r = func_0015A198(arg3->f14 - arg0->f14, arg3->f10 - arg0->f10);
                if ((u32)(r - arg0->unk38 + 0x270F) < 0x4E1F) {
                    u8 *p = (u8 *)arg0->unk48 + 0xB8;
                    s16 d = *(s16 *)p;
                    void (*fn)(void *, s32) = *(void (**)(void *, s32))(p + 4);
                    fn((u8 *)arg0 + d, 0xF);
                }
            }
        }
    }
}

extern s32 func_00111B90(void);
extern void func_002442B8(void *, s32, s32);

s32 func_00246F80(char *dst, char *src) {
    char *base = src;
    s32 t, a;
    src += func_00111B90();
    src += 4;
    a = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x3C8) = a;
    *(s32 *)(dst + 0x3D0) = *(s32 *)(src - 4);
    src += 4;
    t = *(s32 *)(src - 4);
    src += 4;
    *(s32 *)(dst + 0x460) = t;
    *(s32 *)(dst + 0xD0) = *(s32 *)(src - 4);
    func_002442B8(dst, 1, t);
    if (*(s16 *)(dst + 0x23C) == 10) {
        *(s32 *)(dst + 0x464) = 0;
    }
    return src - base;
}
