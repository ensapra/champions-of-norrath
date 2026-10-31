/* identical to func_001E5DB0 (matched), with its names changed by decompdecomp */
extern void func_002FEDF0(void);

void ___14VIEffectVolume(s32 arg0, s32 arg1) {
    arg1 &= 1;
    if (arg1 != 0) {
        func_002FEDF0();
    }
}

typedef struct { u8 pad[0x52]; u16 unk52; } Rec;

s32 func_001E5D80(Rec *x, u16 *p) {
    u16 *q = p;

    *q = x->unk52;
    q++;
    return (s32)((s32)q - (s32)p);
}

s32 func_001E5D98(Rec *x, s8 *p) {
    s8 *q = p + 2;

    x->unk52 = *(s16 *)p;
    return (s32)((s32)q - (s32)p);
}

typedef struct { f32 x, y, z; } Vec3;
extern void func_001411F0(void *a0, Vec3 *a1, s32 a2, s32 a3);
extern s8 D_0044A660[144];
extern void func_00143830(void *a0, s32 a1);

typedef struct {
    u8  pad0[0xC];
    s32 unkC;                   /* +0C */
    u8  pad1[0x38 - 0x10];
    s16 unk38;                  /* +38 */
    u8  pad2[0x48 - 0x3A];
    u8 *unk48;                  /* +48 */
    u16 unk4C;                  /* +4C */
} Ent;

void func_001E5DE0(Ent *arg0, Vec3 *arg1, s16 arg2) {
    Vec3 local = *arg1;

    func_001411F0(arg0, &local, 0, 0);
    arg0->unk4C = 1;
    arg0->unk48 = (u8 *)D_0044A660;
    arg0->unk38 = arg2;
    arg0->unkC = 9;
    func_00143830(arg0, 9);
}
