f32 D_00482BE8;
f32 D_00482BEC;
f32 D_00482AA0;

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
    s16 unk38;
    s16 unk3A;
    char pad3C[6];
    s16 unk42;
    s16 unk44;
    s16 pad46;
    char pad48[4];
    f32 unk4C;
    s32 unk50;
} Param_002AC360;

void func_002AC360(volatile Param_002AC360 *p) {
    f32 a = D_00482BE8;
    f32 b = D_00482BEC;

    p->unk4C = b;
    p->unk18 = 0xE;
    p->unk1A = 0xF;
    p->unk28 = 2.0f;
    p->unk1C = 0xC;
    p->unk2C = 1.0f;
    p->unk14 = 6;
    p->unk1E = 0x19;
    p->unk30 = a;
    p->unk38 = 1;
    p->unk42 = 2;
    p->unkE = 1;
    p->unk24 = 2.0f;
    p->unk10 = 1;
    p->unk12 = 6;
}

void func_002A5088(volatile Param_002AC360 *p) {
    p->unk18 = 0x14;
    p->unk24 = 4.0f;
    p->unk1A = 0xA;
    p->unk42 = 2;
    p->unk4C = D_00482AA0;
    p->unk3A = 1;
    p->unk44 = 0xF;
    p->unk50 = 0;
    p->unkE = 0;
    p->unk10 = 1;
    *(volatile s32 *)&p->unk28 = 0;
    p->unk38 = 1;
}
