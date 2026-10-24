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
    u8 pad4[0x21A];
    s32 unk458;
} Arg0Struct;
typedef struct { u8 pad0[0x10]; f32 f10; f32 f14; } Arg3Struct;

void func_00289788(Arg0Struct *arg0, s32 arg1, volatile P12 *arg2, Arg3Struct *arg3) {
    volatile P12 copy = *arg2;
    if (arg1 == 2 && arg0->unk458 != 0) {
        if (arg0->unk23C == 3 || arg0->unk23C == 5) {
            if (arg3 != NULL) {
                s32 r = func_0015A198(arg3->f14 - arg0->f14, arg3->f10 - arg0->f10);
                if ((u32)(r - arg0->unk38 + 0x270F) < 0x4E1F) {
                    u8 *p = (u8 *)arg0->unk48 + 0xB8;
                    s16 d = *(s16 *)p;
                    void (*fn)(void *, s32) = *(void (**)(void *, s32))(p + 4);
                    fn((u8 *)arg0 + d, 0x10);
                }
            }
        }
    }
}

f32 D_004825B8;
extern u8 D_008D62D0[];
extern void func_00180D78(u8 *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);

void func_0028B718(s32 arg0, s32 arg1) {
    f32 f12 = 4.0f;
    f32 f13 = 6.0f;
    f32 f14 = D_004825B8;
    if (arg1 != 0xFFFF) {
        return;
    }
    if (arg0 != 1) {
        return;
    }
    func_00180D78(D_008D62D0, 0x127, 0xC3, 0x6F, 0x95, 0xE2, 0xB, 0xE, f12, f13, f14, 0x18, 2, arg0, 0, 0);
}
