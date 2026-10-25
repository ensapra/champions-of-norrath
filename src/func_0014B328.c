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
    s32 unk58;
    s32 unk5C;
} Obj14B328;

void *func_00143D10(s32);
s32 func_00165DC0(void *, void *);

#define READ(p, T) (p += sizeof(T), *(T *)(p - sizeof(T)))

s32 func_0014B328(Obj14B328 *o, u8 *p)
{
    u8 *start = p;

    o->unk4C = func_00143D10(READ(p, s32));
    o->unk50 = func_00143D10(READ(p, s32));
    o->unk54 = func_00143D10(READ(p, s32));
    o->unkC = READ(p, s32);
    o->unk20 = READ(p, s16);
    o->unk1C = READ(p, s16);
    o->unk29 = o->unk20;
    o->unk28 = o->unk1C;
    o->unk58 = func_00165DC0(o->unk4C, o->unk50);
    o->unk5C = func_00165DC0(o->unk4C, o->unk54);
    return p - start;
}
