typedef struct __attribute__((packed, aligned(4))) { u32 w[3]; } C12;
typedef struct { C12 head; u8 pad[20]; } L32;
extern u8 D_0044A6F0[];
f32 D_00480B14;
void *func_001441B8(s32);
void func_001411F0(void *, void *, s32, s32);
void func_001E5828(void *, void *, s32, s32, s32, s32);
void func_001E5500(u8 *p, C12 *b) {
    L32 loc1;
    C12 loc2;
    f32 f;
    loc1.head = *b;
    func_001411F0(p, &loc1.head, 0, 0);
    *(s32 *)(p + 0xC) |= 0x4009;
    *(s32 *)(p + 0x48) = (s32)D_0044A6F0;
    void *tmp = func_001441B8(0x60);
    if (tmp) {
        loc2 = *(C12 *)(p + 0x10);
        func_001E5828(tmp, &loc2, 0x46, 0x56, 0x7E, 0xFA);
    }
    f = D_00480B14;
    p[0x54] = 1;
    *(s32 *)(p + 0x50) = 0;
    *(s32 *)(p + 0x58) = 0;
    *(f32 *)(p + 0x5C) = f;
}
