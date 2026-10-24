void func_00157668(void *, void *, s16);
void func_00156CB0(void *, s32, s32);
void func_0016AE78(s32, s32, s32, void *, void *, s32, s32, s32, s32);
extern s32 D_0031F540[];

typedef struct __attribute__((packed, aligned(4))) { u64 a; s32 b; } P12;

void func_00249EB0(u8 *o) {
    u8 buf[0x40];
    P12 a;
    P12 b;
    P12 *p = (P12 *)(o + 0x3CC);
    if (*(s32 *)(o + 0x3DC) != 0) {
        s32 ang = *(u16 *)(o + 0x3D8);
        a = *p;
        func_00157668(buf, &a, ang - 0x4000);
        func_00156CB0(buf, 0, -0x1C18);
        b = *p;
        func_0016AE78(D_0031F540[2], D_0031F540[3], 3, &b, buf, 0, -1, 0, 0);
    }
}

s32 func_00249E60(u8 *o) {
    u8 *p = *(u8 **)(o + 0x3C0);
    if (p == NULL) return 0;
    if (!(*(s32 *)(*(u8 **)(p + 0xC) + 0xC) & 8)) return 1;
    return 0;
}
