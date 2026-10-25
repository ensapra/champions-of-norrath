typedef struct { s32 x, y, z; } T12;
extern u8 D_004519A0[];
void func_001411F0(void *, void *, s32, s32);
void func_00143630(void *);
void func_00143830(void *);
void func_002A4670(void *p, T12 *src, s32 a2, s32 a3, s32 a4, s16 a5) {
    T12 t = *src;
    func_001411F0(p, &t, 0, 0);
    *(void **)((u8 *)p + 0x48) = D_004519A0;
    *(s32 *)((u8 *)p + 0xC) |= 0x421D;
    *(s32 *)((u8 *)p + 0x4C) = a3;
    *(s32 *)((u8 *)p + 0x54) = a4;
    *(s32 *)((u8 *)p + 0x50) = a2;
    *(T12 *)((u8 *)p + 0x10) = t;
    *(f32 *)((u8 *)p + 0x1C) = 24.0f;
    *(s16 *)((u8 *)p + 0x5C) = a5;
    *(s32 *)((u8 *)p + 0x58) = 0;
    *(s16 *)((u8 *)p + 0x5E) = 0;
    func_00143630(p);
    func_00143830(p);
}
