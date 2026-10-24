extern f32 D_00482920, D_00482924, D_004828C0, D_004828BC;
extern s32 D_00483E5C;
extern u8 D_0044E670[], D_004510D0[], D_00477FF8[], D_00486228[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    u8 pad0[0x4C - 0x48];
    volatile f32 f4C, f50, f54;
} WepObj2;

void func_0029D1C0(WepObj2 *a) {
    f32 g20 = D_00482920, g24 = D_00482924;
    f32 five = 5.0f, two = 2.0f;
    a->f54 = g24;
    a->f18 = 0x4E;
    a->f24 = five;
    a->f2C = g20;
    a->f4C = two;
    a->f3C = 1;
    a->f46 = 2;
    a->f0E = 1;
    a->f10 = 1;
    a->f1A = 2;
    a->f28 = g20;
    a->f12 = 1;
    a->f1C = 2;
    a->f38 = 1;
    a->f42 = 2;
    a->f3A = 1;
    a->f44 = 2;
    a->f50 = g24;
}

s32 func_00165DC0(void *, void *, u32, void *);
void func_0024D308(s32, s32, f32);

void func_0029B0D0(void *obj, s8 arg1, s32 arg2, s32 arg3) {
    u32 seed = D_00483E5C * 0x19660D + 0x3C6EF35F;
    *(s8 *)obj = arg1;
    *(u8 **)((u8 *)obj + 0x14) = D_0044E670;
    *(s32 *)((u8 *)obj + 8) = arg3;
    *(s32 *)((u8 *)obj + 0xC) = arg2;
    *(s32 *)((u8 *)obj + 4) = 0;
    D_00483E5C = seed;
    *(f32 *)((u8 *)obj + 0x18) = D_004828BC;
    *(u32 *)((u8 *)obj + 0x10) = seed >> 16;
    *(u8 **)((u8 *)obj + 0x14) = D_004510D0;
    func_0024D308(func_00165DC0(D_00486228, D_00477FF8, seed, D_004510D0), arg2, 1.0f);
}

typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    u8 pad0[0xC];
    void *unkC;
    void *unk10;
    void *unk14;
    f32 f18;
} ObjB;
typedef struct {
    u8 pad0[8];
    s16 at8;
    u8 pad2[2];
    void (*fn)(void *, s32);
} Sub;

void func_0029B170(ObjB *a, Vec3 *v) {
    Vec3 local = *v;
    f32 d = a->f18 - D_004828C0;
    a->f18 = d;
    if (d < 0.0f) {
        if (a != 0) {
            Sub *s = (Sub *)((u8 *)a->unk14 + 8);
            s->fn((u8 *)a + s->at8, 3);
        }
    } else {
        void *p;
        f32 y = 1.0f;
        if (d < y) y = d;
        y = y * 128.0f;
        p = a->unkC;
        ((s16 *)((u8 *)p + 0x92))[0] = 0x71;
        ((s16 *)((u8 *)p + 0x8E))[0] = (s16)(s32)y;
        ((s16 *)((u8 *)p + 0x96))[0] = (s16)(s32)y;
    }
}
