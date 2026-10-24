typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 data[1]; } Ring;

void func_001AE898(Ring *r)
{
    r->count++;
    r->wr++;
    if (r->wr == r->data + r->size) {
        r->wr = r->data;
    }
}

void func_001ABAB8();
void func_001ABB20();
void func_001ABBA0();
void func_001ABC08();

typedef struct S1A9868 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    struct S1A9868 *unk1C;
    void (*fn20)();
    void (*fn24)();
    void (*fn28)();
    void (*fn2C)();
    u8 pad30[0x24];
    s32 unk54;
} S1A9868;

void func_001A9868(S1A9868 *p, s16 a, s16 b, s32 c)
{
    p->unk54 = c;
    p->unkC = a;
    p->unkE = b;
    p->fn20 = func_001ABAB8;
    p->fn24 = func_001ABB20;
    p->fn28 = func_001ABBA0;
    p->fn2C = func_001ABC08;
    p->unk0 = 0;
    p->unk4 = 0;
    p->unk8 = 0;
    p->unk10 = 0;
    p->unk14 = 0;
    p->unk18 = 0;
    p->unk1C = p;
}

extern u8 jtbl_004C006C[];
extern s32 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B4778(s32 x)
{
    if (*(s32 *)(jtbl_004C006C + 0x3F48) < 0) {
        return 0;
    }
    D_0110B080[0] = x;
    if (func_001B08B0(D_0110B000, 1, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0) {
        return 0;
    }
    return D_0110B040[0];
}

s32 func_001B47E8(s32 a, s32 b, s32 c)
{
    if (*(s32 *)(jtbl_004C006C + 0x3F48) < 0) {
        return 0;
    }
    D_0110B080[0] = b;
    D_0110B080[1] = a;
    D_0110B080[2] = c;
    if (func_001B08B0(D_0110B000, 4, 0, D_0110B080, 0xC, D_0110B040, 4, 0, 0) < 0) {
        return 0;
    }
    return D_0110B040[0];
}
