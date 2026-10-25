s32 func_00143498(void *);
s32 func_00143830(void *);
void *func_00144368(s32, char *, void *);
u32 func_00153FA8(void);
s32 func_0028EFF8(void *, s16, s32);
extern char D_004778E8[];
f32 D_0048261C;
void func_0028DF70(void *arg0) {
    s32 random;
    *(f32 *)((u8 *)arg0 + 0x1c) = 16.0f;
    *(s16 *)((u8 *)arg0 + 0x38) = 0;
    *(s8 *)((u8 *)arg0 + 0x28) = 0x3c;
    *(s16 *)((u8 *)arg0 + 0x78) = 0;
    *(s16 *)((u8 *)arg0 + 0x7a) = 0;
    random = func_00153FA8() % 300;
    *(f32 *)((u8 *)arg0 + 0x68) = D_0048261C;
    *(s32 *)((u8 *)arg0 + 0x7c) = -1;
    *(f32 *)((u8 *)arg0 + 0x64) = 1.0f;
    *(f32 *)((u8 *)arg0 + 0x54) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0xc) |= 0x40001;
    *(s8 *)((u8 *)arg0 + 0x6c) = 0;
    *(f32 *)((u8 *)arg0 + 0x4c) = (f32)random;
    func_0028EFF8(arg0, *(s16 *)((u8 *)arg0 + 0x38), random);
    func_00143830(arg0);
    func_00143498(arg0);
    if (*(s8 *)((u8 *)arg0 + 0x6f)) {
        *(s16 *)((u8 *)arg0 + 0x76) = 0xfa;
        *(void **)((u8 *)arg0 + 0x4a4) = func_00144368(0x9c4, D_004778E8, (u8 *)arg0 + 0xbc);
        *(f32 *)((u8 *)arg0 + 0x50) = 600.0f;
    } else {
        *(f32 *)((u8 *)arg0 + 0x50) = 480.0f;
        *(s16 *)((u8 *)arg0 + 0x76) = 0x64;
        *(void **)((u8 *)arg0 + 0x4a4) = (u8 *)arg0 + 0xbc;
        if (*(s8 *)((u8 *)arg0 + 0x70))
            *(f32 *)((u8 *)arg0 + 0x50) = 240.0f;
    }
}
