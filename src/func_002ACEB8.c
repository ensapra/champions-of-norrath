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
} Param_002ACEB8;

f32 D_00482C08;
f32 D_00482C0C;
f32 D_00482C10;
f32 D_00482C14;

void func_002ACEB8(volatile Param_002ACEB8 *p) {
    f32 a = D_00482C08;
    f32 b = D_00482C0C;
    f32 c = D_00482C10;
    f32 d = D_00482C14;

    p->unk24 = a;
    p->unk34 = d;
    p->unk1A = 5;
    p->unk28 = b;
    p->unk1C = 0x32;
    p->unk2C = c;
    p->unk16 = 1;
    p->unk20 = 0x58;
    p->unkE = 1;
    p->unk18 = 1;
    p->unk10 = 1;
    p->unk12 = 1;
}
