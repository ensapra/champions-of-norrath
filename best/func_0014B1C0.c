typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0xC];
    f32 unk1C;
    f32 unk20;
    u8 pad24[4];
    s8 unk28;
    s8 unk29;
    u8 pad2A[0x22];
    void *unk4C;
    void *unk50;
    void *unk54;
    void *unk58;
    s32 unk5C;
    s32 unk60;
    u8 pad64[0x2C];
    s32 unk90;
    s32 unk94;
} Obj14B1C0;

void *func_00143D10(s32);
void *func_00165DC0(void *, void *);
void func_00163830(void *, void *, s32);
void func_00163BA0(void *);
void func_001438A0(void *);

#define READ(p, T) (p += sizeof(T), *(T *)(p - sizeof(T)))

s32 func_0014B1C0(Obj14B1C0 *o, u8 *p)
{
    u8 *start = p;
    s32 k = 1;

    o->unk4C = func_00143D10(READ(p, s32));
    o->unk50 = func_00143D10(READ(p, s32));
    o->unk54 = func_00143D10(READ(p, s32));
    o->unk58 = func_00143D10(READ(p, s32));
    o->unkC = READ(p, s32);
    o->unk94 = READ(p, s32);
    o->unk90 = READ(p, s32);
    o->unk20 = READ(p, s16);
    o->unk1C = READ(p, s16);
    o->unk29 = o->unk20;
    o->unk28 = o->unk1C;
    o->unk5C = (s32)func_00165DC0(o->unk4C, o->unk50);
    o->unk60 = (s32)func_00165DC0(o->unk4C, o->unk54);
    if (o->unk94 & 2) k = 4;
    func_00163830((u8 *)o + 0x64, func_00165DC0(o->unk4C, o->unk58), k);
    if (o->unk94 & 1)
        func_00163BA0((u8 *)o + 0x64);
    func_001438A0(o);
    return p - start;
}
