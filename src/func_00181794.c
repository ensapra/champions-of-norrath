extern u8 func_001D1C80[];
s32 func_00181A88(s32);
s32 func_00181E68(s32);
s32 func_0019732C(void *);
s32 func_0019738C(void *);
s32 func_00197958(void *);
s32 func_0018B078(s32, void *);
s32 func_00192708(void *);
void *D_00480430;

s32 func_00181E20(s32 a) {
    return (s32)(f32)a >> 4;
}

s32 func_00182030(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    return *(s32 *)(p + *(s32 *)(p + 0x5BD0) * 4 + 0x5C38);
}

void func_00181F78(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    u8 *base = p + 0x470;
    u8 *cur = base + *(s32 *)(p + 0x5BD0) * 0xE90;
    if (func_00181A88(3) != 0) {
        *(s32 *)(p + 0x5C54) ^= 1;
        func_0019738C(cur);
        func_00181E68(func_00197958(base + *(s32 *)(p + 0x5BD0) * 0xE90));
        func_0019732C(base + *(s32 *)(p + 0x5BD0) * 0xE90);
    }
}

void func_00181794(void) {
    func_00192708(D_00480430 + 0xD0);
    *(f32 *)(D_00480430 + 0x100) = 1728.0f;
    *(f32 *)(D_00480430 + 0x104) = 1824.0f;
    func_0018B078(*(s32 *)(D_00480430 + 4), D_00480430 + 0xD0);
}
