typedef struct __attribute__((packed, aligned(4))) {u64 a; s32 b;} P_002A48E0;
extern s32 func_001441B8(s32);
extern void func_002A3AD8(s32, s32, s32, volatile P_002A48E0 *, s32);

s32 func_002A48E0(s32 a, s32 b, s32 c, P_002A48E0 *d) {
    volatile P_002A48E0 copy = *d;
    s32 r = func_001441B8(0x78);
    if (r) func_002A3AD8(r, b, c, &copy, a);
    return r;
}

typedef struct {
    char pad0[0xE];
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 pad22;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
} Param_002A4888;

f32 D_00482A84;
f32 D_00482A88;
f32 D_00482A8C;
f32 D_00482A90;

void func_002A4888(volatile Param_002A4888 *p) {
    f32 a = D_00482A84;
    f32 b = D_00482A88;
    f32 c = D_00482A8C;
    f32 d = D_00482A90;

    p->unk18 = 0x56;
    p->unk30 = d;
    p->unk24 = a;
    p->unk10 = 7;
    p->unk1A = 0x20;
    p->unk28 = b;
    p->unk1C = 8;
    p->unk2C = c;
    p->unk1E = 1;
    p->unkE = 1;
    p->unk12 = 1;
    p->unk14 = 1;
}

f32 D_00482C28;
f32 D_00482C2C;
f32 D_00482C30;
f32 D_00482C34;

void func_002ADBA0(volatile Param_002A4888 *p) {
    f32 a = D_00482C28;
    f32 b = D_00482C2C;
    f32 c = D_00482C30;
    f32 d = D_00482C34;

    p->unk18 = 0xA;
    p->unk34 = d;
    p->unk24 = a;
    p->unk1A = 6;
    p->unk28 = b;
    p->unk1C = 0x14;
    p->unk2C = c;
    p->unk16 = 1;
    p->unk20 = 0x24;
    p->unkE = 1;
    p->unk10 = 1;
    p->unk12 = 1;
}
