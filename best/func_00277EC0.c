extern const f32 D_0048227C;
typedef struct { s32 a[3]; } T12;
typedef struct { s32 a[9]; } T36;
typedef struct { s32 a[4]; } T16;
s32 func_00271E68(void *, void *, s32, s32, f32);
s32 func_0015A2B0(void *, void *);
void func_00277EC0(u8 *p) {
    T16 t;
    func_00271E68(p + 0x7E0, p + 0x7EC, 0, 1, D_0048227C);
    *(T12 *)(p + 0x284) = *(T12 *)(p + 0x10);
    *(T36 *)(p + 0x480) = *(T36 *)(p + 0x45C);
    *(T12 *)(p + 0x4A4) = *(T12 *)(p + 0x260);
    *(T12 *)(p + 0x4B0) = *(T12 *)(p + 0x278);
    *(T12 *)(p + 0x10) = *(T12 *)(p + 0x26C);
    *(T16 *)(p + 0x43C) = *(T16 *)(p + 0x44C);
    func_0015A2B0(p + 0x45C, p + 0x43C);
}
