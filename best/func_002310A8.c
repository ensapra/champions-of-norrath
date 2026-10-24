typedef struct { s64 a __attribute__((packed)); s32 b; } L12;
s32 func_001411F0();
void func_00143830();
extern s32 D_0044A930[];

void func_002310A8(u8 *o, void *src) {
    L12 loc;
    loc = *(L12 *)src;
    func_001411F0(o, &loc, 0, 0);
    *(void **)(o + 0x48) = D_0044A930;
    *(s8 *)(o + 0x28) = -0x10;
    *(s32 *)(o + 0xC) |= 1;
    *(u8 *)(o + 0x4C) = 0;
    *(u8 *)(o + 0x4D) = 0;
    func_00143830(o);
}
