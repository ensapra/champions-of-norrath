extern f32 D_004828C0, D_004828BC;
extern u32 D_00483E5C;
extern u8 D_0044E670[], D_004510D0[], D_00477FF8[], D_00486228[];
s32 func_00165DC0(void *, void *, u32, void *);
void func_0024D308(s32, s32, f32);

typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    u8 pad0[0xC];
    void *unkC;
    void *unk10;
    void *unk14;
    f32 f18;
} ObjB;
typedef struct {
    s16 at0;
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
            s->fn((u8 *)a + s->at0, 3);
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

void func_0029B0D0(u8 *obj, s8 arg1, s32 arg2, s32 arg3) {
    u8 *p = obj;
    u32 mul = 0x19660D;
    u32 seed = D_00483E5C;
    *p = arg1;
    *(u8 **)(p + 0x14) = D_0044E670;
    seed = seed * mul;
    *(s32 *)(p + 8) = arg3;
    *(s32 *)(p + 0xC) = arg2;
    *(s32 *)(p + 4) = 0;
    seed += 0x3C6EF35F;
    D_00483E5C = seed;
    *(f32 *)(p + 0x18) = D_004828BC;
    *(u32 *)(p + 0x10) = seed >> 16;
    *(u8 **)(p + 0x14) = D_004510D0;
    func_0024D308(func_00165DC0(D_00486228, D_00477FF8, seed, D_004510D0), arg2, 1.0f);
}

extern s32 D_00483F30;
extern u8 D_008D88B8[12];
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8*)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8[4] = 0;
        D_008D88B8[1] = 0;
        D_008D88B8[0] = 1;
        D_008D88B8[3] = 0x20;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}
